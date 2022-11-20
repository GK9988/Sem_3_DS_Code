#include <stdio.h>
#define Max 100
int top,i,size,value,choice;
int stack[Max];
void push(void){
    if(top>=size-1){
        printf("\n stack overflow");
    }
    else{
       top=top+1;
       printf("\n Enter the element user like to push in stack:");
       scanf("%d",&value);
       stack[top]=value;
    }
}
void pop(void){
    if(top<=-1){
        printf("stack underflow");
    }
    else{
        printf("poped element from the stack %d:",stack[top]);
        top--;
    }
}
void display(void){
    if(top>=0){
        for(i=top;i>=0;i--){
            printf("\n %d",stack[i]);
        }
    }
    else{
        printf("no stack found");
    }
}
int main()
{
    top=-1;
    choice=1;
    printf("Enter the size of the stack:");
    scanf("%d",&size);
    while(choice!=0){
    printf("\n 1.push operation \n 2.pop operation \n 3.Display operation \n 4.exit the program");
    printf("\n Enter the choice:");
    scanf("%d",&choice);
   
        switch(choice){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: printf("\n Exit the program");
                    choice==0;
                    break;
            default: printf("\n Enter valid choice");
        }
    }
   
    return 0;
}