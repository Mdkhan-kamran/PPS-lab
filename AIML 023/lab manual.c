#include<stdio.h>
int main()
{
int choice;
 int a=10,b=5;
 printf("1.Addition\n");
  printf("2.Substraction\n");
  printf("3.multipilication\n");
   printf("4.division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:  printf("sum=%d",a+b);
    break;
    case2 :  printf("difference=%d",a-b);
    break;
    case3: printf("product=%d",a*b);
    break;
    case4: printf("division=%d",a/b);
    break;
    deafult:

    printf("invalid choice");
    }
    return 0;
}

