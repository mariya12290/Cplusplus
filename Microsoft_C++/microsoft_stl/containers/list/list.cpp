#include <iomanip>
#include <iostream>
#include <list>
#include <forward_list>

int main(){

std::list<int>l{1,2,3,4,5};

auto it = l.begin();

std::cout<<*it<<std::endl;

++it;
std::cout<<*it<<std::endl;
--it;
std::cout<<*it<<std::endl;

std::forward_list<int>fl{1,2,3,4,5,6};
}