/*Design, Develop and Implement a menu driven Program for
the following operations on STACK of Integers (Array Implementation of 
Stack with maximum size MAX) 
a. Push an Element onto Stack.
b. Pop an Element from Stack.
c. Demonstrate how Stack can be used to check Palindrome. 
d. Demonstrate Overflow and Underflow situations on Stack. 
e. Display the status of Stack.
f. Exit Support the program with appropriate functions for each of the 
above operations*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int stack[MAX], top=-1 ;

void push(){
   int item;
   if (top==MAX-1){
      printf("Stack Overflow!\n");
  }
   else{
     printf("Enter the element to be pushed into the stacks :");
     scanf("%d",&item);
     top++;
   stack[top]=item;
  } 
}
void pop(){
    if(top==-1){
        printf("Stack Underflow!\n");
    }
    else{
        printf("Popped element is %d\n",stack[top]);
        top--;
    }
}
void isPallindrome(){
    int flag=1,i;
    printf("Stack Contents are :\n");
      for(i=top;i>=0;i--)
        printf("|%d|\n",stack[i]);

    printf("Reverse of stack contenet are:\n");
      for(i=0;i<=top;i++)
        printf("|%d|\n",stack[i]);
    for(i=0;i<=top/2;i++)
    {
        if(stack[i]!=stack[top-i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("It is Pallindrome number\n");
    }
    else{
        printf("It is not Pallindrome\n");
    }
}
void display(){
    int i;
    if(top==-1){
        printf("\nStack Underflow!");
    }
    else {
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
  }
}

int main(){
    int ch,elem;
    while(1){
        printf("STACK OPERATION\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Pallindrome\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:push(); break;
            case 2:pop();break;
            case 3:isPallindrome();break;
            case 4:display();break;
            case 5:exit(0);break;
            default: printf("Invalid Choice\n");break;
        }
    }
    return 0;
}
/*
OUTPUT:-
STACK OPERATION
1.Push
2.Pop
3.Pallindrome
4.Display
5.Exit
Enter your choice:1
Enter the element to be pushed into the stacks :1

STACK OPERATION
1.Push
2.Pop
3.Pallindrome
4.Display
5.Exit
Enter your choice:1
Enter the element to be pushed into the stacks :2

STACK OPERATION
1.Push
2.Pop
3.Pallindrome
4.Display
5.Exit
Enter your choice:1
Enter the element to be pushed into the stacks :1

STACK OPERATION
1.Push
2.Pop
3.Pallindrome
4.Display
5.Exit
Enter your choice:3
Stack Contents are :
|1|
|2|
|1|
Reverse of stack contenet are:
|1|
|2|
|1|
It is Pallindrome number

STACK OPERATION
1.Push
2.Pop
3.Pallindrome
4.Display
5.Exit
Enter your choice:2
Popped element is 1

STACK OPERATION
1.Push
2.Pop
3.Pallindrome
4.Display
5.Exit
Enter your choice:4
2
1

STACK OPERATION
1.Push
2.Pop
3.Pallindrome
4.Display
5.Exit
Enter your choice:5 */