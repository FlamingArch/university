#include <stdio.h> 
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
void Push(struct node **head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory Not Allocated");
        return;
    }
    int d;
    scanf("%d", &d);
    temp->data = d;
    temp->next = *head;
    *head = temp;
}
void reverseprint(struct node *head)
{
    if (head == NULL)
    {
        return;
    }
    reverseprint(head->next);
    printf("%d ", head->data);
}
int main()
{
    struct node *head = NULL;
    int i;
    for (i = 1; i <= 5; i++)
    {
        Push(&head);
    }
    reverseprint(head);
    return 0;
}