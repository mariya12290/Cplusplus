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


//returns whether the second element is twice as first
bool twice(int elem1, int elem2){
    return elem2 ==elem1*2;
}
int main(){


std::list<int>ls{};
ls.emplace_back(10);
ls.emplace_back(20);
ls.emplace_back(30);
ls.emplace_back(40);
ls.emplace_back(40);


auto result = std::adjacent_find(ls.begin(),ls.end());

if(result != ls.end()){
    std::cout<<"There are two adjacent elements which are equal, they are  "<<*result<<std::endl;
}else{
    std::cout<<"There are no adjacent equal elements "<<std::endl;
}

result = std::adjacent_find(ls.begin(),ls.end(),twice);

if(result ==ls.end()){
    std::cout<<"There is no adjacent elements twice as the previous one"<<std::endl;
}else{
    std::cout<<"There is an adjacent elemts twice the previous one, they are "<<*(result++)<<" "<<*result<<std::endl;
}
    return 0;
}