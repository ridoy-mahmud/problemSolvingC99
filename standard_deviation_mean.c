#include <stdio.h>
#include <math.h>
#define MAX 10
void main()
{
    int i, n;

    float num[MAX], deviation, sum, sumqr, mean, variance, dev;
    sum = 0;
    sumqr = 0;
    n = 0;
    printf("Enter number of elements :\n");
    scanf("%d", &n);

    printf("Input %d the values \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
        sum += num[i];
    }
    mean = sum / (float)n;
    printf("Mean is %f\n", mean);
    for (i = 0; i < n; i++)
    {
        deviation = num[i] - mean;
        sumqr += deviation * deviation;
    }
    variance = sumqr / (float)n;
    dev = sqrt(variance);
    printf("Standard Deviation Value is %f\n", dev);
    return 0;
}
