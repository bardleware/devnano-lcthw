/*

	Create a quiz application that ask you 10 questions.
	After completing the 10 questions it will give you a score
	(10/10) your percentage ( 100% ) and a letter grade (A,B,C,D,F).
	
*/

#include <stdio.h>

void processResponse(char letter[], int arr[], char correct, int idx)
{
	if(letter[0] == correct){
		arr[idx] = 1;
	}
	arr[idx] = 0;
}




int main()
{
	// char name[100];
	printf("Welcome to THE ACHRONYM QUIZ!\n");

	int responses[10];
	char response[1];
	//question 1
	printf("What does \"DOT\" mean?\n");
	printf("    A) Doing Other Things\n");
	printf("    B) Department of Transportation\n");
	printf("    C) Don't organize Treaties\n");
	printf("    D) Destroying original tricksters\n");
	printf("Response: ");
	scanf("%s", response);

	processResponse(response, responses,'B' , 0);



	printf("\n");
	printf("%d", responses[0]);
	printf("\n");
	
	//question 1
	printf("What does \"DOT\" mean?\n");
	printf("    A) Doing Other Things\n");
	printf("    B) Department of Transportation\n");
	printf("    C) Don't organize Treaties\n");
	printf("    D) Destroying original tricksters\n");

	
	
	return 0;
}



