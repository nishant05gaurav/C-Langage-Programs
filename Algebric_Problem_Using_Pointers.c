/*
Write  a function that recieves marjs recieved by a student in 3 subjects and returns the average and  percentage of these marks. Call this function from main() and print the results in main(.)
*/

#include <stdio.h>
void fun(int *, int *, int *, int *, float *, float *);

int main()
{
    int sum;
    float avg, per;
    int m1, m2, m3;

    printf("Enter the marks obtained by the students in the three subjects\n");
    scanf("%d%d%d", &m1, &m2, &m3);

    fun(&m1, &m2, &m3, &sum, &avg, &per);
    return 0;
}

void fun(int *m1, int *m2, int *m3, int *sum, float *avg, float *per)
{

    *sum = (*m1 + *m2 + *m3);
    *avg = (*sum) / 3;
    *per = (*avg) * 100;

    printf("The sum is %d\n", *sum);
    printf("The average marks obtained is %f\n", *avg);
    printf("The percentage obtained is %f\n", *per);
}
