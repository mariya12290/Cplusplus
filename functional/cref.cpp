//https://www.cplusplus.com/reference/functional/cref/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <array>
#include <forward_list>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <tuple>
#include <unordered_map>
#include <utility>
#include <memory>
#include <exception>
#include <functional>
#include <bitset>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <ios>
#include <iterator>
#include <functional>
#include <stdlib.h>
#include <math.h>


int main(){

int foo{10};
auto bar = std::cref(foo);
foo++;
std::cout<<bar<<std::endl;

// bar = 100; //this does not work like this
// std::cout<<bar<<std::endl;


    return 0;
}