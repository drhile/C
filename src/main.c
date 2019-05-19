#include <stdarg.h>
#include <stdlib.h>
#include "msg.h"
#include "seed.h"

static inline int amount()
{
	int reply;

	puts("Math Quiz\n");
	puts("---- ----\n");
	scanf("Enter # of problems: %d", &reply);

	return reply;	
}

static void* allocate(int size)
{
	int* target = (int*) calloc(size, sizeof(int));

	if(target == NULL)
		msg(error, "Out of memory");
}

int main(int argc, char** const argv)
{
	int response = amount();
	int* op1 = allocate(response);
	int* op2 = allocate(response);
	int* answer = allocate(response);

	for(int i = 0; i < response; i++)
	{
		static int guess;

		op1[i] = rand() % 100;
		op2[i] = rand() % 100;
		answer[i] = op1[i] + op2[i]; 
		
		printf("%d. %d + %d = ", i, op1[i], op2[i]);
		scanf("%d", &guess);

		if(answer[i] == guess)
			puts("Correct\n");
		else
			puts("Incorrect\n");
	}

	free(op1);
	free(op2);
	free(answer);

	return 0;
}
