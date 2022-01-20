#include <iostream>
#include <string>
#include <vector>

class Base{
    public:
    Base(){
        std::cout<<"Base class constructor "<<std::endl;
    }

    ~Base(){
        std::cout<<"Base class destructor "<<std::endl;
    }
};

class Derived : public Base{
    public:
    Derived(int n):N{n}{

        std::cout<<"Derived class constructor "<<std::endl;
        arr = new int[static_cast<std::size_t>(N)];

    }
    ~Derived(){

        std::cout<<"Derived class Destructor "<<std::endl;
        delete [] arr;
    }
    private:
    int* arr;
    int N{};
};




int main(){

Base* b = new Derived(10);

delete b;


    return 0;
}