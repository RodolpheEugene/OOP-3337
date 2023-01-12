#include <iostream>
#include "MySet.h"
using namespace std;

MySet::MySet(unsigned int range)
{
    this->range = range;

    set = new bool[range +1];
    for (int i = 0; i <= range; i++)
    {
        set[i]=false;
        size = 0;
    }

}
MySet::MySet(const MySet &s)
{
    if (this != &s)
    {
        range = s.range;
        size = s.size;

        set = new bool[s.range+1];
        for (int i = 0; i <= range; i++)
        set[i] = s.set[i];
    }
}
void MySet::insertElement(int k)
{
    if (k < 0 || k > range)
    {
        cout << "Warning " << k << " is out of the range [0, " << range << "]" << endl;
    }
    else if (set[k])
    {
        cout << "Warning " << " is already in set" << endl;
    }
    else
    {
        size ++;
        set[k] = true;
    }
}
void MySet::deleteElement(int k)
{
    if (k < 0 || k > range)
    {
        cout << "Warning " << k << " is out of the range" << endl;
    }
    else
    {
        set[k] = false;
        size--;
    }
}  
void MySet::printSet()
{
    if (size == 0)
    cout << "{ --- }" << endl;
    else{
        int count = 0;
        cout << "{ ";
        for (int i = 0; i <= range; i++)
        {
            if (set[i])
            {
                count++;
                cout << i << (count == size ? " " : ", ");
            }
        }
        cout << "}" << endl;
    }
}
bool MySet::isEqualTo(const MySet &a)
{
    if (size != a.size || range != a.range)
    
        return false;
    else
    {
        for (int i = 0; i < range; i++)
            if (set[i] != a.set[i])
            {
                return false;
            }
        return true;
    }
}
MySet::~MySet()
{
    delete[] set;
}


