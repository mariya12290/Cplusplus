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

int main(){

std::set<int>s{1,2,3,4,5,6,7};
if(std::any_of(s.begin(),s.end(),[](auto &i){
    return i%2;
})){
    std::cout<<" set have an element whose modulus is 0 divided by 2 ";
}else{
std::cout<<"no "<<std::endl;
}
return 0;

}