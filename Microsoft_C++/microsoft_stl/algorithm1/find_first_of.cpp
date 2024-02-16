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


std::list<int>ls1{1,2,3,4,5,6};
std::list<int>ls2{8,10,12};

//std::list<int>ls3{2,4,3,4,10,12}; //find_first_off will not work on this list

auto it = std::find_first_of(ls1.begin(),ls1.end(),ls2.begin(),ls2.end(),[&](int i,int j){return 2*i==j;});

if(it !=ls1.end()){
    std::cout<<*it<<std::endl;
}
    return 0;
}