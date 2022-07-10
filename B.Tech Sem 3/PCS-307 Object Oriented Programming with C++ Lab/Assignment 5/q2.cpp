/*
Ques 2: Create two arrays A and B of size 5 and C of size 10. Accept numbers in two  arrays A and B. Fill the array C in such a way that the first five positions occupy the numbers present in array A and rest of five positions occupy the numbers present in array B.
Ans 2:
Code:
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    int a[5], b[5], c[10];

    std::cout << "Enter elements for Array A: " << std::endl;
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "    Element " << i+1 << ": > ";
        std::cin >> a[i];
    }
    std::cout << std::endl;

    std::cout << "Enter elements for Array B: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "    Element " << i+1 << ": > ";
        std::cin >> b[i];
    }
    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

    for (int i = 5; i < 10; i++)
    {
        c[i] = b[i-5];
    }
    
    
    std::cout << "Elements in Array C:" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "    Element " << i+1 << ": " << c[i] << std::endl;
    }
    

    return 0;
}
/*
Result: 
Enter elements for Array A: 
    Element 1: > 1
    Element 2: > 2
    Element 3: > 3
    Element 4: > 4
    Element 5: > 5

Enter elements for Array B: 
    Element 1: > 6
    Element 2: > 7
    Element 3: > 8
    Element 4: > 9
    Element 5: > 0

Elements in Array C:
    Element 1: 1
    Element 2: 2
    Element 3: 3
    Element 4: 4
    Element 5: 5
    Element 6: 6
    Element 7: 7
    Element 8: 8
    Element 9: 9
    Element 10: 0
 */