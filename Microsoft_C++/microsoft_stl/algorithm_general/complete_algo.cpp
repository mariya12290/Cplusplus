#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int>vec{1,2,3,4,5,6,7,8};

    if(std::all_of(vec.begin(),vec.end(),[&](int i){ return i<10;})){
        std::cout<<"all the elements in vec are lesser than 10"<<std::endl;
    }

    if(std::none_of(vec.begin(),vec.end(),[&](int i){ return i<0;})){
        std::cout<<"all the elements in vec are greater than 0"<<std::endl;
    }

    std::for_each(vec.begin(),vec.end(),[&](int i){std::cout<<i<<" ";});
    std::cout<<std::endl;


    auto it = std::find(vec.begin(),vec.end(),5);
    if(it != vec.end()){
        std::cout<<" 5 is there in the vector "<<std::endl;
    }

     it = std::find_if(vec.begin(),vec.end(),[&](int i){ return i%2==0;});
    if(it != vec.end()){
        std::cout<<*it<<std::endl;
    }


     it = std::find_if_not(vec.begin(),vec.end(),[&](int i){ return i%2==0;});
    if(it != vec.end()){
        std::cout<<*it<<std::endl;
    }



}