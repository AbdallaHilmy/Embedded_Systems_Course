#include <stdio.h>

void main()
{
    char choice;
    float radius;
    float area, circumference;
    fflush(stdin); fflush(stdout);
    printf("Choose 'a' for area, 'c' for circumference\n");
    scanf("%c", &choice);
    if(choice=='a'){
        printf("enter radius\n");
        scanf("%f",&radius);
        area = 3.14*radius*radius;
        printf("area = %f",area);
    }
    else if(choice=='c'){
        printf("enter radius\n");
        scanf("%f",&radius);
        circumference = 2*3.14*radius;
        printf("circumference = %f\n",circumference);
    }
    else
        printf("wrong choice\n");
}
