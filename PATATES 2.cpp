#include <stdio.h>
#include<conio.h>
#include<windows.h>
char matrix[21][21];
int ax=20,ay=20;
void adam();
int seviye;
int puan=0;
int temizle()
{int i,i1;
	for(i=0;i<20;i++)
   {for (i1=0;i1<20;i1++)
   if(matrix[i][i1]!=3|| matrix[i][i1]!='A')matrix[i][i1]=178;
   }	
}
int x,y,b=1;
void adam()
{
	//matrix[ay][ax]=178;
	if(x>ax)ax++;
	else if(ax>x)ax--;
	if(ay<y)ay++;
	else if(ay>y)ay--;
	matrix[ay][ax]='A';
}
void adam2()
{
	matrix[ay][ax]=178;
	if(x>ax)ax++;
	else if(ax>x)ax--;
	if(ay<y)ay++;
	else if(ay>y)ay--;
	matrix[ay][ax]='A';
}
int main( )
{ 
	int rakip;
	printf("Zorluk seviyesini giriniz (0<x<100)");
	scanf("%d",&seviye);
	printf("Rakibinizi secin(1-2))");
	scanf("%d",&rakip);
	temizle();
	x=1;y=1;int q=0;
	int i,i1,c=1,b=0;
	char a;
	system("color 0c");
	while(c)
	{
 while (kbhit()!=0)
 {	
 	matrix[y][x]=178;
 	a=getch();
 	if(a=='a'){
 		if (x!=0)x--;
	 }
	 	if(a=='d'){
 		if (x!=19)x++;
	 }
	 if(a=='w'){
 		if (y!=0)y--;
	 }
	 	if(a=='s'){
 		if (y!=19)y++;
	 }	
	 if( matrix[y][x]=='A')q=1;
	 matrix[y][x]=3;
 }
	if(b==seviye && rakip==1){
		adam();
		b=1;
	}
	if(b==seviye && rakip==2){
		adam2();
		b=1;
	}
	
  for(i=0;i<20;i++)
   {for (i1=0;i1<20;i1++)
   		printf("%c ",matrix[i][i1]);
   		printf("\n");
   }
   Sleep(50);
  system("cls");
	b++;
	puan++;
	if(q==1)
   {
   	printf("PATATES PUANIN = %d",puan*(101-seviye));
   	c=0;
   }
   else if (ax==x && ay==y){
   	printf("PATATES PUANIN = %d",puan*(101-seviye));
   	c=0;
   }
 	}
 	while(getch()!=42)
 	{
 		
	 }
	return 0;
}

