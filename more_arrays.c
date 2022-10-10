#include<stdio.h>
#include <string.h>
void concat(int str, char **c1D[],char c2D[][], int c2size);
int main(){
char *c2D[][3] = {{ "I","Love","Coding" },{"This","Is","Sparta"}};
char *c1D[sizeof(c2D)/sizeof(c2D[0])];
int str=sizeof(c2D)/sizeof(c2D[0]);
int c2size=sizeof(c2D[0])/sizeof(c2D[0][0]);
concat(str,c1D,c2D,c2size);

return 0;
}
void concat(int str, char **c1D[str],char c2D[][],int c2size){
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
}