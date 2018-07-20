// Dynamic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
float *vector(int nl,int nh);
int *ivector(int nl,int nh);
float **matrix(int nrl,int nrh,int ncl,int nch);
int **imatrix(int nrl,int nrh,int ncl,int nch);
void free_vector(float *v,int nl,int nh);
void free_ivector(int *v,int nl,int nh);
void free_matrix(float **m,int nrl,int nrh,int ncl,int nch);
void free_imatrix(int **m,int nrl,int nrh,int ncl,int nch);


int _tmain(int argc, _TCHAR* argv[])
{
	int i,j,n;
	float *item;
	int *otherValues;
	float *value;
	int **myArray;

	printf("Enter the length of the vector\n");
	scanf("%d", &n);
	n--;
	printf("Allocate using malloc\n");

	item = (float *) malloc(n * sizeof(float));
    if (!item) printf("allocation error in malloc()");

	for (i = 0; i <= n; i++)
		item[i] = 2.345*i;

	for (i = 0; i <= n; i++)
		printf("%d - %f\n", i,item[i]);

	printf("Allocate using calloc\n");

	otherValues = (int *)calloc(n, sizeof(int));
    if (!otherValues) printf("allocation error in calloc()");

	for (i = 0; i <= n; i++)
		otherValues[i] = i;
		
	for (i = 0; i <= n; i++)
		printf("%d - %d\n", i,otherValues[i]);

	printf("Allocate using calloc\n");

	value = vector(0, n);
	
	for (i = 0; i <= n; i++)
		value[i] = 3.45*i;
		
	for (i = 0; i <= n; i++)
		printf("%d - %f\n", i,value[i]);
	
	myArray = imatrix(0,n,0,n);
	
	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
			myArray[i][j] = i*n + j;
	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
			printf("%d %d %d\n", i,j, myArray[i][j]);
	
	/* free up the allocated memory */
	free_vector(value,0, n);
	free_imatrix(myArray, 0, n, 0, n);
	printf("Bye...\n");
	system("pause");
	return 0;
}

	float *vector(int nl,int nh)
{
	float *v;

	v = (float *)calloc((unsigned) (nh-nl+1),sizeof(float));
        if (!v) printf("allocation failure in vector()");
        return v;
}

int *ivector(int nl,int nh)
{
	int *v;

	v = (int *)calloc((unsigned) (nh-nl+1),sizeof(int));
        if (!v) printf("allocation failure in ivector()");
        return v;
}

float **matrix(int nrl,int nrh,int ncl,int nch)
{
	int i;
	float **m;

	m = (float **) calloc((unsigned) (nrh - nrl + 1),sizeof(float*));
        if (!m) printf("allocation failure 1 in matrix()");

	for(i = nrl;(i <= nrh);i++)
		{
		m[i] = (float *) calloc((unsigned) (nch-ncl+1),sizeof(float));
		if (!m[i]) printf("allocation failure 2 in matrix()");
		}
	return m;
}

int **imatrix(int nrl,int nrh,int ncl,int nch)
{
        int i,**m;

        m=(int **)calloc((unsigned) (nrh-nrl+1),sizeof(int*));
        if (!m) printf("allocation failure 1 in imatrix()");

        for(i=nrl;i<=nrh;i++) 
        {
                m[i]=(int *)calloc((unsigned) (nch-ncl+1),sizeof(int));
                if (!m[i]) printf("allocation failure 2 in imatrix()");
        }
	return m;
}

void free_vector(float *v,int nl,int nh)
{
        free(v);
}

void free_ivector(int *v,int nl,int nh)
{
	free(v);
}

void free_matrix(float **m,int nrl,int nrh,int ncl,int nch)
{
	int i;

	for(i=nrh;i>=nrl;i--) free((m[i]+ncl));
	free(m+nrl);
}

void free_imatrix(int **m,int nrl,int nrh,int ncl,int nch)
{
	int i;

	for(i=nrh;i>=nrl;i--) free(m[i]+ncl);
	free(m+nrl);
}




