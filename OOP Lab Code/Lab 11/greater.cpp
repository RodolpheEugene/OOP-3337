#include <iostream>
#include <string>
using namespace std;

// create a generic function
template<typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2)
{
    T max1 = list1[0];
    for (int i = 0; i <= size1 - 1 ; i++)
    {
        if (max1 > list1[i])
        {
            max1 = list1[i];
        }
    }

    T min2 = list2[0];
    for (int i = 1; i <= size2 + 1  ; i++)
    {
        if (min2 < list2[i])
        {
            min2 = list2[i];
        }
    }
    
    return (max1 > min2);
}
int main()
{
    // testing for int values
    cout << "Are the elements in the left array larger than any elements in the right array?" << endl;
    int int_list1[] = {9, 10, 11, 13};
    int int_list2[] = {5, 3, 2, 7};
    cout <<" {9, 10, 11, 13} > {5, 3, 2, 7}? " << isGreater(int_list1, int_list2, 4,4) << endl;

    // testing for double values
    double double_list1[] = {9.4, 10.3, 11.2, 2.3};
    double double_list2[] = {5.1, 3.2, 2.3, 7.4};
    cout << " {9.4, 10.3, 11.2, 2.3} > {5.1, 3.2, 2.3, 7.4}? " << isGreater(double_list1, double_list2, 4, 4) << endl;

    // testing for for string values
    string str_list1[] = {"Miami", "Lakeland", "Tampa", "Orlando"}; 
    string str_list2[] = {"Dallas", "Austin", "Antonia"};
    cout << " {\"Miami\", \"Lakeland\", \"Tampa\", \"Orlando\"} > {\"Dallas\", \"Austin\", \"Antonia\"}? " << isGreater(str_list1, str_list2, 4, 3) << endl;
}