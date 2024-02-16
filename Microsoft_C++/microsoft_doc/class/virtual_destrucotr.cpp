#include <iostream>


class Base{
    public:
    Base(){
        std::cout<<"Base constructor "<<std::endl;
    }
    // ~Base(){
    //     std::cout<<"Base destrucotr "<<std::endl;
    // }
    virtual void print(){
        std::cout<<"print base "<<std::endl;
    }
    virtual ~Base(){
         std::cout<<"virtual Base destrucotr "<<std::endl;
    }
};

class Derived :public Base{
    public:
    Derived(){
        std::cout<<"Derived constructor "<<std::endl;
    }
    // ~Derived(){
    //     std::cout<<"Derived destrucotr "<<std::endl;
    // }

    virtual ~Derived(){
        std::cout<<" virtual Derived destrucotr "<<std::endl;
    }

    void print() override{
        std::cout<<"print derived "<<std::endl;
    }
};

int main(){

    Base *b = new Derived;
    b->print();
    /** call only base destructor, not derived destrucotr 
     * Threfore memory leak happend */
    delete b;
}