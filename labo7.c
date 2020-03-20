

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAIL 12
#pragma warning(disable :4996)

int main()
{
	FILE* fp;
	srand((unsigned)time(NULL));
	int vect[TAIL];
	char aff;
	for (int i = 0; i < TAIL; i++)
	{
		vect[i] = rand()%101;
	}
	fp=fopen("vect.csv", "w");
	fprintf(fp, "Vecteur\n");
	for (int i = 0; i < TAIL; i++)
	{
		fprintf(fp, "%d;",vect[i]);
	}
	fprintf(fp, "\n \n moy = ;=moyenne(A2:L2)");
	
	fclose(fp);

	fp = fopen("vect.csv", "r");
	
	do
	{
		aff = fgetc(fp);
		printf("%c", aff);
	} while (aff != EOF);
	
	fclose(fp);
}


