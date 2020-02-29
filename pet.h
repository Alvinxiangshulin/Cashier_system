/*
 * File:   Pet.h
 * Author: Zhuoqun Xia; Xiang Shulin
 * PID:    A52805394  ; A52978593
 * Created on February 23, 2018, 2:47 PM
 */

#ifndef PET_H
#define	PET_H
#include <string>
#include <iostream>
using namespace std;

class Pet{
protected:
    string Name;
    string Type;
    unsigned int Weight;
    double Price;
public:
    string GetName() const {return Name;};
    string GetType() const {return Type;};
    unsigned int GetWeight() const {return Weight;};
    double GetPrice() const {return Price;};
    void SetName(const string& name){Name=name;}
    void SetType(const string& type){Type = type;}
    void SetPrice(const double& price){Price = price;}
    void SetWeight(const unsigned int& weight){Weight=weight;}
    virtual void print() const = 0;
    ~Pet(){}
};


#endif	/* PET_H */

