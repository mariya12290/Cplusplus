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
#include <fstream>
#include <ios>
#include <iterator>
#include <functional>
#include <stdlib.h>
#include <math.h>



int main(){
//c++98 version
// enum Color{
//     color_red,
//     color_blue
// };
// enum Furit{
//     apple,
//     orange
// };

// Color color{color_red};
// Furit fruit{apple};
// if(color == fruit){
//     std::cout<<"color and fruit are equal\n";
// }else{
//     std::cout<<"color and furit are not equal\n";
// }
//c++ 11 version

enum class Color{
    red,
    blue
};
enum class Furit{
    apple,
    orange
};

Color color{Color::red};
Furit fruit{Furit::apple};
// if(color == fruit){
//     std::cout<<"color and fruit are equal\n";
// }else{
//     std::cout<<"color and furit are not equal\n";
// }
if(color==Color::red){
    std::cout<<"This is red color\n";
}else{
    std::cout<<"THis is not red color \n";
}
std::cout<<static_cast<int>(color)<<std::endl;



    return 0;
}