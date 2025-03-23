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
    d.m = 13;
    std::cout << d.d << "." << d.m << "." <<std::endl;
}