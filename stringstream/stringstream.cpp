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
#include <iterator>
#include <functional>
#include <stdlib.h>
#include <math.h>


int main(){

std::stringstream ss1;
std::stringstream ss2;

int val1;
int val2;

ss1<<100;
ss2<<200;
//>>output
//<<input to stringstream


std::cout<<"Val1 is "<<val1<<" val2 is "<<val2<<std::endl;
std::swap(ss1,ss2);

ss1>>val1;
ss2>>val2;
std::cout<<"Val1 is "<<val1<<" val2 is "<<val2<<std::endl;


char s[100];

std::cout<<"Enter the name "<<std::endl;

std::cin.getline(s,100);
std::cout<<std::cin.gcount()<<" characters read "<<s<<std::endl;
    return 0;
}