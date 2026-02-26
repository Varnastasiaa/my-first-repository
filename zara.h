#include "shop.h"
#pragma once

class zara: public shop{
    public:
    zara(): shop(20){};
    void print(){
        cout<<"bill\n";
        cout<<"------------------\n";
        cout<<"Zara\n";
        cout<<"discount: "<<discount<<"%\n";
    }
};