#include<stdio.h>
int main(){
int row,col;
 int  sum=0;
int colB;

 printf("Enter your number  ");
 scanf("%d",&row);
 printf("Enter your number  ");
 scanf("%d",&col);

 int arr[row][col];

  printf("\nEnter array's elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d",&arr[i][j]);
             
        }
    

    }
       printf("Enter your digonal");
       scanf("%d",&colB);
        for(int j = 0; j < col; j++) {
        
      printf("%d \n",arr[j][colB]);
            sum+= arr[j][colB];
        }
    printf("The sum of diagonal elements of an Array:=%d\n",sum);
 
    
}