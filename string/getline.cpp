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

std::string s{"SUri is coming to home tomorrow!"};
std::stringstream ss{std::move(s)};

while(std::getline(ss,s,' ')){
    std::cout<<s<<" ";
}std::cout<<std::endl;

std::cout<<"Please enter your name : "<<std::endl;
std::string name;
std::getline(std::cin,name);
std::cout<<"Hello "<<name<<std::endl;


std::string s1{"Suri is getting a new job\nPlease be on time"};
std::stringstream ss1{std::move(s1)};
while(std::getline(ss1,s1)){
    std::cout<<s1<<std::endl;
}

std::cout<<"Enter a long string here : "<<std::endl;

std::string long_string;
std::getline(std::cin, long_string);

std::cout<<long_string<<std::endl;

std::stringstream ss4{long_string};
std::string sss;
while(ss4.eof()){
    ss4>>sss;
    std::cout<<sss<<std::endl;
}
    return 0;
}