#include "header.h"
#include<iostream>
#include<memory>

//teacher::teacher(){};
using namespace std;
class teacher::implementation{
public:
    int subcount = 0;
    std::string name = "henry";
    
    void details(){
        cout<<"name: "<<name<<endl;
        cout<<"subcount: "<<subcount<<endl;
    }
    void addsub(){
        subcount++;
    }
    void removesub(){
        subcount--;
    }
};
teacher::teacher(){
    pointerimpl = std::make_unique<implementation>();
} 

teacher::~teacher() = default; 

void teacher::details(){
    pointerimpl->details();
}
void teacher::addsub(){
    pointerimpl->addsub();
}
void teacher::removesub(){
    pointerimpl->removesub();
}