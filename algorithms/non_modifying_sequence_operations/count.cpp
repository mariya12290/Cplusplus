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

//array of pointers 
int* a[5];
a[0] = new int (9);
a[1] = new  int (10);
a[2] =  new  int (11);
a[3] =  new  int (12);
a[4] = new  int (13);
int b[]{1,2,3,4,5,2,1,2,1};
std::vector<int>v{b, b+9};

auto c = std::count(v.begin(),v.end(),1);
std::cout<<c<<std::endl;

    return 0;
}