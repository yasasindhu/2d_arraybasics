/*

    Given, a square matrix  return absolute difference of sum of diagonals(left and right)

        Ex:
                1 2 3
                4 5 6
                7 8 9
            Here,
                (L)left diagonal sum is (1+5+9)=12
                (R)right diagonal sum is (3+5+7)=15
                Absolute difference(|L-R|)=|12-15|=3


*/

#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 3

int diffOfSum(int matrix[ROW][COLUMN])
{
    int leftsum=0,rightsum=0,difference=0;
	// Write your actual solution here..  Given, a square matrix  return absolute difference of sum of diagonals(left and right)
 for(int i=0;i<ROW;i++) {
        for(int j=0;j<COLUMN;j++){
        if(i==j){
                leftsum+=matrix[i][j];
            printf("%d",matrix[i][i]);
        }if((i+j==ROW-1)){
            rightsum+=matrix[i][j];
        printf("%d",matrix[i][j]);
        }}}
        printf("\n%d is leftsum of diagonal\n",leftsum);
         printf("\n%d is rightsum of diagonal\n",rightsum);
        difference=leftsum-rightsum;
        return difference;
}


int main()
{
    /*
        Do write code that works for all inputs(Different size 3,4,5....)
    */

	int matrix[ROW][COLUMN] = { { 1, 2, 3 },
                      		    { 4, 5, 6 },
                                    { 7, 8, 9 } };
/*int i,j;
	for (i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&matrix[i][j]);
	}
}
*/

	int result = diffOfSum(matrix);
    printf("\nabsolute Result = %d",abs(result));
    	return 0;

}
