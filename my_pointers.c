#include<stdio.h>
void merge(char **c, char **s1,int size1, char **s2,int size2);
int main(){
    char *c1[]={"ab","ac"};
    char *c2[]={"bc","dx","fw"};
    int size1=sizeof(c1)/sizeof(c1[0]);
    int size2=sizeof(c2)/sizeof(c2[0]);
    char *c[size1+size2];
    merge(c,c1,size1,c2,size2);
    for(int i=0;i<size1+size2;++i){
        printf("%0s\n",*(c+i));
    }
    return 0;
}
void merge(char**c, char **s1,int size1, char **s2,int size2){
    int i=0,j=0;
    while(i<size1 && j<size2){
        if(*s1<*s2){
            c[i+j]=*s1;
            ++s1;
            ++i;
        }
        else{
            c[i+j]=*s2;
            ++s2;
            ++j;
        }
    }
    while(i<size1){
        c[i+j]=*s1;
        ++s1;
        ++i;
    }
    while(j<size2){
        c[i+j]=*s2;
        ++s2;
        ++j;
    }
}