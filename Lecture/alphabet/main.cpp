// in structures everything is public
#include <iostream>
//#include<memory>

#define LETTERS 26

int main()
{
    char letters[LETTERS];
    for(size_t i = 0; i < LETTERS; i++)
    {
        letters[i] = 'a' + i;
    }
    //int idx = 50;
    std::cout << "letters[3]: " << letters[2] << std::endl;
}