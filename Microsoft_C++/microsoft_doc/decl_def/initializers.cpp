#include <iostream>
#include <memory>

class Base{
    public:
    Base(int i,int j):m_i{i},m_j{j}{}
    int getI(){
        return m_i;
    }
    private:
    int m_i{};
    int m_j{};
};


int main(){

    
int arr[]{1,2,3,4};
for(const auto& i: arr){
    std::cout<<i<<" ";
}std::cout<<std::endl;

return 0;
}