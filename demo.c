#include<stdio.h>

int factorial(int n);
int main(){
    //tinh n gia thua
    int n;
    printf("Nhap vao so n can tinh giai thua ");
    scanf("%d",&n);
    int result = factorial (n);
    printf("Giai thua cua n la: %d \n",result);
    return 0;
}
int factorial(int n){
    // phần cơ sở
    if(n==0){
        return 1;
    }
    // phần đệ quy
    //tinh n!
    return n * factorial(n-1)
}