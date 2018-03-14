// this file contains function definition of output_result()
#include "score.h"
#include<stdio.h>

void output_results(const int m[],const int stat[]){
	int i;
	printf("Here are the marks: ");
	for(i=0; i<MAX && m[i] != SENTINEL; i++)
		printf("%4d",m[i]);
	printf("\n Here are the statistics: \n");
	for(i=0; i<6; i++)
		printf("Mark %d: %d hits\n", i, stat[i]);
}
