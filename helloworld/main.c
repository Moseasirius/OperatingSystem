//main.c program
#include"stdio.h"
#include"max.h"
#include"min.h"

int main(){
    int array[] = {3,1,4,1,5,9,2,6};
    int n = sizeof(array)/sizeof(int);
    int max = getmax(array,n);
    int min = getmin(array,n);
    printf("max:=%d\n",max);
    printf("min:=%d\n",min);
    return 0;
}
