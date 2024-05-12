#include<stdio.h>
int main(){
int row,col;
 


 printf("Enter your number  ");
 scanf("%d",&row);
 printf("Enter your number  ");
 scanf("%d",&col);

 int a[row][col];
 int b[row][col];

  printf("\nEnter array's elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
              
        }
    

    }
      printf("\nEnter array's elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d",&b[i][j]);
              
        }
    

    }

      for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
             int c=a[i][j]+b[i][j];
              printf("%d  ",c);
        }
    
printf("\n");
    }
}