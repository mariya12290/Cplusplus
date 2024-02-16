#include  <iostream>
#include <memory>


class Base{
    public:
    Base(int i,int j):m_i{i},m_j{j}{

    }
    int getIJ(){
        return m_i*m_j;
    }
    void setIJ(int i, int j){
        m_i =i;
        m_j = j;
    }
    private:
    int m_i{};
    int m_j{};
};

void Array(Base *b, int len){
    for(int i{0};i<len;++i){
        b[i].setIJ((i+1)*2,(i+1)*3);
    }
}
//raise eror bcos passed opbject is constant

// void Array(const Base *b, int len){
//     for(int i{0};i<len;++i){
//         b[i].setIJ((i+1)*2,(i+1)*3);
//     }
// }
void Array(Base b[], int len){
    for(int i{0};i<len;++i){
        b[i].setIJ((i+1)*2,(i+1)*3);
    }
}
int main(){


constexpr size_t size {100};
 double numbers[size] {0};

 numbers[0] =1;

 for(int i{1};i<size;++i){
     numbers[i] =numbers[i-1]*1.1;


 }

 for(int i{0};i<size;++i){
     std::cout<<numbers[i]<<" ";
     
 }
 std::cout<<std::endl;


 double* numbers1= new double[size] {0};

 numbers1[0] =1;

 for(int i{1};i<size;++i){
     numbers1[i] = numbers1[i-1]*1.1;


 }

 for(int i{0};i<size;++i){
     std::cout<<numbers1[i]<<" ";
 }
 
 double *p=numbers1;

 for(int i{0};i<size;++i){
     std::cout<<*p++<<" ";
 }std::cout<<std::endl;

 Base* bPtr = new Base[2]{{1,2},{3,4}};

 for(int i{0};i<2;++i){
     std::cout<<bPtr[i].getIJ()<<std::endl;
 }

 Array(bPtr,2);

 for(int i{0};i<2;++i){
     std::cout<<bPtr[i].getIJ()<<std::endl;
 }

 delete[] bPtr;
 delete[] numbers1;


    return 0;
}