#include <iostream>
#include <thread>
#include <string>

void f(int i, int &z){
    for(int j{};j<i;++j){
        z+=1;
    }
    std::cout<<"\n";
}

void oops(int &i){
 
    /** //raise error, bcoz i is copied and converted into r value, where as f is expecting l value ref*/
   // std::thread t(f,100,i ); 
   //so correct form is
   std::thread t(f,100, std::ref(i));
    t.detach();
    std::cout<<"oops thread is finished "<<std::endl;
}

int main(){

int i{0};
std::cout<<i<<std::endl;//before passing data to f thread
oops(i);
std::cout<<i<<std::endl;//after passing data to f thread


    return 0;
}