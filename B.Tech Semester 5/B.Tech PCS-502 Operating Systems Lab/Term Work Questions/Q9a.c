
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char prss[3];
    int burst;
    int arrival;
    struct node *next;
} node;

node *front = NULL;
node *rear = NULL;

void insert();

void display(int);

void main()
{
    int i, n;
    printf("\nEnter number of processes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        insert();
        printf("\n\nExecuting processes : \n");
        display(n);
        printf("\n");
    }
}

void insert()
{
    node *p;
    int b, a;
    char str[3];
    p = (node *)malloc(sizeof(node));
    printf("\n\tEnter the process name : ");
    scanf("%s", p->prss);
    printf("\tEnter Burst time : ");
    scanf("%d", &b);
    printf("\tEnter arrival time : ");
    scanf("%d", &a);
    p->burst = b;
    p->arrival = a;
    p->next = NULL;
    if (front == NULL)
    {
        front = p;
        rear = p;
    }
    else
    {
        rear->next = p;
        rear = p;
    }
}

void display(int n)
{
    node *temp = front;
    int wttime = 0, c = 0;
    float turn = 0.0;
    if (front != NULL)
    {
        printf("\n-------------------\n\t");
        while (temp != NULL)
        {
            printf("|\t%s\t", temp→prss);
            temp = temp->next;
        }
        printf("|\n-------------------\n\t");
        temp = front;
        while (temp != NULL)
        {
            printf(" \t%d\t ", temp->burst);
            temp = temp->next;
        }
        printf("\n-------------------\n\t");
        temp = front;
        printf("0\t");
        while (temp != NULL)
        {
            wttime += c;
            turn += c + temp->burst;
            c = c + temp->burst;
            printf(" \t%d\t ", c);
            temp = temp->next;
        }
        printf("\n-------------------\n");
        printf("\n\nAveragewt time = %d ", wttime / n);
        printf("\nTurnaround time = %f\n", turn / n);
    }
}