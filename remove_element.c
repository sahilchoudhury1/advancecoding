#include <stdio.h>

int removeElement(int arr[], int n, int key) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != key) arr[j++] = arr[i];
    }
    return j;
}

int main() {
    int arr[] = {3, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int newSize = removeElement(arr, n, key);

    printf("Number of values not equal to %d = %d\n", key, newSize);
    printf("Updated array: ");
    for (int i = 0; i < newSize; i++) printf("%d ", arr[i]);
    return 0;
}

