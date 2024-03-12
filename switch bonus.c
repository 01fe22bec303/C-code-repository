//c program to compute bonus of workers using switch

#include <stdio.h>
 int main()
 {
     float salary,new_sal,bonus;
     char gender;
     printf("Enter gender and salary of employee\n");
     scanf("%c%f",&gender,&salary);
     switch(gender)
     {
             case 'M':
             case 'm': if(salary<10000)
             {
                bonus=0.07*salary;
                new_sal=salary+bonus;
                printf("new salary %f\n",new_sal);
             }
             else
             {
                 bonus=0.05*salary;
                 new_sal=salary+bonus;
                 printf("new salary %f\n",new_sal);
             }
     break;
              case 'F':
              case 'f': if(salary<10000)
         {
               bonus=0.12*salary;
               new_sal=salary+bonus;
               printf("new salary %f\n",new_sal);
         }
         else
         {
                bonus=0.10*salary;
                new_sal=salary+bonus;
                printf("new salary %f\n",new_sal);
         }
         break;
         default:printf("Invalid input for gender\n");

     }
    return 0;
 }


