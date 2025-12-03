#include <stdio.h>

int main() {
    int a[6] = {1, 2, 3, 4, 5, 2};
    int n = 6;
    int cnt, i, j;

    printf("Non-repeating elements: ");
    for (j = 0; j < n; j++) {
        cnt = 0;
        for (i = 0; i < n; i++) {
            if (a[j] == a[i]) {
                cnt++;
            }
        }
        if (cnt == 1) {
            printf("%d ", a[j]);
        }
    }
    return 0;
}

