#include<stdio.h>
#include<math.h>


void main(){
    int n;
    scanf("%d", &n);
    int height[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &height[i]);
    }
    
    int heightSize[n-1][n-1];
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            heightSize[i][j] = 0;
        }
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(height[i] <= height [j+1]){
                heightSize[i][j] = height[i]*(j - i +1); 
            }
            else heightSize[i][j] = abs(height[j+1]*(j - i +1));

            printf("%d ", heightSize[i][j]);
        }
        printf("\n");
    }
    int MaxArea = heightSize[0][1];
    for (int i = 0; i < n - 1 ; i++){
        for(int j = 0; j < n - 1; j++){
            if(heightSize[i][j] > MaxArea ){
                MaxArea = heightSize[i][j];
            } 
            else;
        }
    }
    
    printf("%d", MaxArea);
}