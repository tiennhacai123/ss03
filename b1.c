#include<stdio.h>

int factorial(int n);
int main(){
    int n;
    printf("Nhap so can tinh giai thua: ");
    scanf("%d",&n);
    const result = factorial(n);
    printf("Gia tri la: %d \n", result);
    return 0;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}