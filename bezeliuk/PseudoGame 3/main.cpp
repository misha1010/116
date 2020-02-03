#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>


int main()
{

	const int lettersCount = 20;



	char letters [lettersCount];
	int step = 0;

	time_t currentTime;
	time( &currentTime );

	srand( currentTime );


	step = 0;

	for (int i = 0; i < lettersCount; i++);
	{
		letters[i] = 'a' + rand() % (('z' - 'a') + 1);
	}

	system("cls");
	printf("\nReady?\n");
	_getch();


	printf("\t");
	for (int i = 0; i < 5; ++i)
	{
		printf(".");
		Sleep(175);
	}


	printf("\n\tGo!");
	Sleep(350);


	do
	{
		system("cls");

		printf("\n\t");
		for (int i = 0; i < lettersCount; i++)
		{
			if (i < step)
			{
				printf("%c ", 176);
			}
			else
			{
				printf("%c ", letters[i]);
			}
		}

		char inputChar = _getch();


		if (inputChar == lettersCount[step])
		{
			step++;
		}

	} while (step < lettersCount);

	system("cls");

	printf("\n\tPresss any key to continue...");

	_getch();



	return 0;
}