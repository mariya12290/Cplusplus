#include <iomanip>
#include <iostream>
#include <string>
#include <memory>
//https://refactoring.guru/design-patterns/singleton/cpp/example
/** Creation of one single instance of a class */

//Application
/** When building the interface between two different application, we need to create only single instance of object to interact between 
 * two applications */


class Singleton{
    protected:
    Singleton(const std::string value):m_value{value}{

    }
    static Singleton* singleton;
    std::string m_value{};
    public:
    /** Singleton should not be clonable */
    Singleton(Singleton &other) = delete;
     /** Singleton should not be assignable */
     void operator=(const Singleton &) = delete;

      /**
     * This is the static method that controls the access to the singleton
     * instance. On the first run, it creates a singleton object and places it
     * into the static field. On subsequent runs, it returns the client existing
     * object stored in the static field.
     */
    static Singleton *GetInstance(const std::string & value);

    void print(){
        std::cout<<"Singleton"<<std::endl;
    }


};

Singleton* Singleton::singleton= nullptr;

Singleton *Singleton::GetInstance(const std::string&value){
    if(singleton==nullptr){
        singleton = new Singleton(value);
    }
    return singleton;
}
int main(){

std::string value{"suri"};
Singleton *ptr = Singleton::GetInstance(value);

ptr->print();


    return 0;
}