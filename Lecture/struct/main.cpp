// in structures everything is public
#include <iostream>
struct Date
{
    int y;
    int m;
    int d;

};
int main()
{
    Date d;
    d.d = 2017;
    std::cout << d.d << "." << d.m << "." <<std::endl;
}