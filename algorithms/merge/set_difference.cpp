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

std::string s1{"cde"};
std::string s2{"abc"};

std::sort(s1.begin(),s1.end());
std::sort(s2.begin(),s2.end());

int len_s1 = s1.size();
int len_s2 = s2.size();



std::string s3{};
s3.reserve(len_s1+len_s2);
 
auto it = std::set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),s3.begin());
std::cout<<s3<<std::endl;




    return 0;
}