#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "Header.h"
#define size 81
#define limit 10
using namespace std;

void sort(char *string[], int length)
{
	char * temp;
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (strcmp(string[i], string[j]) > 0)
			{
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
}

void main()
{	
	setlocale(LC_ALL, "Rus");
	char inputData[limit][size];
	char * pt[limit];

	printf("¬ведите более чем %d строк - ", limit);
	int i = 0;
	while (i < limit && gets_s(inputData[i]) != NULL && inputData[i][0] != '\0')
	{
		pt[i] = inputData[i];
		i++;
	}
	sort(pt, i);
	puts("\nSorted List\n");
	for (int j = 0; j < i; j++)
	{
		puts(pt[j]);
	}
}

