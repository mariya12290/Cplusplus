#include <iostream>
#include <vector>


class Point{
    public:
    Point(int i):m_I{i}{}
    int getI(){
        return m_I;
    }
    void setI(int i){
        m_I =i;
    }

    int m_I{};

};

int (Point::*pgetI)() =&Point::getI;
int Point::*pmI = &Point::m_I;
void (Point::*psetI)(int) = &Point::setI;


int main(){

Point p(20);
Point *p1 = new Point(10);

std::cout<<(p.*pmI)<<std::endl;
std::cout<<(p.*pgetI)()<<std::endl;

std::cout<<(*p1.*pmI)<<std::endl;
std::cout<<(p1->*pgetI)()<<std::endl;

delete p1;




}