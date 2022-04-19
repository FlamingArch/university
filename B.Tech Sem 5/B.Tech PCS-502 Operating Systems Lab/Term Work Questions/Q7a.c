#include <stdio.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/types.h>

struct msgbuf
{
    long mtype;
    char mtext[100];
} svarname;

int main()
{
    key_t key;
    int msgid, c;
    key = ftok("progfile", 'A');
    msgid = msgget(key, 0666 | IPC_CREAT);
    svarname.mtype = 1;
    printf("\nEnter a string : ");
    gets(svarname.mtext);
    c = msgsnd(msgid, &svarname, strlen(svarname.mtext), 0);
    printf("Sender wrote the text :\t %s \n", svarname.mtext);
    return (0);
}