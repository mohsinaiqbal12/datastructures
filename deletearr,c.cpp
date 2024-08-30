# include <stdio.h>
# include <stdlib.h>
int main()
{
    int n,e, index;
    printf("Enter size of the array\n");
    scanf("%d", &n);

    int *A = (int *)malloc(sizeof(int) * n);
    printf("Enter the elements of the array\n");
    for(int i =0 ; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("The entered array is: \n");
    for(int i = 0 ; i < n;i++)
    {
        printf("%d\t", A[i]);
    }
    printf("Enter the element to be deleted from the array\n");
    scanf("%d", &e);

    for(int i = 0; i < n; i++)  //search for the element
    {
        if(A[i] == e)
        {
            index = i;
            break;
        }
    }
    for(int i = index; i < n; i++)
    {
        A[i] = A[i+1];        //deleting the element
    }
    n = n-1;
    printf("After deleting, thearray is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }

}