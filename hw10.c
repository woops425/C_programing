# include <stdio.h>
# include <string.h>

typedef struct CityInfo {
    char name[20];
    char country[20];
    int population;
} City;

int main(void) {
    City cities[3];
    printf("Input three cities: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name> ");
        fgets(cities[i].name, sizeof(cities[i].name), stdin);
        // 개행문자 제거
        size_t len = strlen(cities[i].name);
        if (len > 0 && cities[i].name[len-1] == '\n') {
        cities[i].name[len-1] = '\0';
        }

        printf("Country> ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);
        len = strlen(cities[i].country);
        if (len > 0 && cities[i].country[len-1] == '\n') {
        cities[i].country[len-1] = '\0';
        }

        printf("Population> ");
        scanf("%d", &cities[i].population);
        // scanf로 입력을 받고 입력 버퍼에 남아있는 개행문자를 제거 -> 다음 fgets 호출에 영향을 주지 않도록 함
        while (getchar() != '\n');
    }
    printf("\n");
    
    printf("Printing the three cities: \n");
    for (int j = 0; j < 3; j++)
    {
        printf("%s in %s with a population of %d people \n", cities[j].name, cities[j].country, cities[j].population);
    }
    
    


    return 0;
}