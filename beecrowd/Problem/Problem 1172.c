/*Read an array X[10]. After, replace every null or negative number of X ?by 1.
Print all numbers stored in the array X.*/


#include <stdio.h>
int main() {
    int i,X[10];
    for(i=0;i<10;i++){
        scanf("%d",&X[i]);
    }
    for (i=0;i<10;i++) {
        if (X[i]<=0) {
            X[i]=1;
                }
        printf("X[%d] = %d\n",i,X[i]);
    }
    return 0;
}
