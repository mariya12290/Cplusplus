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

int main(){

std::map<std::string, int>m{{"suri",1},{"kumar",2},{"mariya",3},{"ara",4}};

auto it = m.find("mariya");
if(it!= m.end()){
    std::cout<<it->first<<" "<<it->second<<std::endl;
}else{
    std::cout<<"did not find the maruya in a map"<<std::endl;
}
int a[] = {1,2,3,4,5,6,7,8};
std::vector<int>v(a,a+8);
auto it1 = std::find(v.begin(),v.end(),6);
if(it1 != v.end()){
    std::cout<<" found 6 at "<<std::distance(v.begin(),it1)<<std::endl;
}else{
    std::cout<<"did not find 6 in v"<<std::endl;
}
    return 0;
}