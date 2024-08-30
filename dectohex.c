//program to convert decimal number to hexadecimal system
# include <stdio.h>

void Hex(int num)
{   
    int r;
    if(num == 0)        printf("\t");
    else
    {
        r = num % 16;
        Hex(num / 16);
        
        if(r >= 0 && r <=9 )
            printf("%d", r);
        else if(r == 10)
            printf("A");
        else if(r == 11)
            printf("B");
        else if(r == 12)
            printf("C");
        else if(r == 13)
            printf("D");
        else if(r == 14)
            printf("E");
        else if(r == 15)
            printf("F");    
                    
    }    
}
int main()
{
    int num = 45;
    Hex(45);
}