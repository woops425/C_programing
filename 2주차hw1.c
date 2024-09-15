# include <stdio.h>

// 2주차 개념확인과제
// 2개의 정수를 입력받아 AND, OR, XOR한 결과를 출력하는 프로그램 작성

int main(void) {
    int num1;
    int num2;
    int AND_result;
    int OR_result;
    int XOR_result;

    printf("Input two integers : ");
    scanf("%d %d", &num1, &num2);
    AND_result = num1 & num2;
    OR_result = num1 | num2;
    XOR_result = num1 ^ num2;

    printf("%d & %d = %d \n", num1, num2, AND_result);
    printf("%d | %d = %d \n", num1, num2, OR_result);
    printf("%d ^ %d = %d \n", num1, num2, XOR_result);


    return 0;
}