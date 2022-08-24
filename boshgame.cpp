#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
char matrix[100][100];
int x=19,y=10,flo=50,ax=1,ay,gax=100,c,gx,gy,fire=18,puan=0,q=0,f=1;
int sayac=0,sayaca=0;
void ates();
void menu()
{
	for(int i=0;i<20;i++){
	for(int i1=0;i1<21;i1++)
			matrix[i][i1] = ' ';
	}
	
	int op=1,ko,flok=0,i,i1;
while (op)
{
while(kbhit()!=0)
{
	ko=getch();
if(ko=='w')
	{
	if(flok!=0)
	flok--;
	
	}
if(ko=='s')
	{
	if(flok!=1)
	flok++;

	}
if(ko=='d')
{
	if(flok==1)
	{
		op=0;
		f=0;
	}
	if(flok==0)
	{
		op=0;
		f=1;
	}
}
}	
if(flok==1)
	printf("   xxxxxGamexxxxxx\n\tPlay\n\tExit<");
if(flok==0)
printf("   xxxxxGamexxxxxx\n\tPlay<\n\tExit");
system("cls");	
}	
}
void karhareket()
{	int a;
	gx=x;gy=y;
	while(kbhit()!=0)
	{
		a=getch();
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																	if(a==42)	puan=50;
		if(a=='d')
		{
			if(y<19)
			y++;
		}
		if(a=='a')
		{
			if(y>1)
			y--;
		}
		if(a==' ')
			{
			if(ax==1)
			{
			c=0;
			q=1;}
			}	
	}
	matrix[gx][gy]=' ';
	matrix[x][y]='W';
}
void ates()
{	

	if (c==0)
	{ax=x-1;ay=y;c++;}
	gax=ax;
	matrix[gax][ay]=' ';
	if(ax>1)ax--;
	if(matrix[ax][ay]=='*'){
	matrix[ax][ay]='1' ;
	puan++;
	}
	else matrix[ax][ay]='.';
	
	if (ax==1)matrix[1][ay]=' ';
}
void haritayazdir()
{
	int i,i1,a;

	for(i=0;i<20;i++)
	matrix[i][20]='|';
	for(i=0;i<20;i++)
	matrix[i][0]='|';
	for(i=0;i<20;i++)
	{for(i1=0;i1<21;i1++)
		printf("%c",matrix[i][i1]);
		printf("\n");
		}
	if(sayac==3)
	{	
		a=rand()%20;
		matrix[2][a]='*';
	}
	sayac++;
	if(sayac==30)
		sayac=1;
		matrix[21][1]=sayac;
		matrix[21][19]=puan;
		printf("\n%d\t\tpuan=%d",matrix[21][1],matrix[21][19]);
}
int main()
{		
	system("color F");
	menu();
	if(f==0)
	return 0;
	while(f)
{	

	haritayazdir();
	karhareket();
	if(q!=0)
	{
	if(sayac%1==0)
		{
		ates();
		if(q==20)
		q=0;
		}
	}
	system("cls");
	if(puan==flo)
	f=0;
}

printf("Y ");
Sleep(500);
printf("O ");
Sleep(700);
printf("U ");
Sleep(700);
printf(" ");
printf("B ");
Sleep(700);
printf("E ");
Sleep(700);
printf("K ");
Sleep(700);
printf("E ");
Sleep(700);
printf("N ");
Sleep(700);
printf("E ");
Sleep(700);
printf("S ");
Sleep(700);
printf(". ");
Sleep(700);
printf(". ");
Sleep(700);
printf(". ");
Sleep(700);
printf("Y ");
Sleep(700);
printf("O ");
Sleep(700);
printf("U ");
Sleep(700);
printf(" ");
Sleep(700);
printf("C ");
Sleep(700);
printf("O ");
Sleep(700);
printf("U ");
Sleep(700);
printf("L ");
Sleep(700);
printf("D ");
Sleep(700);
printf(" ");
Sleep(700);
printf("J ");
Sleep(700);
printf("U ");
Sleep(700);
printf("S ");
Sleep(700);
printf("T ");
Sleep(700);
printf(" ");
Sleep(700);
printf("P ");
Sleep(700);
printf("R ");
Sleep(700);
printf("E ");
Sleep(700);
printf("S ");
Sleep(700);
printf("S ");
Sleep(700);
printf(" ");
printf("T ");
Sleep(700);
printf("H ");
Sleep(700);
printf("E ");
Sleep(700);
system("cls");
printf("* ");
printf(":)");
Sleep(200);
system("cls");
printf("EVET! EVEEET! BOSU KAZANDINIZ !!!!!!!!!!!!!!!!!!!!!!!!!!!!");
Sleep(5000);
system("cls");
system("start adsiz.JPG");
system("exit");
//system("C:\Documents and Settings\IFLB01\Desktop>start adsiz.JPG");
	return 0;
}
