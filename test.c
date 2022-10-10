#include<stdio.h>
#include <string.h>
int main(){/*
    char *c1[]={"ab","ak"};
    char *c2[]={"ac","zb","zzzc"};
    printf("%s",*(c1+1));
    if((*c1+1)<*c2)
    printf("%s","true");   */ 
    int array[]={3,4,1,4};
    int *ptr=array;
    ++ptr;
    *ptr=1;
    printf("%d",array[1]);

    return 0;
}
/*void concat(int str, char **c1D[str],char **c2D[][],int c2size){
    char s[]="";
    int k=0;
    for(int i=0;i<str;++i){
        for(int j=0;j<c2size-1;++j){
            strcat(s,*((*c2D)+k));
            strcat(s," ");
            ++k;
        }
        strcat(s,*((*c2D)+k));
        c1D[i]=s;
        strcpy(s,"");
    }
}*/