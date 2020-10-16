/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>
//comment

void negsqr(int n)  {
	n=-1*n;
	printf("NEG: Sqrt of %d is %fi\n",n,sqrt(n));
	printf("NEG: End of program. Exiting\n");
	return;
}
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("NEG: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input<0)
	{
		//printf("not a valid number\n");
		//printf("End of program. Exiting");
		negsqr(input);		
		return(0);
	}
	printf("NEG: Sqrt of %d is %f\n",input,sqrt(input));
	printf("NEG: End of program. Exiting");
	return(0);

} // end main
