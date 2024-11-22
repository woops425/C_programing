# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int convCase(int ch) {
    // 아스키 코드에서의 모든 문자의 대소문자 간의 차의 크기는 같음
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + diff; // diff를 소문자 - 대문자로 했으니, 입력받은 ch에 diff만큼 다시 더해주면, 소문자로 변환됨
    }
    else if (ch >= 'a' && ch <= 'z') {
        return ch - diff;
    }
    else {
        return ch;
    }
}

int main(void) {
    char str[100];
    int i = 0;
    printf("Input> ");
    fgets(str, sizeof(str), stdin); // 문자 입력
    
    while (str[i] != '\0' && str[i] != '\n')
    {
        str[i] = convCase(str[i]);
        i++;
    }
    
    printf("Output> %s\n", str);

    return 0;
}