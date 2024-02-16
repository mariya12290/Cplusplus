#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>

//https://stackoverflow.com/questions/35974402/reading-getline-from-cin-into-a-stringstream-c
int main(){

std::string s1{"suri"};
std::string s2{"kumar"};

s1.append(" ");
std::cout<<s1.append(s2)<<std::endl;


double d1{100.0};
double d2{234.5};

std::cout<<std::setprecision(2)<<std::fixed<<(d1+d2)<<std::endl;


std::string s3{};
std::getline(std::cin,s3);
std::stringstream ss{s3};


while(ss)


    
}