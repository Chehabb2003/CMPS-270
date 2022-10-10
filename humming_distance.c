#include <stdio.h>
/*
void hummingdistance(); 
Requires: Nothing
Effects: Asks the user to enter 2 integters x and y seperated by a space
and prints the number of different bits thst corresponds to the same position in x and y the
user may keep using the program and enter a negative number to stop execution.
*/
void hummingdistance(); 
int main(){
 hummingdistance();
    return 0;
}
void hummingdistance(){
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
}