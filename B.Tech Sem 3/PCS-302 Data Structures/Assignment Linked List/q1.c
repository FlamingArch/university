#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};
void enqueue(struct node **head, struct node **tail)
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
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
        *tail = temp;
    }
    (*tail)->next = temp;
    *tail = temp;
}
void reverseprint(struct node *head, struct node *tail)
{
    if (head == tail)
    {
        printf("%d ", tail->data);
        return;
    }
    reverseprint(head->next, tail);
    printf("%d ", head->data);
}
int main()
{
    struct node *head = NULL, *tail = NULL;
    int i;
    for (i = 1; i <= 5; i++)
    {
        enqueue(&head, &tail);
    }
    reverseprint(head, tail);
    return 0;
}