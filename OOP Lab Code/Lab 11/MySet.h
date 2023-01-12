//#pragma once
#ifndef _MYSET_H
#define _MYSET_H
class MySet
{
// declare data fields
private:
    unsigned int range, size;
    bool *set;

public:
    // constructors
    MySet(unsigned);

    // copy contructor 
    MySet(const MySet&);

    // Destructor
    ~MySet();

    // function methods
    void insertElement(int k);
    void deleteElement(int k);
    void printSet();
    bool isEqualTo(const MySet &);
};

#endif