#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    int fd, nbw;
    char str[100];
    mknod("myfifo", S_IFIFO | 0666, 0);
    printf("Writing for reader Process:\n\t");
    fd = open("myfifo", O_WRONLY);
    while (gets(str))
    {
        nbw = write(fd, str, strlen(str));
        printf("Writer process write %d bytes: %s\n", nbw, str);
    }
    return 0;
}
