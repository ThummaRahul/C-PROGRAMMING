#include <stdio.h>

int main() {
    int a[6] = {2, 2, 2, 5, 5, 2};
    int n = 6;
    int cnt, i, j;

    printf("Repeating elements: ");
    for (j = 0; j < n; j++) {
        cnt = 0;
        for (i = 0; i < n; i++) {
            if (j>i && a[j] == a[i]) {
                cnt++;
            }
        }
        if (cnt == 1) {
            printf("%d ", a[j]);
        }
    }
    return 0;
}

