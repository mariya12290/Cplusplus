#include <iostream>
#include <string>
#include <locale>
#include <vector>
#include<algorithm>
#include <functional>
#include <iterator>
int main(){

  std::string s{"ABCDABCD"};

std::locale loc;
for(int i{0};i<s.length();++i){
   s[i]= std::tolower(s[i],loc);
}


std::reverse(s.begin(),s.end());
std::cout<<s<<std::endl;
std::string s1{};
std::vector<int>vec{1,2,3,4,1,2,3,1,2,5,6,7,8,9};
std::vector<int>vec1;

std::sort(vec.begin(),vec.end());
auto it1 = std::unique(vec.begin(),vec.end());
vec.resize(std::distance(vec.begin(),it1));
for(const auto&i:vec){
    std::cout<<i<<" ";
} std::cout<<std::endl;


it1 = std::remove(vec.begin(),vec.end(),7);

vec.resize(std::distance(vec.begin(),it1));
for(const auto&i:vec){
    std::cout<<i<<" ";
} std::cout<<std::endl;
it1 = vec.begin()+3;
it1 = vec.erase(it1);
//vec.resize(std::distance(vec.begin(),it1));
for(const auto&i:vec){
    std::cout<<i<<" ";
} std::cout<<std::endl;

}