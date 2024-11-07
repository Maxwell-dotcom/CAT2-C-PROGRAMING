/*
// A programm to define and initialize a 2D array called scores
Author: Maxwell Otieno Adoyo
Reg no: CT101/G/24606/24
Date: 07-11-2024
*/

#include<stdio.h>
int main()
{
	int i;
	int j;
	// define and initialize the 2D array
	int scores[4][2]={{65,92},{84,72},{35,70},{59,69}};
	//use nested for loops to print the elements of the array
	for(i=0;i<4;i++){
		
		for (j=0;j<2;j++){
			printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
		}
	}
	return 0;
}