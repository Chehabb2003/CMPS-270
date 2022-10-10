#include <stdio.h>
/*int msb(int n)
Requires: A positve integer non zero integer n as argument to function.
Effects: Returns the position of the most significant bit in binary.
*/
/*int lsb(int n)
Requires: A positve integer non zero integer n as argument to function.
Effects: Returns the position of the least significant bit in binary.
*/
/*int output(int msb, int lsb)
Requires: nothing
Effects: Prints the result of msb-lsb.
*/
int msb(int n);
int lsb(int n);
int output(int msb, int lsb);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Please enter a non zero positive integer: \n");
        while(1){
            scanf("%d",&n);
            if(n>0){
                break;
            }
        printf("Please enter a non zero positive integer: \n");  
        }
    }
        output(msb(n),lsb(n));
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
int output(int msb, int lsb){
    printf("Result: %d ",msb-lsb);
}