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
#include <locale>
#include <complex>

//C
#include <cmath>
//I/O
#include  <fstream>
#include <iomanip>
#include  <sstream>



int main(){

double d{3.1415926};

std::cout<<std::setprecision(4)<<d<<std::endl;

std::cout<<std::fixed<<d<<std::endl;


std::cout<<d<<std::endl;


std::cout<<std::scientific<<d<<std::endl;


std::cout<<d<<std::endl;

float f{3.14141};
std::cout<<static_cast<std::uint32_t>(f)<<std::endl;
    return 0;
}