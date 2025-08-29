#include <stdio.h>

int trapRainWater(int a[], int n) {
    int left = 0, right = n - 1, lmax = 0, rmax = 0, water = 0;

    while (left < right) {
        if (a[left] < a[right]) {
            if (a[left] >= lmax) lmax = a[left];
            else water += lmax - a[left];
            left++;
        } else {
            if (a[right] >= rmax) rmax = a[right];
            else water += rmax - a[right];
            right--;
        }
    }
    return water;
}

int main() {
    int arr[] = {3, 0, 2, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Total trapped rainwater = %d\n", trapRainWater(arr, n));
    return 0;
}

