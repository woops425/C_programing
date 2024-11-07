# include <stdio.h>

int main(void) {

    // 개념확인과제 hw7
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {7, 8, 9, 10, 11, 12};
    int * ptr1 = arr1;
    int * ptr2 = arr2;
    int temp;
    

    printf("arr1: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");
    printf("arr2: ");

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2++;
    }

    printf("\n");
    printf("after swap \n");
    printf("arr1: ");

    for (int j = 0; j < 6; j++)
    {
        printf("%d ", arr1[j]);
    }

    printf("\n");
    printf("arr2: ");
    for (int k = 0; k < 6; k++)
    {
        printf("%d ", arr2[k]);
    }

    printf("\n");
    

    
    return 0;
}