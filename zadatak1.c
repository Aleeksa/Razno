#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
void gore(int a[][100], int n){
    int br = 0;
    int j;
        for(j = n-1 ; j >= 0 ; j--){
            a[0][j] = fib(n-br);
                
            if(a[0][j] > 0){
               // a[0][j] %= 10;
            }
            br++;
        }
}
void sporedna(int a[][100], int n){
    int br = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i+j == n-1){
                a[i][j]=fib(n+br);
                if(a[i][j]>0){
                    //a[i][j] %= 10;
                }
                br++;
            }
        }
    }
}
void dole(int a[][100], int n){
    int br = n-1;
    for(int j = 0 ; j < n ; j++){
      a[n-1][j] = fib(n+br);
      br++;
    }
}
void ispis(int a[][100], int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n ; j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100] = {0}, n, i , j;

    scanf("%d",&n);

    int f = fib(n);
    gore(a,n);
    sporedna(a,n);
    dole(a,n);
    ispis(a,n);

    return 0;
}