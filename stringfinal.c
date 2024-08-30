# include <stdio.h>
# include <stdlib.h>

void toupr(char s[])
{
    int i = 0;
    while(s[i]!='\0')
    {   
        
        if(s[i]>= 97 && s[i]<=122)
            s[i] = s[i]-32;
        
            i++;    
    }
}
int length(char s[])
{
    int i=0, l = 0;
    while(s[i]!='\0')
    {
        l++;
        i++;
    }
    return l;

}
void reverse(char s[])
{
    int l = length(s);
    for(int i = 0 ; i <l/2;i++)
    {
        char temp = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = temp;
    }
}
int isPalindrome(char s[])
{   
    int l = length(s);
    for(int i = 0; i < l/2; i++ )
    {
        if(s[i] != s[l-i-1])
            return 0;
    }
    return 1;
}

void concat(char s1[],char s2[], char s3[])
{
    int l1 = length(s1),l2 = length(s2);
    int i,j;
    for(i = 0;i < l1; i++)
        s3[i] = s1[i];
    for(j=0;j < l2;j++)
        s3[i+j] = s2[j];

     s3[i+j] = '\0';
     puts(s3);       

}
void compare(char s1[],char s2[])
{
    int i,j;
    for(i=0,j=0;s1[i]!='\0' && s2[j]!='\0';i++,j++)
    {
        if(s1[i]!=s2[j])
            break;
    }
    if(s1[i]==s2[j])
            printf("Equal\n");
        if(s1[i] < s2[j])
            printf("s1 is smaller\n");
        if(s1[i]> s2[j])
            printf("s1 is larger\n");

}
int main()
{
    char p[20]="abc";
    char s[20] = "abc";
    char r[100];
    compare(s,p);
    



}