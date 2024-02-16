#include <iomanip>
#include <iostream>
#include <string>
#include <exception>

int main(){

    std::string s{"200"};
    
  std::string s1{"suir"};
  
try{
      auto success = std::stoi(s1);
    std::cout<<success<<std::endl;
}
catch(const std::invalid_argument&a){
    std::cout<<a.what()<<std::endl;
}
}

