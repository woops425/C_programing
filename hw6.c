# include <stdio.h>

// 총 5개의 정수를 배열로 한꺼번에 입력 받아서, 홀수와 짝수를 구분지어 출력하는 프로그램 작성
int main(void) {
    int arr[5];
    int odd_arr[5], even_arr[5];
    int odd_count = 0;
    int even_count = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_arr[even_count] = arr[i];
            even_count++;
        }
        else {
            odd_arr[odd_count] = arr[i];
            odd_count++;
        }
        
    }
    
    printf("Odd numbers: ");
    for (int j = 0; j < odd_count; j++)
    {
        printf("%d ", odd_arr[j]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int k = 0; k < even_count; k++)
    {
        printf("%d ", even_arr[k]);
    }
    printf("\n");    
    

    return 0;
}