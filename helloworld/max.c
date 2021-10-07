//max.c propram
#include"max.h"
int getmax(int array [],int n){
    int maxnum = array[0];
    for(int i=0;i<n;i++){
        if(array[i]>maxnum)
            maxnum = array[i];
    }
    return maxnum;
}
