/* 
Ques 1: Accept numbers into an array of size input by the user. Then accept a number and search that number in array. If the number is present in array, then display the array element number where number is found. In case of multiple found displays all the positions. Display a proper message if the number is not present in array.
Ans 1:
Code:
*/

#include <iostream>

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
    std::cout << "Entered Values: " << array[0];

    for (size_t i = 1; i < size; i++)
    {
        std::cout << ", " << array[i];
    }

    int toCheck;
    
    std::cout << std::endl << std::endl << "Enter Element to search for: > ";
    std::cin >> toCheck;

    bool headerPrinted = false;

    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == toCheck)
        {
            if (!headerPrinted)
            {
                std::cout << toCheck << " found at following indexes:" << std::endl;
                headerPrinted=true;
            }
            std::cout << "    - " << i << " (Position " << i+1 << ")" << std::endl;
        } 
    }
    
    return 0;
}

/*
Result:
Enter Size of Array: > 8
    Enter Element 0: > 6
    Enter Element 1: > 9
    Enter Element 2: > 4
    Enter Element 3: > 2
    Enter Element 4: > 0
    Enter Element 5: > 6
    Enter Element 6: > 6
    Enter Element 7: > 6
Entered Values: 6, 9, 4, 2, 0, 6, 6, 6

Enter Element to search for: > 6
6 found at following indexes:
    - 0 (Position 1)
    - 5 (Position 6)
    - 6 (Position 7)
    - 7 (Position 8)
*/