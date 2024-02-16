#include <iostream>
//https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean

class Foo{
    public:
    // Foo(int foo):m_foo{foo}{

    // }
    explicit Foo(int foo):m_foo{foo}{
        
    }

    int GetFoo(){
        return m_foo;
    }
    private:
    int m_foo{};
};

void DoBar(Foo foo){
    int i= foo.GetFoo();
    std::cout<<i<<std::endl;
}

int main(){

/** compiler conver object of int to foo object, which take one single parameter */
DoBar(40);

}