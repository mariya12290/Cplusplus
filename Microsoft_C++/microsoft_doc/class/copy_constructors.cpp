#include <iostream>

class Base{
    public:
    Base(int i):m_i{i}{}
    //copy constructor
    Base b(const Base&);

    private:
    int m_i{};
};

int main(){

    Base b{10};
    Base b1{b};

}