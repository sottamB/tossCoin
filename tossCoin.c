#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){


	int heads = 0;
	int tails = 0;

	int random = time(0);
	srand(random);

	for(int i = 0; i < 10; i++){
		
		
		int toss = rand() % 2;



		if(toss == 0){
			printf("Heads!\n");
			heads++;
		}else{
			printf("Tails!\n");
			tails++;
		}

	}

	printf("\nHeads: %d\n", heads);
	printf("\nTails: %d\n", tails);


	return 0;



}