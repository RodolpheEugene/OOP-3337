#pragma once
#include "Package.h"
using namespace std;

class OvernightPackage: Package{
public:
    OvernightPackage(const string &name, const string &address, const string &city, const string &state, int ZIP, double weight, double costPerOunce, double extraFeePerOunce);
    void setOvernightFeePerOunce(double extrafeePerOunce);
    double calculateCost() const;
    void printPackageInfo();
private:
    double extraFeePerOunce;
};