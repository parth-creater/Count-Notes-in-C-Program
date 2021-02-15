#include <stdio.h>
 
int main()
{
	int Amount;
	int Note2000, Note500, Note200, Note100, Note50, Note20, Note10, Note5, Note2, Note1;
	Note2000 = Note500 = Note200 = Note100 = Note50 = Note20 = Note10 = Note5 = Note2 = Note1 = 0;
	clrscr();
	printf("\n Please Enter the Amount = ");
	scanf("%d", &Amount);

	if (Amount >= 2000)
	{
		Note2000 = Amount / 2000;
		Amount = Amount - (Note2000 * 2000);
	}
	if (Amount >= 500)
	{
		Note500 = Amount / 500;
		Amount = Amount - (Note500 * 500);
	}
	if (Amount >= 200)
	{
		Note200 = Amount / 200;
		Amount = Amount - (Note200 * 200);
	}
	if (Amount >= 100)
	{
		Note100 = Amount / 100;
		Amount = Amount - (Note100 * 100);
	}
	if (Amount >= 50)
	{
		Note50 = Amount / 50;
		Amount = Amount - (Note50 * 50);
	}
	if (Amount >= 20)
	{
		Note20 = Amount / 20;
		Amount = Amount - (Note20 * 20);
	}
	if (Amount >= 10)
	{
		Note10 = Amount / 10;
		Amount = Amount - (Note10 * 10);
	}
	if (Amount >= 5)
	{
		Note5 = Amount / 5;
		Amount = Amount - (Note5 * 5);
	}
	if (Amount >= 2)
	{
		Note2 = Amount / 2;
		Amount = Amount - (Note2 * 2);
	}
	if (Amount >= 1)
	{
		Note1 = Amount;
	}
	printf("\n Total Number of Notes Presenet in the entered Amount is: \n");
	printf("\n 2000 Notes = %d", Note2000);
	printf("\n 500 Notes  =  %d", Note500);
	printf("\n 200 Notes = %d", Note200);
	printf("\n 100 Notes  =  %d", Note100);
	printf("\n 50 Notes  =  %d", Note50);
	printf("\n 20 Notes  =  %d", Note20);
	printf("\n 10 Notes  =  %d", Note10);
	printf("\n 5 Notes  =  %d", Note5);
	printf("\n 2 Notes  =  %d", Note2);
	printf("\n 1 Note  =  %d", Note1);
	getch();
	return 0;
}