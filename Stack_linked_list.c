#include<stdio.h>
#include<complex.h>
#include<stdlib.h>
struct node
{   int info;
    struct node *prev;
}*top;
void push()
{   struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter element: ");
    scanf("%d",&temp->info);
    if(top==NULL)
    {   temp->prev = NULL;
        top = temp;
        return;
    }
    else
    {   temp->prev = top;
        top = temp;
        return;
    }
}
void show()
{   struct node *q;
    q = top;
    if(q==NULL)
    {   printf("List empty\n");
        return;
    }
    while(q!=NULL)
    {   printf("%d\t",q->info);
        q = q->prev;
    }

}
void pop()
{   struct node *q;
    if(top==NULL)
    {  printf("Stack underflows\n");
        return;
    }
    else
    {   q = top;
        top = top->prev;
        free(q);
    }
    printf("item deleted..\n");
}
void main()
{   int ch;
    while(1)
    {   printf("\n\n1. Add element");
        printf("\n\n2. delete element");
        printf("\n\n3. Show");
        printf("\n\n4. Exit");
        printf("\n\n\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {   case 1: push(); break;
            case 2: pop();  break;
            case 3: show(); break;
            case 4: exit(0);break;
            default:    printf("\n\n\n\tWrong choice..");
        }
    }
}
