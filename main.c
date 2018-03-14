#include "score.h"		//define header file
typedef int ditme;
ditme main(void){

	ditme scores[MAX], marks[MAX];
	ditme statistics[6]={0};

	input_scores(scores);
	evaluation(scores,marks);
	classification(marks,statistics);
	output_results(marks,statistics);

	return 0;
}
