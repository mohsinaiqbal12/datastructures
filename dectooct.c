//program to convert decimal number to octal system
# include <stdio.h>

void Octal(int num)
{   
    int r;
    if(num == 0)
        printf("\t");
    else
    {
        r = num % 8;
        Octal(num / 8);
        printf("%d", r);
    }    
}
int main()
{
    int num = 17;
    Octal(17);
}