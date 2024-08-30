
//program to convert decimal number to base b < 10
# include <stdio.h>

void convert(int num, int b)
{   
    int r;
    if(num == 0)        printf("\t");
    else
    {
        r = num % b;
        convert(num / b, b);
        printf("%d", r);
        
        
    }    
}
int main()
{
    int b,num;
    printf("Enter the value of decimal number and base to which to be converted \n");
    scanf("%d %d", &num, &b);
    convert(num, b);
}
