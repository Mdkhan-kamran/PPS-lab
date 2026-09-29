#include <stdio.h>
int main ()
   {
    int password;

    printf("Enter password:");
    scanf("%d",&password);
    if (password==786)
    {
     printf("Login successfull");
     }
     else
     {
     printf("Incorrect password");
     }

     return 0;
     }
