# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <ctype.h>

# define MAX 100
float stack[MAX];
int top = -1;

void push(float stack[],int x)
{
    if(top == MAX-1)
    {
        printf("Stack Overflow\n");
    }
    else
        stack[++top] = x;
}

float pop(float stack[])
{
    if(top == -1)
    {
        printf("Stack underflow\n");
        return 0;
    }
        
    else
        return stack[top--];    
}

int isOperand(char ch)
{
    if(ch == '+' || ch=='-' ||ch=='*' ||ch=='/' || ch=='^')
        return 0;
    else
        return 1;    
}
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');}

int Evalpostfix(float stack[], char exp[])
{
    int i = 0; 
    while(exp[i] != '\0')
    {
        if(isdigit(exp[i]) || exp[i] == '.')
        {
            char number[MAX];
            int j = 0;

            while(isdigit(exp[i]) || exp[i] == '.')
            {
                number[j++] = exp[i++];
            }
            number[j] = '\0';
            push(stack, atof(number));
        }
        else if(isOperator(exp[i]))
        {
            float x2 = pop(stack);
            float x1 = pop(stack);

            switch(exp[i])
            {
                case '+' : push(stack, x1 + x2);
                           break;

                case '-' : push(stack, x1 - x2);
                           break;

                case '*' : push(stack, x1 * x2);
                           break;

                case '/' : push(stack, x1 / x2);
                           break;

                case '^' : push(stack, pow(x1,x2));
                           break;
            }
        }  
        i++;  
    }
    return pop(stack);
}

int main()
{
    char postfix[] ="35.2 6.2 * 2 / 4 +";
    printf("\n");
    float r = Evalpostfix(stack, postfix);
    printf("%f\n",r);
}