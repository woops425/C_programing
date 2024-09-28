# include <stdio.h>

int main(void) {
    // 개념확인과제
// 별('*')을 이용하여 다섯 줄의 피라미드 출력(for 루프 이용)

int i, k;
int height = 5;

for (i = 1; i <= height; i++) { // 공백과 별의 입력이 동시에 이루어져야하기 때문에 중첩 for문 안에 for문을 배치하지 않았음
    // 공백 출력을 위한 for문(공백이 처음엔 많았다가 점점 줄어드는 구조)
    for (k = 1; k <= height - i; k++) {
        printf(" ");
    }
    // 별('*') 출력을 위한 for문(별은 처음엔 적었다가 점점 많아지는 구조)
    for (k = 1; k <= (2 * i - 1); k++) {
        printf("*");
    }
    printf("\n");
}


return 0;
}