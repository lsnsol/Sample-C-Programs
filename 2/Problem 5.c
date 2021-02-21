#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, noOfStudents = 50;
		printf("Enter number of students: ");
		scanf("%d",&noOfStudents);

	// array in format of [[roll1,marks1],[roll2,marks2]...]
	int arr1[noOfStudents][2];

	// enter the data
	for (i = 0; i < noOfStudents; i++)
	{
		int roll, marks;
		printf("Enter roll no and marks (seperated by space) of student %d: ", i + 1);
		scanf("%d %d", &roll, &marks);
		arr1[i][0] = roll;
		arr1[i][1] = marks;
	}

	// sort by roll no
	for (i = 0; i < noOfStudents; i++)
	{
		for (j = 0; j != i, j < noOfStudents; j++)
		{
			if (arr1[i][0] > arr1[j][0])
			{

				// swap the roll no
				int temp = arr1[i][0];
				arr1[i][0] = arr1[j][0];
				arr1[j][0] = temp;

				// swap the marks
				temp = arr1[i][1];
				arr1[i][1] = arr1[j][1];
				arr1[j][1] = temp;
			}
		}
	}

	// display the result
	printf("\nSorted Array by roll in ascending order is: \n");
	for (i = 0; i < noOfStudents; i++)
	{
		printf("Roll=  %d, Marks= %d\n", arr1[i][0], arr1[i][1]);
	}

	// sort by marks
	for (i = 0; i < noOfStudents; i++)
	{
		for (j = 0; j != i, j < noOfStudents; j++)
		{
			if (arr1[i][1] > arr1[j][1])
			{

				// swap the roll no
				int temp = arr1[i][0];
				arr1[i][0] = arr1[j][0];
				arr1[j][0] = temp;

				// swap the marks
				temp = arr1[i][1];
				arr1[i][1] = arr1[j][1];
				arr1[j][1] = temp;
			}
		}
	}

	// display the result
	printf("\nSorted array by marks in ascending order is: \n");
	for (i = 0; i < noOfStudents; i++)
	{
		printf("Roll=  %d, Marks= %d\n", arr1[i][0], arr1[i][1]);
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("\n");
	////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// array in format of [[roll1,roll2...],[marks1,marks2...]]
	int arr2[2][noOfStudents];

	// enter the data
	for (i = 0; i < noOfStudents; i++)
	{
		int roll, marks;
		printf("Enter roll no and marks (seperated by space) of student %d: ", i + 1);
		scanf("%d %d", &roll, &marks);
		arr2[0][i] = roll;
		arr2[1][i] = marks;
	}

	// sort by roll no
	for (i = 0; i < noOfStudents; i++)
	{
		for (j = 0; j != i, j < noOfStudents; j++)
		{
			if (arr2[0][i] > arr2[0][j])
			{

				// swap the roll no
				int temp = arr2[0][i];
				arr2[0][i] = arr2[0][j];
				arr2[0][j] = temp;

				// swap the marks
				temp = arr2[1][i];
				arr2[1][i] = arr2[1][j];
				arr2[1][j] = temp;
			}
		}
	}

	// display the result
	printf("\nSorted Array by roll in ascending order is: \n");
	for (i = 0; i < noOfStudents; i++)
	{
		printf("Roll=  %d, Marks= %d\n", arr2[0][i], arr2[1][i]);
	}

	// sort by marks
	for (i = 0; i < noOfStudents; i++)
	{
		for (j = 0; j != i, j < noOfStudents; j++)
		{
			if (arr2[1][i] > arr2[1][j])
			{

				// swap the roll no
				int temp = arr2[0][i];
				arr2[0][i] = arr2[0][j];
				arr2[0][j] = temp;

				// swap the marks
				temp = arr2[1][i];
				arr2[1][i] = arr2[1][j];
				arr2[1][j] = temp;
			}
		}
	}

	// display the result
	printf("\nSorted array by marks in ascending order is: \n");
	for (i = 0; i < noOfStudents; i++)
	{
		printf("Roll=  %d, Marks= %d\n", arr2[0][i], arr2[1][i]);
	}

	return 1;
}
