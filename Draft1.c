#include <stdio.h>
#define MAX_SIZE 1001

/*
Draft 1 of the Test Question for Google Hash 2018- Cutting Pizza;
This programme will attempt to take in the data from file, assign it to appropriate variables, and print out the results;

Input: R, C, L, H = Number of Rows, Number of Columns, Minimum ingredient cells per slice, max cells in a slice;

By Joseph Dempsey, 2018;
*/

int main(void)
{
	/*section to initialise the variables*/
	int rows;
	int columns;
	int min_ingredients;
	int max_cells;
	int i, j;
	char ch;

	/*section to get the info from file*/

	FILE *fp; //setting up the file pointer
	fp = fopen("small.in", "r");

	fscanf(fp, "%d", &rows);		//taking values from file and assigning to variables
	fscanf(fp, "%d", &columns);
	fscanf(fp, "%d", &min_ingredients);
	fscanf(fp, "%d", &max_cells);

	//create pizza_string, columns + 1 to allow for null character
	char pizza_string[rows][columns+1];
	for(i=0; i<rows; i++)
	{
		fscanf(fp, "%s", &pizza_string[i]);
	}

	fclose(fp);

	/*section to print the data
	need a for loop to print the pizza out*/
	printf("rows = %d\n", rows);
	printf("columns = %d\n", columns);
	printf("min_ingredients = %d\n", min_ingredients);
	printf("max_cells = %d\n*************\n", max_cells);
	
	for(i=0; i<rows; i++)
	{
		printf("row[%d] of pizza_string: %s\n", i, pizza_string[i]);
	}
	return 0;
}