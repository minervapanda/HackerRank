#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    int *temp = malloc(sizeof(int) * n);


    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int j =0;
    for(int i=k; i<n; i++ )
        {
        temp[j]=a[i];
         j++;

    }
    j=n-k;
    for(int i=0;i<k;i++)
        {
        temp[j]=a[i];
         j++;
    }
    for(int a_i = 0; a_i < n; a_i++){
       printf("%d ",temp[a_i]);
    }

    return 0;
}
