#include <iostream>
#include <string>


int main(){
 int* pnumber = new int (10);

 std::cout<<*pnumber<<std::endl;

int num{100};
 int *pnumber1 = &num;

 std::cout<<*pnumber1<<std::endl;

 *pnumber1 = 1000;
  std::cout<<*pnumber1<<std::endl;
 
 delete  pnumber, pnumber1;
    return 0;
}