#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;

};

int isempty(struct stack *ptr )
{
    if(ptr->top==-1)
    {
        return -1;
    }
    else
    {
        return 0;
    }


}

int isfull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push_in_stack(struct stack *ptr,int val)
{
    if(isfull(ptr))
    {
      printf("stack is overflow:\n");
    }
    else
    {
      ptr->top++;
      ptr->arr[ptr->top]=val;
      
    
    printf("%d is inserted in stack:\n",val);
    }
}

int pop_in_stack(struct stack *ptr)
{
    if(isempty(ptr))
    {
        printf("stack is in underflow:\n");
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        printf("%d is successfully deleted from stack:\n",val);
        return val;

    }
    
}


int main()
{
struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
sp->top=-1;
sp->size=5;
sp->arr=(int *)malloc(sp->size*sizeof(int));
printf("stack is successfully created:\n");

printf("stack is empty:%d\n",isempty(sp));
printf("stack is full;%d\n",isfull(sp));

push_in_stack(sp,78);
push_in_stack(sp,45);
push_in_stack(sp,28);

printf("stack is empty:%d\n",isempty(sp));
printf("stack is full;%d\n",isfull(sp));

pop_in_stack(sp);
pop_in_stack(sp);

}