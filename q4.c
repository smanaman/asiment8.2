#include<stdio.h>
int main(){
int row,col;
 


 printf("Enter your number  ");
 scanf("%d",&row);
 printf("Enter your number  ");
 scanf("%d",&col);

 int a[row][col];
int sum=0,i,j;

  printf("\nEnter array's elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
              
        }
    

    }
for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if (i == 0 || i == row-1 || j == 0 || j == col-1) {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nSum of boundary elements: %d\n", sum);

}