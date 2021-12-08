//https://www.cplusplus.com/reference/functional/bind/


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

using namespace std::placeholders; //add visibility of _1, _2, _3 and _4;
 double my_double(double x, double y){
     return x*y;
 }

void substract(int x, int y){
    std::cout<<x-y<<std::endl;
}
int main(){

    auto my_fun = std::bind(my_double, 10,10); //100

std::cout<<my_fun()<<std::endl;


auto my_fun1 = std::bind(my_double,_1,5);// 50
std::cout<<my_fun1(10)<<std::endl;

auto my_fun2 = std::bind(my_double,_1,_2);// 25
std::cout<<my_fun2(5,5)<<std::endl;

auto my_sub1= std::bind(substract,_1,_2);// 5
my_sub1(10,5);
auto my_sub2= std::bind(substract,_2,_1);// -5
my_sub2(10,5);
auto my_sub3= std::bind(substract,20,_1);// 10
my_sub3(10);
    return 0;
}