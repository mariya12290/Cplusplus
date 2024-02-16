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

struct  myclass{
    void print(){
        std::cout<<"struct member function"<<std::endl;
    }
};
    /* data */



int main(){

myclass myobject;

myobject.print();

//greater_equal
std::vector<int>vec{1,2,3,4};
auto count = std::count_if(vec.begin(),vec.end(),);

std::cout<<count<<std::endl;
    return 0;
}