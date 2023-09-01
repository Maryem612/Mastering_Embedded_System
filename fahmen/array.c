/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

			  int r,  c, a[2][2], b[2][2], sum[2][2], i, j;
			  printf("Enter the number of row ");
			  fflush(stdin);fflush(stdout);
			  scanf("%d", &r);
			  printf("Enter the number of column ");
			  fflush(stdin);fflush(stdout);
			  scanf("%d", &c);

			  printf("\nEnter elements of 1st matrix:\n");
			  for (i = 0; i < r; ++i)
			    for (j = 0; j < c; ++j) {
			      printf("Enter element a%d%d: ", i + 1, j + 1);
			      fflush(stdin);fflush(stdout);
			      scanf("%d", &a[i][j]);
			    }

			  printf("Enter elements of 2nd matrix:\n");
			  for (i = 0; i < r; ++i)
			    for (j = 0; j < c; ++j) {
			      printf("Enter element b%d%d: ", i + 1, j + 1);
			      fflush(stdin);fflush(stdout);
			      scanf("%d", &b[i][j]);
			    }

			  // adding two matrices
			  for (i = 0; i < r; ++i)
			    for (j = 0; j < c; ++j) {
			      sum[i][j] = a[i][j] + b[i][j];
			    }

			  // printing the result
			  printf("\nSum of two matrices: \n");
			  for (i = 0; i < r; ++i)
			    for (j = 0; j < c; ++j) {
			      printf("%d   ", sum[i][j]);
			      if (j == c - 1) {
			        printf("\n\n");
			      }
			    }

			  return 0;
			}
