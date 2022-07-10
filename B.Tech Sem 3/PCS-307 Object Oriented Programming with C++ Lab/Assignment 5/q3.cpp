/*
Ques 2: Accept numbers in array A[10] & create another array B[5]. The array B first location fills with sum of first & second location of array A. The array B second location fills with sum of third & forth location of array A. Similarly fill all the position of array B & display it.
Ans 2:
Code:
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    int a[10], b[5];

    std::cout << "Enter elements for Array A: " << std::endl;
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "    Element " << i+1 << ": > ";
        std::cin >> a[i];
    }
    std::cout << std::endl;

    for (size_t i = 0, j = 0; i < 10; i+=2, j++)
    {
        b[j] = a[i] + a[i+1];
    }

    std::cout << "Elements of B:" << std::endl;
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "    Element " << i << ": " << b[i] << std::endl;
    }
}

/*
Result:
Enter elements for Array A: 
    Element 1: > 1
    Element 2: > 2
    Element 3: > 3
    Element 4: > 4
    Element 5: > 5
    Element 6: > 6
    Element 7: > 7
    Element 8: > 8
    Element 9: > 9
    Element 10: > 0

Elements of B:
    Element 0: 3
    Element 1: 7
    Element 2: 11
    Element 3: 15
    Element 4: 9
*/