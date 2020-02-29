/*
 * File:   BubbleSortDecreasing.h
 * Author: Zhuoqun Xia; Xiang Shulin
 * PID:    A52805394  ; A52978593
 * Created on February 23, 2018, 2:50 PM
 */

#ifndef BUBBLESORTDECREASING_H
#define	BUBBLESORTDECREASING_H

#include "Bubblesort.h"

class BubbleSortDecreasing: public BubbleSort{
    public:
    virtual void sort(PetDatabaseSortable* input){
        bool sorted = false;
        int n = input ->getSize();
        while(!sorted){
            sorted = true;
            for(int i = 0; i<n-1; i++){
                if(needSwap(input,i,i+1)){
                    input->swap(i,i+1);
                    sorted = false;
                }
            }
            n--;
        }
    };
    virtual bool needSwap(PetDatabaseSortable* input, int i, int j){
        return input->smaller(i,j);
    }
};

#endif	/* BUBBLESORTDECREASING_H */

