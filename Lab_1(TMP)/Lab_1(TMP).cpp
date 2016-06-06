// LAB1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
	FILE *pF1, *pF2;	
	bool pr;
	char file1[50] = "file1";
	char file2[50] = "file2";
	char s1[256], s2[256];

	FILE *pFile1, *pFile2;
	fopen_s(&pFile1, "file1.txt", "r");
	if (pFile1 == 0)
	{
		printf("Error!! File1 not found. ");
		system("pause");
		return 0;
	}
	fopen_s(&pFile2, "file2.txt", "r");
	if (pFile2 == 0)
	{
		printf("Error!! File2 not found. ");
		system("pause");
		return 0;
	}
	printf("The strings that differ:\n");
	while (!feof(pFile1))
	{
		fgets(s1, 256, pFile1);
		pr = true;
		while (!feof(pFile2))
		{
			fgets(s2, 256, pFile2);
			if (strcmp(s1, s2) == 0) pr = false;
		}
		if (pr) printf("%s : %s\n", file1, s1);
		rewind(pFile2);
	}
	rewind(pFile1);
	rewind(pFile2);
	printf("\n");
	while (!feof(pFile2))
	{
		fgets(s1, 256, pFile2);
		pr = true;
		while (!feof(pFile1))
		{
			fgets(s2, 256, pFile1);
			if (strcmp(s1, s2) == 0) pr = false;
		}
		if (pr) printf("%s : %s\n", file2, s1);
		rewind(pFile1);
	}
	fclose(pFile1);
	fclose(pFile2);
	system("pause");
}

