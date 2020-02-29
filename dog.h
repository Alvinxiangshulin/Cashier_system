#ifndef DOG_H
#define	DOG_H

#include <iostream>
#include <vector>
#include <string>
#include "Pet.h"
using namespace std;

class Dog: public Pet{
public:

    Dog(const string& name, const string& type, const double& price, const unsigned int& weight, const string& Category):Pet(name,type,price,weight,Category){}
    ~Dog(){}
};


#endif	/* DOG_H */
