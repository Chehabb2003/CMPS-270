#include <stdio.h>
#include <math.h>
#define SIZE (10)
void printArray(int *array, int length);
void arrayHistogram(int *array, int length);
void swapValues(int array[], int i, int j);
void bubbleSort(int array[],int length);
int checkUnique(double array[], int j, int length); //helper fct for Histogram
int frequency(int array[], int j, int length); //helper fct for Histogram
double median(int array[],int length);
int mode(int *array, int length);
int main()
{
    int array[] = {1,2,3,3,2,1,1,1,2,3};
    int length = sizeof(array)/sizeof(array[0]);
    printArray(array,length);
    arrayHistogram(array,length);
    swapValues(array, 0, 1);
    printArray(array,length);
    bubbleSort(array,length);
    printArray(array,length);
    printf("%f",median(array,length));
    printf("%d", mode(array,length));

    

    return 0;
}
void printArray(int *array, int length)
{
    printf("%s %s\n", "Index", "Value");
    for (int i = 0; i < length; ++i)
    {
        printf("%5d %5d\n", i, *array);
        ++array;
    }
}
int checkUnique(double array[], int j, int length){
    for(int i=0;i<length;++i){
        if(array[i]==j){
            return 0;
        }
    }
    return 1;
}
int frequency(int array[], int j, int length){
    int freq=0;
    for(int i=0;i<length;++i){
        if(array[i]==j){
            ++freq;
        }
    }
    return freq;
}
void arrayHistogram(int *array, int length)
{
    int count=0,freq;
    double countUnique[length];
    for(int i=0;i<length;++i){  //initializing the count array to keep track of frequency.
        countUnique[i]=INFINITY;
    }
    for(int i=0;i<length;++i){
        if(checkUnique(countUnique,array[i],length)==1){
            countUnique[count]=array[i];
            count++;
        }
    }
    int Unique[count];
    for(int i=0;i<count;++i){
        Unique[i]=countUnique[i];
    }
    printf("%s %s %s\n", "Value", "Frequency", "Histogram");
    for (int k=0;k<count;++k)
    {
        freq=frequency(array,Unique[k],length);
        printf("%5d %9d ",Unique[k],freq);
        printf("%4s", "");
        for (int j = 0; j < freq; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}
void swapValues(int array[], int i, int j)
{ // swaps i with j
    int temp = array[j];
    array[j] = array[i];
    array[i] = temp;
}
void bubbleSort(int array[],int length)
{
    for (int i = 0; i<length; ++i)
    {
        for(int j=0;j<length-1;++j){
            if(array[j]>array[j+1]){
                swapValues(array,j,j+1);
            }
        }
    }
}
double median(int array[], int length){
    bubbleSort(array,length);
    if(length%2==0){
        return ((array[(length/2) -1] +array[length/2])/2.0);
    }
    else{
        return (array[length/2])/1.0;
    }
}
int mode(int *array, int length){
    int mode[length];
    int c=0,max=-1,msf=0;
    for(int i=0;i<length;++i){
        c=0;
        for(int j=0;j<length;++j){
            if(array[i]==array[j]){
                ++c;        
            }
        }
        mode[i]=c;
    }
    int i=0;
    for(i=0;i<length;++i){
        if(mode[i]>max){
            max=mode[i];
            msf=i;
        }
    }
    return array[msf];
}
