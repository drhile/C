#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int iRandomNum = 0;
	srand(time(NULL));
	iRandomNum = (rand() % 4) + 1;

	system("clear");
	printf("\n(Mis)Fortune Cookie\n");

	switch (iRandomNum) {
		case 1:
			printf("\nYou will be shot to death today.\n");
			break;
		case 2:
			printf("\nYou will drown in a nearby lake.\n");
			break;
		case 3:
			printf("\nYou will lose all of your money.\n");
			break;
		case 4:
			printf("\nYou have AIDS.\n");
			break;
		}

	printf("\nYour Unlucky Lotto Numbers: ");
	printf("%d ", (rand() % 49) + 1);
	printf("%d ", (rand() % 49) + 1);
	printf("%d ", (rand() % 49) + 1);
	printf("%d ", (rand() % 49) + 1);
	printf("%d ", (rand() % 49) + 1);
	printf("%d\n", (rand() % 49) + 1);
	return 0;
}
