#include <iostream>
#include <vector>
#include <memory>



class Widget{
    public:
    Widget(const int size){data= std::make_unique<int>(size);}

    void doSomething(){
        *data = 100;
        std::cout<<*data<<std::endl;

    }

    private:
    std::unique_ptr<int>data;
};
int main(){

std::unique_ptr<Widget>w{new Widget(10)};

w->doSomething();


int j = 0x123;
std::cout<<j<<std::endl;
int k = 0377;
std::cout<<k<<std::endl;


    return 0;
}