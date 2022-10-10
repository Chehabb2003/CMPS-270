#include <stdio.h>
int msb(int n);
int lsb(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",msb(n)-lsb(n));
    return 0;
}
int lsb(int n){
    int bits=0,condition=1,lsb=0;
    if(n&-1==1){
        return 0;
    }
    while(n>0){
        if(n%2==1){
            if(condition==1){
                lsb=bits;
                condition=0;
            }
        }
        n/=2;
        ++bits;
    }
    return lsb;
}
int msb(int n){
    int bits=0,msb=0;
    if(n&-1==1){
        return 0;
    }
    while(n>0){
        if(n%2==1){
            msb=bits;
        }
        n/=2;
        ++bits;
    }
    return msb;
}