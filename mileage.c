//c program to compute distance traveled by the car
/* Name :Haripriya G
   Roll no :1936
   Division :S
   Date :28/12/2022
*/
#include<stdio.h>
int main()
{
    int mileage;
    float worth_of_petrol,petrol_price,fuel,distance;
    mileage=14; //initialization;
    printf("Enter worth of petrol");
    scanf("%f",&worth_of_petrol);
    printf("Enter price of petrol");
    scanf("%f",&petrol_price);

    fuel=worth_of_petrol/petrol_price;
    distance=fuel*mileage;
    printf("Distance is %f\n",distance);
    if (distance>=100)
    {
        printf("Yes car can travel up to 100km/hr");
    }
    else
    {
        printf("No, car cannot travel\n");
    }
    return 0;
}



