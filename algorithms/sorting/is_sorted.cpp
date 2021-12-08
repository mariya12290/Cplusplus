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
#include <functional>

int main(){

std::vector<int>v1{1,4,2,5,3};

do{
    //prev permutation
    std::prev_permutation(v1.begin(),v1.end());
    //print range
    std::cout<<"v1 is ";
    for(auto&i:v1){
        std::cout<<i<<" ";
    }std::cout<<std::endl;
}while(!(std::is_sorted(v1.begin(),v1.end())));


std::cout<<"the range is sorted "<<std::endl;


    return 0;
}