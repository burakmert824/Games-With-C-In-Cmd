#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define mapx 50
#define mapy 75
char matrix[mapx][mapy];
int sayac=0,kx=21,ky=1,gx=0,gy=0,saysayac,saysayacc,ch=1,zipla=0,asagi=0;
char a;
void haritahazirla()
{
	int i,j;
	for(i=0;i<mapx;i++)
		{
			for(j=0;j<mapy;j++)
			matrix[i][j]='-';	
		}
		
}
void haritayazdir()
{
	int i,j;
	for(i=0;i<mapx;i++)
		{
			for(j=0;j<mapy;j++)
			printf("%c",matrix[i][j]);
			printf("\n");
		}
		printf("%d",ch);
}

void figural()
{
	if(ch==1){
		freopen("Bekleme1.txt","r",stdin);
	}
	if(ch==2){
		freopen("Sagagidis2.txt","r",stdin);
	}
	if(ch==3){
		freopen("sagagidis3.txt","r",stdin);
	}
	if(ch==4){
		freopen("solagidis4.txt","r",stdin);
	}
	if(ch==5){
		freopen("solagidis5.txt","r",stdin);
	}
	if(ch==6){
		freopen("ziplama6.txt","r",stdin);
	}
	int i,j;
	for(i=0;i<9;i++)
	 {
	 	for(j=0;j<9;j++)
	 		matrix[gx+i][gy+j]='-';
		 }	
	
	for(i=0;i<9;i++)
	 {
	 	for(j=0;j<9;j++)
	 		scanf("%c",&matrix[kx+i][ky+j]);
	 		scanf("\n");
		 }	
}
void hareket()
{
	while(kbhit()!=0)
	{
	gx=kx;gy=ky;
	saysayacc=1;
	saysayac=0;
	a=getch();
	if(a=='a')
	{
		if(ky>0)
		ky-=2;
		if(ch==4)
		ch=5;
		else
		ch=4;
		figural();
		}
	else if(a=='d')
	{
		if(ky<mapy-10)
		ky+=2;
		if(ch==2)
		{
		ch=3;
		figural();}
		else
		{
		ch=2;
		figural();
		}
		}
	else if(a=='w')
	{
		if(kx>0)
	{
	ch=6;
	figural();
	zipla=1;}
	}
	else if(a=='s')
		{
			if(kx<mapx-9)
			{
			zipla=1;
			asagi=1;
			}
			ch=6;
			figural();
		}
	}
	if(saysayacc==0)
	saysayac++;
	if(saysayac%10==9)
	{   
	    ch=1;
		figural();
	}
	saysayacc=0;
}
void ziplama()
{
	if(zipla==1||zipla==2)
	{
		if(asagi==0)
		{
		if(zipla==2)
		{
			ch=1;
			zipla=-1;
			kx-=2;
			figural();
		}
		zipla++;
		}
		else
		{
		if(zipla==2)
		{
			ch=1;
			zipla=-1;
			kx+=2;
			figural();
			asagi=0;
		}
		zipla++;		
		}	
	}
}
int main()
{
	haritahazirla();
	while(1)
	{
	figural();
	haritayazdir();
	ziplama();
	hareket();
	gx=kx;gy=ky;
	system("cls");
	}
	return 0;
}




