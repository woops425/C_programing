# include <stdio.h>

// 임의의 양의 정수를 입력받아 소수인지 아닌지 판단하는 프로그램
int main(void) {

    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);

    if (num == 2 || num == 3)
    {
        printf("It is a prime number.\n");
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        printf("It is not a prime number.\n");
    }
    else {
        printf("It is a prime number.\n");
    }

    return 0;
}