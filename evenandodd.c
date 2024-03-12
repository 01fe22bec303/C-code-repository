// modular c to print even and odd
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    switch(num%2==0)
  {
        case 1:
                printf("even:");
                break;
        case 2:
                printf("odd:");
                break;
    }
     return 0;
}
