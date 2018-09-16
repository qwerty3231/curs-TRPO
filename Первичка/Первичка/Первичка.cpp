#include <stdafx.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

void game() {
	srand(time(NULL));
	char c1, c2;
	float z = -1;
	printf("Ready?");
	_getch();
	system("cls");
	time_t t0 = time(0);
	do {
		c1 = rand() % 26 + 97;
		printf("%c", c1, c1);
		c2 = _getch();
		system("CLS");
		z++;
	} while (c1 == c2);
	time_t t1 = time(0);

	float time_in_seconds = difftime(t1, t0);
	float simsec = (z / time_in_seconds);
	float score = simsec*z*25;

	printf("sim/sec = %.2f\n", simsec);
	printf("Score = %.2f\n", score);

}

int main() {
	char sim;
repeat:;
	system("cls");
	printf("1.Start""\n"
		"2.Records""\n"
		"3.Exit""\n");
	sim = _getch();
	switch (sim) {
	case '1':
		game();
		_getch();
		goto repeat;
		break;
	case '2':
		system("CLS");
		printf("\nin developing\n'");
		_getch();
		goto repeat;
		break;
	case '3':
		system("cls");
		printf("\nGood bye\n");
		return 0;
		break;
	default:
		goto repeat;
		break;
	}

	system("PAUSE");
}