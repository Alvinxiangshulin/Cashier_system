/*
 * File:   Bubblesort.h
 * Author: Zhuoqun Xia; Xiang Shulin
 *
 * Created on February 23, 2018, 3:01 PM
 */

#ifndef BUBBLESORT_H
#define	BUBBLESORT_H
#include "PetDatabaseSortable.h"

class BubbleSort{
public:
    virtual void sort(PetDatabaseSortable* input){
        bool sorted = false;
        int n =  input -> getSize();
        while(!sorted){
            sorted = true;
            for(int i = 0; i<n-1; i++){
                if(needSwap(input,i,i+1)){
                    input -> swap(i,i+1);
                    sorted = false;
                }
            }
            n--;
        }
    };
    virtual bool needSwap(PetDatabaseSortable* input, int i, int j) = 0;
};



#endif	/* BUBBLESORT_H */

