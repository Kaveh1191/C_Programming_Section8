/*Name:Kaveh Masoudinia
Section 8 Exercise 5
Date:12/08/2021(1400/09/17)*/
#include <stdio.h>
void MergeArray(int array1[], int n, int array2[], int m, int array3[], int i, int j,int k ){
    if(i<n&&j<m){
        if(array1[i]<array2[j]){
            array3[k] = array1[i];
            ++i;
        }
        else{
            array3[k] = array2[j];
            ++j;
        }
        ++k;
        MergeArray(array1,n,array2,m,array3,i,j,k);
    }
    else{
        while(i<n){
            array3[k] = array1[i];
            ++i;
            ++k;
        }
        while(j<m){
            array3[k] = array2[j];
            ++j;
            ++k;
        }
    }
}
void PrintArray(int array[], int n){
    for(int i=0;i<n;++i)
        printf(" %d",array[i]);
}
int main() {
    int n,m;
    int array3[100];
    int array1[] = { 1 , 3 , 8 , 9 , 17};
    int array2[] = { 2 , 6, 7 , 15 , 16 };
    n = sizeof(array1)/sizeof(int);
    m = sizeof(array2)/sizeof(int);

    printf("Array 1: ");
    PrintArray(array1, n);
    printf("\nArray 2:");
    PrintArray(array2, m);

    MergeArray(array1,n,array2,m,array3,0,0,0);

    printf("\narray 3:");
    PrintArray(array3,n+m);
}