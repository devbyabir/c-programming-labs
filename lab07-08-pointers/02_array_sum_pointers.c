/*
 * Lab 7-8.2: Array sum with pointers
 * Sums ten entered integers by stepping a pointer through the array.
 * Original lab date: 2023-12-06/07
 */
#include<stdio.h>
int main()
{
	int array[10];
	int i, sum = 0;
	int *pnum;

	printf("Enter 10 Elements : \n");

	for (i = 0; i < 10; i++)
        {
            scanf("%d", &array[i]);
        }
	pnum = array;

	for (i = 0; i < 10; i++)
        {
            sum = sum + *pnum;
            pnum++;
        }

	printf("The Sum of All Array Elements : %d", sum);

return 0;
}
