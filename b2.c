#include<stdio.h>

int sumRecursive(int n, m);

int main(){
    int n, m;
    printf("Nhap so n: ");
    scanf("%d",&n);
    printf("Nhap so m: ");
    scanf("%d",&m);
    int result = sumRecursive(n,m);
    printf("ket qua la: %d", result);
    return 0;
}
int sumRecursive(int n, int m){
    if(n > m){
        return 0;
    }
    return n + sumRecursive(n+1,m);
}
// 