// in structures everything is public
#include <iostream>
#include <memory>

int *arr1; // demonstrate use after return

// Heap buffer overflow
int *heapArray()
{
    int *arr = new int[5]{1, 2, 3, 4, 5};
    if (!arr)
    {
        std::cout << "memory allocation failed " << std::endl;
    }
    // arr[0] = 0;  // init
    
    // delete[] arr; // delete ???
    return arr; // return
}
// use after return
void func()
{
    int arr2[100];
    arr1 = arr2;
}

int main()
{
    // int *ptr = new int(5);
    //  unique pointers
    //  std::unique_ptr<int> a (new int (5));
    //  std::unique_ptr<int> b = std::make_unique<int>(5);

    // std::cout <<"a = " << *a <<std::endl;

    // int *arr = new int[100];
    // return arr[100];

    int *arr = heapArray();
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "arr " << arr[i] << std::endl;
    }
    // memory on stack

    int onStack[100];
    onStack[1] = 100;
    int overflow = onStack[5 + 100];

    std::cout << onStack[0] << std::endl;
    std::cout << "overflow =" << overflow << std::endl;  // ??
    std::cout << "onstack = " << onStack[5 + 100] << std::endl; // ??
 
    // use after return
    func();
    return arr1[10];

}