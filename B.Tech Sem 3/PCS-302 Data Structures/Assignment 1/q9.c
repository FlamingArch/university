#include <stdio.h>
int main()
{
    int i = 1, 2, 3;
    printf("%d", i);
    return 0;
}

// q9.c:4:16: error: expected identifier or '('
//     int i = 1, 2, 3;
//                ^
// q9.c:4:15: error: expected ';' at end of declaration
//     int i = 1, 2, 3;
//               ^
//               ;
// 2 errors generated.