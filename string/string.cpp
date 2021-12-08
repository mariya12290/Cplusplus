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

void append1(std::string&s){
s.append("s");
std::cout<<s<<std::endl;
s.append("Surendra", 0,3);
std::cout<<s<<std::endl;



}

std::vector<std::string>stringsplit(const std::string&s, char del){
    std::vector<std::string>vec_str;
    std::stringstream ss{s};
    std::string s1;
    while(std::getline(ss, s1, del)){
        vec_str.push_back(std::move(s1));
    }
    return vec_str;
}

int main(){

std::string s{"surendra kumar"};

std::cout<<s.size()<<std::endl;

append1(s);


//convert string into int
std::string s1{"1234"};

std::cout<<std::atoi(s1.c_str())<<std::endl;

//convert int to string

int value{1234};

std::cout<<std::to_string(value)<<std::endl;

//split the string into a vector
std::string s2{"Split,the,string,based,on"};

auto vec_str = stringsplit(s2,',');
for(auto&i:vec_str){
    std::cout<<i<<std::endl;
}


    return 0;
}