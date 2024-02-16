#include <iostream>
//Container
#include <vector>
#include <string>
#include  <vector>
#include <list>
#include <forward_list>
#include  <map>
#include <set>
#include <list>
#include <array>
#include <stack>
#include <deque>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <tuple>

//others
#include <algorithm>
#include  <numeric>
#include <functional>
#include <memory>
#include <utility>
#include <new>
#include <iterator>
#include <exception>
#include <bitset>
//C
#include <cmath>
//I/O
#include  <fstream>
#include <iomanip>
#include  <sstream>



int main(){

std::forward_list<int>fl{};
fl.emplace_front(51);
fl.emplace_front(71);
fl.emplace_front(31);
fl.emplace_front(51);
fl.emplace_front(91);


if(!std::any_of(fl.begin(),fl.end(),[&](int i){return (i%2 ==0);})){
    std::cout<<"all the elements in forward list are not even "<<std::endl;
}else{
    std::cout<<"all the elements in forward list are even "<<std::endl;
}
    return 0;
}