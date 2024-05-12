#include<stdio.h>
int main(){
int row,col;
 int  sum=0;
int max;

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
                 sum+=arr[i][j];
               max= sum/(row*col);
        }
    

    }
    printf("Average of an Array:=%d",max);
}