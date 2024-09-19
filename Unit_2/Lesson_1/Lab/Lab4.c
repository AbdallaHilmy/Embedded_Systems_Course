#include<stdio.h>

void main()
{
    int num_std=0;
    float avg, degree,sum=0;
    fflush(stdin); fflush(stdout);
    while(1){
        scanf("%f",&degree);
        if(degree<0)
            break;
        sum+=degree;
        num_std++;
    }
    printf("num of students = %d\n", num_std);
    avg = sum/num_std;
    printf("average = %f\n", avg);
}
