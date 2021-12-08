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


int main(){


std::vector<int>v{10,20,30,2,3,4,8};

if(std::all_of(v.begin(),v.end(),[](auto & i){return i %2;})){
    std::cout<<" all elements of vector are divided by 2 "<<std::endl;
}else{
     std::cout<<"not all the  elements of vector are not divided by 2 "<<std::endl;
}

    return 0;
}