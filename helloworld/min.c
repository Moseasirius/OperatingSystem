//min.c propram
#include"min.h"
int getmin(int array [],int n){
    int minnum = array[0];
    for(int i=0;i<n;i++){
        if(array[i]<minnum)
            minnum = array[i];
    }
    return minnum;
}
