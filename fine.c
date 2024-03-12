//modular c pgm to compute fine
#include<stdio.h>
 int main()
 {
   int days;
   char type;
   float fine;
   printf("Enter the number of days and type of library:");
   scanf("%d%c",&days,&type);

   if (days<=0)
   {
    printf("book returned in time");
   }
   else if (type=='c')
   {
     if (days>0&&days<=5)
        fine = 0.5*days;
     else if (days>5&&days<=10)
        fine = (0.5*5)+(days-5)*1;
     else if (days>10&&days<=15)
        fine = (0.5*5)+5*5+(days-10)*5;
     else if (days >15)
        printf("Membership cancelled:");
   }

    else if (type=='M')
    {
      if (days>0&&days<=5)
      fine = 1*days;
    else if (days>5&&days<=10)
        fine = (1*5)+(days-5)*2;
    else if(days>10&&days<=15)
    fine = (1*5)+(2*5)*1+(days-10)*10;
    else if (days>15)
    printf("Membership cancelled:");
    }
    else
      printf("invalid library type\n");
      printf("fine=%f\n",fine);

      return 0;

 }
