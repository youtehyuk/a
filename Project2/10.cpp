#include <stdio.h>

int main() {
    int a = 0;
    for (a; a < 5; a++) {
        for (int j = 0; j < a * 2; j++) {
            printf(" ");
        }
        printf(a % 2 == 0 ? "| O |\n" : "| X |\n");
        if (a <= 3) {
            printf("-------------\n");
        }
    }
}