/*
 * File:   Bird.h
 * Author: Zhuoqun Xia; Xiang Shulin
 * PID:    A52805394  ; A52978593
 * Created on February 23, 2018, 2:47 PM
 */

#ifndef BIRD_H
#define	BIRD_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Pet.h"
using namespace std;

class Bird: public Pet{
protected:
    vector<Pet*> pet_pointer_vec;
    bool nocturanal;
public:
    virtual void print() const{

        cout.width(10);
        cout<<left;
        cout<<"Name:   "<<Name<<"   "<<" Type:   "<<Type<<"   "<<" Weight:   "<<Weight<<"   "<<" Price:   "<< std::fixed<<std::setprecision(2)<<Price<<"   "<<" Nocturanal:   "<<nocturanal<<endl;
    }

    Bird(const string& name, const string& type,  const double& price, const unsigned int& weight, const bool& Nocturanal){
        Name = name;
        Type = type;
        Weight = weight;
        Price = price;
        nocturanal = Nocturanal;
    }
    ~Bird(){}
};


#endif	/* BIRD_H */

