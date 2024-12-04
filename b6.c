#include<stdio.h>

int sum(int arr[], int n );

int main(){
    int n;
    printf("Nhap vao so phan tu cua 1 mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap vao tung phan tu cua mang: ");
    for(int i=0; i<n;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    int result = sum(arr ,n);
    printf("Tong cac phan tu cua mang la: %d \n", result);
    return 0;
}
int sum(int arr[], int n) {
    if (n <= 0) {
        return 0; 
    }
    return arr[n - 1] + sum(arr, n - 1);
}