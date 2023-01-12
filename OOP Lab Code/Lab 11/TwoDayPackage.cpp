#include "TwoDayPackage.h"
#include <string>
#include <iostream>
using namespace std;
using TDP = TwoDayPackage;

TDP::TwoDayPackage(const string &name, const string &address, const string &city, const string &state, int ZIP, double weight, double costPerOunce, double flatfee) : Package(name,address, city, state,ZIP, weight, costPerOunce){
    setFlatFee(flatfee);
}
void TDP::setFlatFee(double flatfee){
    if (flatfee > 0)
        this -> flatfee = flatfee;
    else{
        cout << "Flat fee should be a postive number, flat fee set to 0" << endl;
        this -> flatfee = 0; 
    }
}
double TDP::calculateCost() const{return (weight*costPerOunce) + flatfee;}
void TDP::printPackageInfo(){
    cout << 
    "---------------------------------------" << endl <<
    "Two Day Package id " << ID << ":" << endl << endl << 
    name << endl << 
    address << endl << 
    city << ", " << state << " " << ZIP << endl << endl <<
    "Cost: $" << calculateCost() << endl << 
    "---------------------------------------" << endl;
}