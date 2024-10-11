#include <stdio.h>


void sort(int arr[], int n) {

    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            c0 += 1;
        } else if (arr[i] == 1) {
            c1 += 1;
        } else {
            c2 += 1;
        }
    }

    int index = 0;

    for (int i = 0; i < c0; ++i) {
        arr[index] = 0;
        index++;
    }

    for (int i = 0; i < c1; ++i) {
        arr[index] = 1;
        index++;
    }

    for (int i = 0; i < c2; ++i) {
        arr[index] = 2;
        index++;
    }


}

int main(void) {
    //  3.  Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr)/ sizeof(arr[0]);

    sort(arr, n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
