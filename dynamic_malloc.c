#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i,n;
    printf("Enter the integer n: ");
    scanf("%d", &n);

    int *prt = (int* )malloc(n*sizeof(int));

    if(prt == NULL){
        printf("Memory is not available.");
        exit(1);
    }

    for(int i = 0; i < n ; i++){
        printf("Enter an integers: ");
        scanf("%d", prt + i);
    }

    for (int i = 0; i < n; i++){
        printf("%d", *(prt + i));
    }
    free(prt);
    return 0;

}