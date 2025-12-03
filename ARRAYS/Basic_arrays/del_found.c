#include <stdio.h>

int main() {
    int arr[5] = {12, 21, 31, 44, 75};
    int n = 5;
    int val;

    // Input value to delete
    printf("Enter value you want to delete: ");
    scanf("%d", &val);

    // Find the index of the element to delete
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            // Shift elements to the left to remove the element
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;  // Decrease the size of the array
            found = 1;
            break;  // Exit the loop since element is found and deleted
        }
    }

    if (found) {
        // Print the updated array
        printf("Updated array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Value not found in the array.\n");
    }

    return 0;
}

