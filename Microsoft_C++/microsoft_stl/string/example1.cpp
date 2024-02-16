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
#include  <cstring>
//I/O
#include  <fstream>
#include <iomanip>
#include  <sstream>

void print(const std::string&str){

    std::cout<<str<<std::endl;
}

int main(){

    std::string str{"suri"};
    //append
    str.append(" kumar ");

    print(str);
    str.append(10,'c');
    print(str);

//assign
std::string str1{std::move(str)};
print(str);
print(str1);

if(str.compare(str1)){
    std::cout<<"both the strings are  same "<<std::endl;
}else{
    std::cout<<"both  the strings are not same"<<std::endl;
}

if(str.compare(0,4, "suri")){
    std::cout<<"first word of str is suri"<<std::endl;
}else{
    std::cout<<"first word of str is not suri"<<std::endl;
}

char *c = new char[4];

std::string str2{"suri"};
for(int i{0};i<4;++i){
    *c = str2[i];
}

if(str.compare(c)){
    std::cout<<"str and c both have suri in them"<<std::endl;
}else{
    std::cout<<"str and c both do nothavesuri in them "<<std::endl;
}
char *c1 = new char[10];
auto len = str.copy(c1,4,0);

for(auto i{0};i<4;++i){
    std::cout<<*c1<<" ";
    ++c;
}

char *c2="Test string";

std::string str3{"Test string"};

if(str.length() == std::strlen(c2)){
    std::cout<<"str3 and c2 have same length"<<std::endl;
}else{
    std::cout<<"str3 and c2 have  same length"<<std::endl;
}

auto ptrStr= str3.data();

for(int i{0};i<str3.length();++i){
    std::cout<<ptrStr<<" ";
    
    ++ptrStr;
}
std::cout<<std::endl;

auto ptrStr1= str3.c_str();

for(int i{0};i<str3.length();++i){
    std::cout<<ptrStr1<<" ";
    
    ++ptrStr1;
}
std::cout<<std::endl;

print(str3);

// str3.erase(0,4);
// print(str3);

if(str3.find("string") !=std::string::npos){
    std::cout<<"string is present in str3"<<std::endl;
}else{
    std::cout<<"string is not present in str3"<<std::endl;
}

if(str3.find_first_of("string") !=std::string::npos){
    std::cout<<"string is present in str3"<<std::endl;
}else{
    std::cout<<"string is not present in str3"<<std::endl;
}

if(str3.find_first_of("string") !=std::string::npos){
    std::cout<<"string is present in str3"<<std::endl;
}else{
    std::cout<<"string is not present in str3"<<std::endl;
}






//pop back
print(str3);
str3.pop_back();

print(str3);

//replace
str3.replace(0,10,"test string");
print(str3);

str3.replace(0,10,"surendra kumar",0,15);
print(str3);

std::string strc{"poerman array of characters"};
char *c10 = "pokerman array of characters";

str3.replace(0,10, c10);
print(str3);

auto str31 = str3.substr(0,8);
print(str31);

str3.swap(str31);
print(str31);
print(str3);

//getline
std::cout<<"enter the input string "<<std::endl;

std::getline(std::cin, str31);

print(str31);
std::string str4{"NewZealand1000\nEngland2000\nAmerica3000"};

print(str4);

std::stringstream ss{str4};
std::string temp{};
std::string digits{"123567890"};
std::map<std::string,int>mp{};
while(ss>>temp){
    auto pos = temp.find_first_of(digits);
    auto strnum = temp.substr(pos);
    auto country = temp.substr(0,pos);
    auto num = std::stoi(strnum);
    mp[country] = num;
}
std::cout<<mp.size()<<std::endl;

std::cout<<(float(3)/6)<<std::endl;

std::cout<<(73%5)<<std::endl;


    return 0;
}