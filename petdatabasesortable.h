/*
 * File:   PetDatabaseSortable.h
 * Author: Zhuoqun Xia; Shulin Xiang
 * PID:    A52805394  ; A52978593
 * Created on February 23, 2018, 3:03 PM
 */

#ifndef PETDATABASESORTABLE_H
#define	PETDATABASESORTABLE_H

#include "pet.h"
#include <vector>
using namespace std;

class PetDatabaseSortable{
    public:
        virtual unsigned int getSize() const = 0;
        virtual bool smaller(int i, int j) const = 0;
        virtual void DisplayRecords() = 0;
        virtual void swap(int i, int j) = 0;
};

#endif	/* PETDATABASESORTABLE_H */

