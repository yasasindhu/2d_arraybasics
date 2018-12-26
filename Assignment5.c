/*

	Given a matrix, print the elements of matrix in L shape.

	EX :
		1 2 3                   | 1 | 2  | 3
		4 5 6    ===========>   |   |    ---->       ============>    1 4 7 8 9 2 5 6 3
		7 8 9			| 4 | 5    6
		                        |   --------->
					| 7   8    9
					------------->


	Output : 1 4 7 8 9 2 5 6 3


*/


#include <stdio.h>
#define ROW 2
#define COLUMN 2

void traverseL (int matrix[ROW][COLUMN])
{
    // Write your actual solution here..  Given, a square matrix, print the elements of matrix in L shape.
int i,j;
for( j=0;j<COLUMN;j++)
{
for(i=0;i<ROW-j;i++)
{
    printf("%d\n",matrix[i][j]);
}
if(i==ROW-j)
{
    int k;
for(k=j+1;k<COLUMN;k++){
printf("%d\n",matrix[i-1][k]);
}
printf("\n");
}
}
}


int main()
{

    //Make sure your code accepts matrix of different dimensions

    int mat[ROW][COLUMN];/* = { { 1, 2, 3 },
                             { 4, 5, 6 },
                             { 7, 8, 9 } };*/

	int i,j;
	for (i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&mat[i][j]);
	}
	}

    traverseL(mat);
    return 0;


}
