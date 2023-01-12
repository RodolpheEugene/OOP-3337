#include "Package.h"
#include <string>
#include <iostream>
using namespace std;
using P = Package;

int P::ID = 0;

P::Package(const string& name, const string& address, const string& city, const string& state, int ZIP, double weight, double costPerOunce){
    this -> name = name;
    this -> address = address;
    this -> city = city;
    this -> state = state;
    this -> ZIP = ZIP;
    setWeight(weight);
    setCostPerOunce(costPerOunce);
    ID++;
}
double P::calculateCost() const{return weight*costPerOunce;}
void P::setWeight(double weight){
    if (weight > 0)
        this -> weight = weight;
    else{
        cout << "Weight should be a postive number, weight set to 0" << endl;
        this -> weight = 0; 
    }
}
void P::setCostPerOunce(double costPerOunce){
    if (costPerOunce > 0)
        this -> costPerOunce = costPerOunce;
    else{
        cout << "Cost per ounce should be a postive number, cost per ounce set to 0" << endl;
        this -> costPerOunce = 0; 
    }
}
void P::printPackageInfo(){
    cout << 
    "---------------------------------------" << endl << endl << 
    "Package id " << ID << ":\n"<< endl << 
    name << endl << 
    address << endl << 
    city << ", " << state << " " << ZIP << endl << endl <<
    "Cost: $" << calculateCost() << endl << 
    "---------------------------------------" << endl;
}