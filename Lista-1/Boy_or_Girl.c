#include <stdio.h>
#include <string.h>

int main() {
    char nome[101];

    scanf("%s", nome);

    int count = 0;

    for (int i = 0; i < 101; i++) {
        for (int j = i; j < 101; j++) {
            if (nome[i] == nome[j + 1]) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    if ((strlen(nome) - count) % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
}