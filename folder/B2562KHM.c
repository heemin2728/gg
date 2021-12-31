#include<stdio.h>
int main() {
    int ar[9];
    for (int i = 0; i < 9; i++) {
        scanf("%d", &ar[i]);
    }
    int max;
    max = ar[0];
    int p = 1;
    for (int j = 0; j < 9; j++) {
        if (ar[j] > max) {
            max = ar[j];
            p = j + 1;
        }
    }
    printf("%d\n%d", max, p);
    return 0;
}