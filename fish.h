/*
 * File:   Fish.h
 * Author: Zhuoqun Xia; Xiang Shulin
 * PID:    A52805394  ; A52978593
 * Created on February 23, 2018, 2:47 PM
 */

#ifndef FISH_H
#define	FISH_H
#include <iostream>
#include <string>
#include <vector>
#include "Pet.h"
using namespace std;

class Fish: public Pet{
public:
    Fish(const string& name, const string& type, const double& price, const unsigned int& weight, const string& Water){}
    ~Fish(){}
};


#endif	/* FISH_H */

