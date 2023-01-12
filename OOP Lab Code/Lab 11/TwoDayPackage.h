#pragma once
#include "Package.h"
using namespace std;

class TwoDayPackage: Package{
public:
    TwoDayPackage(const string &name, const string &address, const string &city, const string &state, int ZIP, double weight, double costPerOunce, double flatfee);
    void setFlatFee(double flatfee);
    double calculateCost() const;
    void printPackageInfo();

private:
    double flatfee;
};