
#include <stdio.h>
#include <string.h>

//maximum number of characters
#define MAX 100

//stack variables
int top=-1;
int item;


//string declaration
char stack_string[MAX];

//function to push character (item)
void pushChar(char item);

//function to pop character (item)
char popChar(void);

//function to check stack is empty or not
int isEmpty(void);

//function to check stack is full or not
int isFull(void);

int main()
{
    char str[MAX];

    int i;

    printf("Input a string: ");
    //read string with spaces
    scanf("%[^\n]s",str);

// push the char that the user enter by using strlen()
// strlen used to give the length of the given string
    for(i=0;i<strlen(str);i++)
        pushChar(str[i]);

    for(i=0;i<strlen(str);i++)
        str[i]=popChar();

    printf("Reversed String is: %s\n",str);

    return 0;
}

//function definition of pushChar
void pushChar(char item)
{
    //check for full
    if(isFull())
    {
        printf("\nStack is FULL !!!\n");
        return;
    }

    //increase top and push item in stack
    top=top+1;
    stack_string[top]=item;
}

//function definition of popChar
 char popChar()
{
    //check for empty
    if(isEmpty())
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }

    //pop item and decrease top
    item = stack_string[top];
    top=top-1;
    return item;
}

//check if the stack is Empty
int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

//check if the stack is Full
int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
