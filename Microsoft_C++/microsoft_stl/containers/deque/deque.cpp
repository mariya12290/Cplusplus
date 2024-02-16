#include <iostream>
#include <vector>
#include <deque>
#include <string>


int main(){

    std::deque<int>d1;

    d1.assign(4,100);

    for(const auto&i:d1){
        std::cout<<i<<" ";
    }std::cout<<std::endl;

    std::deque<int>d2;

    std::deque<int>d3;
    d2.assign(d1.begin(),d1.end());

  for(const auto&i:d2){
        std::cout<<i*10<<" ";
    }std::cout<<std::endl;


auto it2 =d2.emplace(d2.begin()+1,10);
it2 = d2.emplace(it2, 200);
for(const auto&i:d2){
        std::cout<<i<<" ";
    }std::cout<<std::endl;

d2.erase(it2);
for(const auto&i:d2){
        std::cout<<i<<" ";
    }std::cout<<std::endl;

it2 = d2.erase(d2.begin(),d2.begin()+2);
for(const auto&i:d2){
        std::cout<<i<<" ";
    }std::cout<<std::endl;

   it2= d2.insert(it2,20);

    for(const auto&i:d2){
        std::cout<<i<<" ";
    }std::cout<<std::endl;

      it2= d2.insert(it2,3, 30);

    for(const auto&i:d2){
        std::cout<<i<<" ";
    }std::cout<<std::endl;

    d2.resize(4);

 

    for(const auto&i:d2){
        std::cout<<i<<" ";
    }std::cout<<std::endl;
    d1.swap(d2);


for(const auto&i:d1){
        std::cout<<i<<" ";
    }std::cout<<std::endl;
    for(const auto&i:d2){
        std::cout<<i<<" ";
    }std::cout<<std::endl;
}

