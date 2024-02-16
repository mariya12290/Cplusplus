#include <iostream>
#include <tuple>
#include <string>
#include <vector>

int main(){

    std::tuple<std::string, int>tu{"suri",1};

    const auto& [name, num] = tu;

    std::cout<<name<<" "<<num<<" "<<std::endl;

    if(auto n=num){
        std::cout<<"C++17 feature came out"<<std::endl;

    }

    std::vector<int>vec{1,2,3,4,5};

    if(auto it=vec.begin();it!=vec.end()){
        std::cout<<"vector "<<std::endl;
    }
    return 0;

}