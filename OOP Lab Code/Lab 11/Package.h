#pragma once
#include <string>
using namespace std;

class Package{
public:
    Package(const string& name, const string& address, const string& city, const string& state, int ZIP, double weight, double costPerOunce);
    double calculateCost() const;
    void setWeight(double weight);
    void setCostPerOunce(double costPerOunce);
    void printPackageInfo();

protected:
    string name;
    string address;
    string city;
    string state;
    int ZIP;
    double weight;
    double costPerOunce;
    static int ID;
};