#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    int fd, nbr;
    char arr[100];
    mknod("myfifo", S_IFIFO | 0666, 0);
    fd = open("myfifo", O_RDONLY);
    printf("If you got a writer process then type some data \n");
    do
    {
        nbr = read(fd, arr, sizeof(arr));
        arr[nbr] = '\0';
        printf("Reader process read %d bytes: %s\n", nbr, arr);
    } while (nbr > 0);
    return 0;
}