/* 
Ques 1:Write a function in C++ which accepts an integer array and its size as arguments and replaces elements having odd values with thrice its value and elements having even values with twice its value.
Ans 1:
Code:
*/

#include <iostream>

void func(int *array, size_t size);

int main(int argc, char const *argv[])
{
    size_t size;
    std::cout << "Enter Size of Array: > ";
    std::cin >> size;

    int array[size];
    for (size_t i = 0; i < size; i++)
    {
        std::cout << "    Enter Element " << i << ": > ";
        std::cin >> array[i];
    }

    func(array, size);

    std::cout << "Modyfing..." << std::endl
              << "Elements of New Array:" << std::endl;
    for (size_t i = 0; i < size; i++)
    {
        std::cout <<"    Element " << i << ": " << array[i] << std::endl;
    }
}

void func(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] *= array[i] % 2 ? 3 : 2;
    }
}

/*
Result:
Enter Size of Array: > 4
    Enter Element 0: > 1
    Enter Element 1: > 2
    Enter Element 2: > 3 
    Enter Element 3: > 4
Modyfing...
Elements of New Array:
    Element 0: 3
    Element 1: 4
    Element 2: 9
    Element 3: 8
*/