#include <iostream>
using namespace std;

class Rectangle
{
private:
    // bottom-left 
    double x1;
    double y1;
    // top-right
    double x2;
    double y2;

public:

    // constructors
    Rectangle() {
        x1 = 0;
        y1 = 0;
        x2 = 10;
        y2 = 10;
    }
    Rectangle(double x1, double y1, double x2, double y2) {
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
    }

    // accessors
    double getx1(void) const {
        return x1;
    }
    double gety1(void) const {
        return y1;
    }
    double getx2(void) const {
        return x2;
    }
    double gety2(void) const {
        return y2;
    }

    // mutators
    void setx1(double x) {
        x1 = x;
    }
    void sety1(double y) {
        y1 = y;
    }
    void setx2(double x) {
        x2 = x;
    }
    void sety2(double y) {
        y2 = y;
    }

    // a point (x,y) inside this rectangle
    bool contains(double x, double y) const {
        return (x1 < x&& x < x2) && (y1 < y&& y < y2);
    }
    // this rectangle contains rectangle another
    bool contains(const Rectangle& another) const {
        return (x1 < another.getx1() && another.getx2() < x2) && (y1 < another.gety1() && another.gety2() < y2);
    }
    // this rectangle overlaps rectangle another 
    bool overlaps(const Rectangle& another) const {
        return !(x2<another.getx1() || x1>another.getx2() || y2<another.gety1() || y1>another.gety2());
    }
};


int main()
{
    // creates three Rectangle objects
    Rectangle r1(2 , 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4);


    cout << "r1.contains(3,3): " << r1.contains(3,3) << endl;
    cout << "r1.contains(r2): " << r1.contains(r1) << endl;
    cout << "r1.overlaps(r3): " << r1.overlaps(r1) << endl;
}