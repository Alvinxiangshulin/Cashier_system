#ifndef CAT_H
#define	CAT_H
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Pet.h"
using namespace std;

class Cat:  public Pet{
protected:
    vector<Pet*> pet_pointer_vec;
    bool fluffy;
public:
    virtual void print() const{
        cout.width(10);
        cout<<left;
        cout<<"Name:   "<<Name<<"   "<<" Type:   "<<Type<<"   "<<" Weight:   "<<Weight<<"   "<<" Price:   "<< std::fixed<<std::setprecision(2)<<Price<<"   "<<" Fluffy:   "<<fluffy<<endl;
    }
    Cat(const string& name, const string& type, const double& price, const unsigned int& weight, const bool& Fluffy){
        Name = name;
        Type = type;
        Weight = weight;
        Price = price;
        fluffy = Fluffy;
    }
    ~Cat(){}
};


#endif	/* CAT_H */
