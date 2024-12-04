#include<stdio.h>

int fibonacci(int n);

int main(){
    int n;
    printf("Nhap so lan hien thi fibonacci: ");
    scanf("%d",&n);
    if(n<2){
        printf("Vui long nhap lai");
        return 0;
    }
    printf("Day cac so la: \n" );
    for(int i=0;i<n;i++){
        printf("%d, ", fibonacci(i));
    }
    return 0;
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}