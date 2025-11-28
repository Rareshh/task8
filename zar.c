#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	srand(time(NULL));

	int zar1 = rand() % 6 + 1;
	int zar2 = rand() % 6 + 1;

	if (zar2 > zar1) {
		int tmp = zar2;
		zar2 = zar1;
		zar1 = tmp;
	}

	if (zar1 == 6 && zar2 == 6) {
		printf("Dau cu zaru 6 6 ca mine nu se mai naste\n");
	}else if (zar1 == 6 && zar2 == 5) {
		printf("Dau cu zaru 6 5 n-am nevoie de servici\n");
	}else {
		printf("Dau cu zaru %d %d\n", zar1, zar2);
	}


	return 0;
}
