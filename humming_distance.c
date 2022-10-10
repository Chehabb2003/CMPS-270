#include <stdio.h>
int main(){
    int x,y,z,c;
    printf("Enter two numbers: ");
    scanf("%d",&x);
    while(x>=0){
    c=0;
    scanf("%d",&y);
    if(y<0){
        break;
    }
    z=x^y;
    while(z>0){
        if(z%2==1){
            ++c;    
        }
        z/=2;
    }
    printf("%d\n",c);
    scanf("%d",&x);
    }
  
    return 0;
}