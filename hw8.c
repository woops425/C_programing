# include <stdio.h>
# include <math.h>

double cal_stddev(double arr[]);

int main(void) {
    double arr[5];
    printf("Enter 5 real numbers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &arr[i]);
    }
    
    double stddev = cal_stddev(arr);

    printf("Standard Deviation = %.3f \n", stddev);


    return 0;
}

double cal_stddev(double arr[]) {
    double sum = 0.0;
    double mean; // 평균
    double var = 0.0; // 분산
    
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    mean = sum / 5;

    for (int i = 0; i < 5; i++)
    {
        var += pow(arr[i] - mean, 2);
    }
    var /= 5;

    return sqrt(var);
}