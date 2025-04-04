#include<memory>
#include<iostream>
#include<string>

class teacher{
private:

    class implementation;
    std::unique_ptr<implementation> pointerimpl;
public:
    teacher();
    ~teacher();
    
    void details();
    void addsub();
    void removesub();
};