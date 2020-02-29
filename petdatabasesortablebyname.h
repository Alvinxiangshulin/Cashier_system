/*
 * File:   PetDatabaseSortableByName.h
 * Author: Zhuoqun Xia; Shulin Xiang
 * PID:    A52805394  ; A52978593
 * Created on February 23, 2018, 2:48 PM
 */

#ifndef PETDATABASESORTABLEBYNAME_H
#define	PETDATABASESORTABLEBYNAME_H
#include "PetDatabaseSortable.h"

class PetDatabaseSortableByName: public PetDatabaseSortable{
    protected:
        vector<Pet*> allPets;
    public:
        virtual unsigned int getSize() const{return allPets.size();}
        string getName(int i) const{
            return allPets[i] ->GetName();
        }
        virtual bool smaller(int i, int j) const {
            if (getName(i) < getName(j)){
                return true;
            }
            else{
                return false;
            }
        }
        virtual void swap(int i, int j){
            Pet* temp = allPets[i];
            allPets[i]=allPets[j];
            allPets[j]=temp;
        }
        virtual void DisplayRecords() {
            for(int i = 0; i< getSize(); i++){
                allPets[i]->print();
            }
        }
        PetDatabaseSortableByName(const vector<Pet*> & input){
            for(int i = 0; i < input.size(); i++){
                allPets.push_back(input[i]);
            }
        }
};


#endif	/* PETDATABASESORTABLEBYNAME_H */

