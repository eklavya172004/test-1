#include <stdio.h>

int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    int n;
    scanf("%d",&n);

    int arr[50];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p;
    printf("find index of?\n");

    scanf("%d",&p);
    for(int i=0;i<n;i++){
    if(p=i){
    printf("%d\n",i);
    }
    }
}
