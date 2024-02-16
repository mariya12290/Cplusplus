#include <iostream>
#include <thread>
#include <string>

void f(int i, std::string const& s){
    for(int j{};j<i;++j){
        std::cout<<s<<" ";
    }
    std::cout<<"\n";
}

void oops(){
    char buffer[4] ={'s','u','r','i'};
    /** //buffer is a pointer to local variable in oops, there
     * there might be chance that oops will be existed befroe f*/
  //  std::thread t(f,100,buffer);  //so cast char to string to avoid dangling pointer
    std::thread t(f,100, std::string(buffer));
    t.detach();
    std::cout<<"oops thread is finished "<<std::endl;
}

int main(){

oops();


    return 0;
}