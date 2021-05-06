#include<stdio.h>
#define N 5
int stack[N],top=-1,x,i;

void push();
void pop();
void peek();
void display();

void push()
{
    int x;
    printf("Enter the value to push : ");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("stack is overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int res;
    if(top==-1)
    {
        printf("stack is underflow");
    }
    else
    {
        res=stack[top];
        top--;
        printf("The pop element is %d",res);
    }
}

void peek()
{
    if(top==-1)
    {
        printf("stack is underflow");
    }
    else
    {
        printf("\nThe top = %d",stack[top]);
    }
}
void display()
{
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}

int main()
{
    int choice=1;
    while(choice)
    {
        printf("Enter UR choice \n1.push\n2.pop\n3.peek\n4.display\n");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                peek();
                break;
            }
        case 4:
            {
                display();
                break;
            }
        default:
        printf("invalid input");
    }
    printf("\nEnter 1 to continue else 0 : ");
    scanf("%d",&choice);
    }
}
