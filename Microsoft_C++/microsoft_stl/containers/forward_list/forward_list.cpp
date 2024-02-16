#include <iostream>
#include <forward_list>
#include <vector>
#include <functional>
#include <iterator>
#include <utility>


using namespace std;
int main(){

std::forward_list<int> fl{1,2,3,4};


std::cout<<*(fl.begin())<<std::endl;
auto it = fl.begin();
std::advance(it,2);
std::cout<<*it<<std::endl;
fl.emplace_after(it,200);

for(const auto&i:fl){
    std::cout<<i<<" ";
}std::cout<<std::endl;


std::forward_list<std::pair<int, int>>fp;

fp.insert_after(fp.before_begin(),std::make_pair<int,int>(1,2));

fp.insert_after(fp.before_begin(),std::make_pair<int,int>(3,4));

fp.insert_after(fp.before_begin(),std::make_pair<int,int>(5,6));

fp.insert_after(fp.before_begin(),std::make_pair<int,int>(1,2));

auto it1 = fp.begin();
std::advance(it1,2);
fp.erase_after(fp.begin());

for(const auto&i:fp){
    std::cout<<i.first<<" "<<i.second<<std::endl;;
}



    return 0;
}