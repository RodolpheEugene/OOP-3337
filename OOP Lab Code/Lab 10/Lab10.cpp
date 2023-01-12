
#include <iostream>
using namespace std;

template<typename T>

class myVector {
    // declare private data field
private:
    T* vec; 
    int capacity, numOfElements = 0; //Capacity and size of list
public:
    //Constructors
    myVector() {
        capacity = 4;
        vec = new T[capacity];
    }
    myVector(int capacity) 
    {
        this->capacity = capacity;
        vec = new T[capacity];
    }
    myVector(const myVector& vector) 
    {
        vec = new T[vector.capacity];
        capacity = vector.capacity;
        numOfElements = vector.numOfElements;
        for (int i = 0; i < numOfElements; i++)
            vec[i] = vector.vec[i];
    }
    // Destructor

    ~myVector() {
        delete[] vec;
    }

    // function to print values
    void print() {
        cout << "vec: (";
        for (int i = 0; i < numOfElements; i++)
            cout << vec[i] << ((numOfElements - i > 1) ? " " : "");
        cout << ")" << endl;
    }

    // functions to insert
    void insertBeg(T value) {
        numOfElements++;
        increaseCapacity();
        for (int i = numOfElements - 1; i >= 0; i--) {
            vec[i] = vec[i - 1];
        }
        vec[0] = value;
    }
    void insertEnd(T value) {
        increaseCapacity();
        vec[numOfElements++] = value;
    }
    
    // functions to remove
    void removeBeg() {
        for (int i = 0; i < numOfElements; i++)
            vec[i] = vec[i + 1];
        numOfElements--;
        decreaseCapacity();
    }
    void removeEnd() {
        T* old = vec;
        vec = new T[capacity];
        numOfElements--;
        for (int i = 0; i < numOfElements; i++)
            vec[i] = old[i];
        delete[] old;
        decreaseCapacity();
    }
    
    // function to increase capacity
    void increaseCapacity() {
        if (numOfElements >= capacity)
        {
            T* old = vec;
            capacity = 2 * numOfElements;
            vec = new T[numOfElements * 2];

            for (int i = 0; i < numOfElements; i++)
                vec[i] = old[i];

            delete[] old;
        }
    }

    // function to decrease capacity
    void decreaseCapacity() {
        if (numOfElements == capacity / 2)
        {
            T* old = vec;
            capacity = .5 * numOfElements;
            vec = new T[numOfElements * 2];

            for (int i = 0; i < numOfElements; i++)
                vec[i] = old[i];

            delete[] old;
        }
    }
    
    // function to compare
    bool operator == (const myVector& secondVector) {
        if (numOfElements == secondVector.numOfElements) {
            for (int i = 0; i < numOfElements; i++)
                if (vec[i] != secondVector.vec[i])
                    return false;
            return true;
        }
        else return false;
    }
};

int main() 
{
    // create object intVector
    // call insert and remove functions
    cout << "intVector created no elements at the beginning" << endl;
    myVector<int> intVector = myVector<int>(); intVector.print();
    cout << "intVector.insertEnd(4):" << endl;
    intVector.insertEnd(4); intVector.print();
    cout << "intVector.insertBeg(3):" << endl;
    intVector.insertBeg(3); intVector.print();
    cout << "intVector.insertEnd(6):" << endl;
    intVector.insertEnd(6); intVector.print();
    cout << "intVector.insertEnd(2):" << endl;
    intVector.insertEnd(2); intVector.print();
    cout << "intVector.insertBeg(1):" << endl;
    intVector.insertBeg(1); intVector.print();
    cout << "intVector.removeEnd():" << endl;
    intVector.removeEnd(); intVector.print();
    cout << "intVector.removeBeg():" << endl;
    intVector.removeBeg(); intVector.print();

    // create object intVector2
    // call the insert functions for intVector
    cout << "intVector2.created: no elements at the beginning" << endl;
    myVector<int> intVector2 = myVector<int>(); intVector2.print();
    cout << "intVector2.insertEnd(4):" << endl;
    intVector2.insertEnd(4); intVector2.print();
    cout << "intVector2.insertBeg(7):" << endl;
    intVector2.insertBeg(7); intVector2.print();
    cout << "intVector2.insertEnd(6):" << endl;
    intVector2.insertEnd(6); intVector2.print();
    cout << "intVector2.insertEnd(2):" << endl;
    intVector2.insertEnd(2); intVector2.print();
    cout << "intVector2.insertBeg(1):" << endl;
    intVector2.insertBeg(1); intVector2.print();
    cout << "intVector2.removeEnd():" << endl;
    intVector2.removeEnd(); intVector2.print();
    cout << "intVector2.removeBeg():" << endl;
    intVector2.removeBeg(); intVector2.print();
    cout << ((intVector == intVector2) ? "Integer vectors are the same" : "Integer vectors are not the same") << endl;
    
    // create intVector2 object
    // call insert and remove functions
    cout << "charVector1.created: no elements at the beginning" << endl;
    myVector<char> charVector = myVector<char>(); charVector.print();
    cout << "charVector.insertEnd('a'):" << endl;
    charVector.insertEnd('a'); charVector.print();
    cout << "charVector.insertBeg('b'):" << endl;
    charVector.insertBeg('b'); charVector.print();
    cout << "charVector.insertEnd('c'):" << endl;
    charVector.insertEnd('c'); charVector.print();
    cout << "charVector.insertEnd('d'):" << endl;
    charVector.insertEnd('d'); charVector.print();
    cout << "charVector.insertBeg('e'):" << endl;
    charVector.insertBeg('e'); charVector.print();
    cout << "charVector.removeEnd():" << endl;
    charVector.removeEnd(); charVector.print();
    cout << "charVector.removeBeg():" << endl;
    charVector.removeBeg(); charVector.print();
    
    // create objeect charVector
    // call insert and remove functions
    cout << "charVector1.created: no elements at the beginning" << endl;
    myVector<char> charVector2 = myVector<char>(); charVector.print();
    cout << "charVector2.insertEnd('a'):" << endl;
    charVector2.insertEnd('a'); charVector2.print();
    cout << "charVector2.insertBeg('b'):" << endl;
    charVector2.insertBeg('b'); charVector2.print();
    cout << "charVector2.insertEnd('c'):" << endl;
    charVector2.insertEnd('c'); charVector2.print();
    cout << "charVector2.insertEnd('d'):" << endl;
    charVector2.insertEnd('d'); charVector2.print();
    cout << "charVector2.insertBeg('e'):" << endl;
    charVector2.insertBeg('e'); charVector2.print();
    cout << "charVector2.removeEnd():" << endl;
    charVector2.removeEnd(); charVector2.print();
    cout << "charVector2.removeBeg():" << endl;
    charVector2.removeBeg(); charVector2.print();
    cout << ((charVector == charVector2) ? "Character vectors are the same" : "Character vectors are not the same") << endl;
}
