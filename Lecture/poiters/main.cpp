// in structures everything is public
#include <iostream>
#include<memory>

int main()
{
    //int *ptr = new int(5);
    std::unique_ptr<int> a (new int (5));
    std::unique_ptr<int> b = std::make_unique<int>(5); 



   //std::cout <<"a = " << *a <<std::endl;
    
    int i = 0;
    std::cout << i++ << ", " << i <<std::endl;
    std::cout << ++i << ", " << i <<std::endl;
}