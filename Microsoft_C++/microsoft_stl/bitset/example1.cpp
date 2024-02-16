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
#include <bit>


int main(){
//bitwise And  &
std::bitset<4>b1{std::string{"0101"}};
std::bitset<4>b2{std::string{"0011"}};
std::bitset<4>b3 {b1&b2};

std::cout<<"bitset b1 "<<b1<<std::endl;
std::cout<<"bitset b2 "<<b2<<std::endl;
std::cout<<"bitset b3 "<<b3<<std::endl;

// operator <<



    return 0;
}