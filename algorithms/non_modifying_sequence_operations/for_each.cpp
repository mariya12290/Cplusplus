#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <utility>
#include <memory>
#include <exception>
#include <functional>
#include <bitset>
#include <map>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <array>
#include <forward_list>
#include <iterator>
#include <set>
#include <stack>
#include <deque>

void myfun(int i){
    std::cout<<i*10<<std::endl;
}
int main(){

std::vector<int>v{1,2,3,4,5,6};
for(auto & i:v){
    std::cout<<i<<std::endl;
}
std::for_each(v.begin(),v.end(),[](auto &i){ return i*10;});
for(auto & i:v){
    std::cout<<i<<std::endl;
}

std::for_each(v.begin(),v.end(),myfun);

    return 0;
}