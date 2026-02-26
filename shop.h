#pragma once
#include "iostream"
#include "fstream"
using namespace std;

class shop{
    protected:
    int discount;
    public:
    shop(int d) {
        discount =d;
    }
    virtual void print() =0; 
    
};