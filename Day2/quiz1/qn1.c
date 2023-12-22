#include <stdio.h>
int main()
{
    char choice;
    int size;
    float area=0;
    printf("Enter the shape : ");
    scanf("%c",&choice);
    printf("Enter the size : ");
    scanf("%d",&size);
    if(choice =='S'|| choice =='s')
    {
        area=size*size;
        printf("Size of the square is %f",area);
    }
    else if(choice =='C'|| choice =='c')
    {
        area=3.14*size*size;
        printf("Size of the Circle is %f",area);
    }
}