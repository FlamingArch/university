#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void Insert(struct node **List)
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
    temp->next = *List;
    *List = temp;
}
void Delete(struct node **List, struct node *del)
{
    if (*List == del)
    {
        *List = (*List)->next;
    }
    else
    {
        struct node *temp = *List;
        while (temp->next != del)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
    free(del);
}
void Search(struct node **List)
{
    int key;
    printf("Enter Element to be Deleted - ");
    scanf("%d", &key);
    struct node *temp = *List;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            Delete(List, temp);
            return;
        }
        temp = temp->next;
    }
    printf("Element Not Found");
}
void Print(struct node *List)
{
    while (List != NULL)
    {
        printf("%d ", List->data);
        List = List->next;
    }

    printf("\n");
}
int main()
{
    struct node *List = NULL;
    int i;
    for (i = 1; i <= 5; i++)
    {
        Insert(&List);
    }
    Print(List);
    Search(&List);
    Print(List);
    Search(&List);
    Print(List);
    return 0;
}