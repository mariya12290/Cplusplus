#include <iostream>
#include <string>
#include <vector>

class Base{
    public:
    Base(){
        std::cout<<"Base class constructor "<<std::endl;
    }

    // ~Base(){
    //     std::cout<<"Base class destructor "<<std::endl;
    // }

    virtual ~Base(){
        std::cout<<"Base class virtual destructor "<<std::endl;
    }
};

class Derived : public Base{
    public:
    Derived(int n):N{n}{

        std::cout<<"Derived class constructor "<<std::endl;
        arr = new int[static_cast<std::size_t>(N)];

    }
    // ~Derived(){

    //     std::cout<<"Derived class Destructor "<<std::endl;
    //     delete [] arr;
    // }

    virtual ~Derived(){
        std::cout<<"Derived class virtual destructor "<<std::endl;
    }
    private:
    int* arr;
    int N{};
};




int main(){

Base* b = new Derived(10);

delete b;  
/** Without virtaul, Derived destructor is not called , so no de allocation of memory */



    return 0;
}