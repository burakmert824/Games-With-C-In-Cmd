#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define mapx 92
#define mapy 90 
#define soldolumu matrix[kx+8][ky-1]=='#'||matrix[kx+7][ky-1]=='#'||matrix[kx+6][ky-1]=='#'||matrix[kx+5][ky-1]=='#'||matrix[kx+4][ky-1]=='#'||matrix[kx+3][ky-1]=='#'||matrix[kx+2][ky-1]=='#'||matrix[kx+1][ky-1]=='#'||  matrix[kx][ky-1]=='#' 
#define sagdolumu matrix[kx+8][ky+7]=='#'||matrix[kx+7][ky+7]=='#'||matrix[kx+6][ky+7]=='#'||matrix[kx+5][ky+7]=='#'||matrix[kx+4][ky+7]=='#'||matrix[kx+3][ky+7]=='#'||matrix[kx+2][ky+7]=='#'||matrix[kx+1][ky+7]=='#'||  matrix[kx][ky+7]=='#'                                          
#define asagidolumu matrix[kx+9][ky+3]=='#'||matrix[kx+9][ky+4]=='#'||matrix[kx+9][ky+2]=='#'
#define ustdolumu matrix[kx-1][ky+3]=='#'||matrix[kx-1][ky+4]=='#'||matrix[kx-1][ky+2]=='#'
char matrix[mapx][mapy];
int kx=mapx-9,ky=0,gx=0,gy=0,saysayac,saysayacc,ch=1,zipla=0,asagi=0,c=1,kontx,konty,mapyy=75,mapxx=34,e=1;
char a;
float sayac=1020;
void harital()
{
	int i,j;
	freopen("Harita1.txt","r",stdin);
	for(i=0;i<mapx;i++)
		{
			for(j=0;j<mapy;j++)
			scanf("%c",&matrix[i][j]);
			scanf("\n");
		}
	
}
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
	
	if(ky>mapyy-20 && mapyy!=mapy)
	mapyy++;
	if(ky<mapyy-55 && mapyy!=75)
	mapyy--;
	if(kx>mapxx-10 && mapxx!=mapx)
	mapxx++;
	if(kx<mapxx-20 && mapxx!=35)
	mapxx--;
	
	for(i=mapxx-35;i<mapxx;i++)
		{
			for(j=mapyy-75;j<mapyy;j++)
			printf("%c",matrix[i][j]);
			printf("\n");
		}
		printf("%d--%d",ch,saysayac);
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
	 	for(j=0;j<7;j++)
	 		{
				if(matrix[gx+i][gy+j]=='0')
				 matrix[gx+i][gy+j]='-';
			} 
		 }	
	
	for(i=0;i<9;i++)
	 {
	 	for(j=0;j<7;j++)
	 		{
			if(matrix[kx+i][ky+j]=='#')
			kontx=1;
			else
			kontx=0;
			if(matrix[kx+i][ky+j]=='e')
	 		e=0;
	 		scanf("%c",&matrix[kx+i][ky+j]);
	 		if(kontx==1)
	 		matrix[kx+i][ky+j]='#';
	 		}
			 scanf("\n");
		 }	
}
void hareket()
{
	char b;
	while(kbhit()!=0)
	{
	gx=kx;gy=ky;
	saysayacc=1;
	saysayac=0;
	a=getch();
	while(kbhit()!=0)
	{
	b=getch();
	}
	if(a=='a'|| b=='a')
	{
		if(ky>0)
		if(!(soldolumu))
		ky-=2;
		if(ch==4)
		ch=5;
		else
		ch=4;
		figural();
		}
    if(a=='d' || b=='d')
	{
		if(ky<mapy-10)
		if(!(sagdolumu))
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
	 if(a=='w' || b=='w')
	{
		if(kx>0 && c==1)
	{
	ch=6;
	figural();
	if(!(ustdolumu))
	zipla=1;
	}
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
	c=0;
	gx=kx;
	if(zipla>=1)
	{
		if(kx<2)
		zipla=-1;
		if(zipla>1&&kx>2)
		{
			ch=1;
			if(!(ustdolumu))
			kx-=2;
			if(zipla==6)
			zipla=-1;
		}
		zipla++;
	}
	if(zipla<1 && kx<mapx-9)//---Patatesler saldýrdý bu yüzden kutularýn üstünde duramýyacaðýz bunu onlara ödeticez!!!!!!!!!!!!!!!!!
		if(matrix[kx+9][ky+4]!='#')
			if(matrix[kx+9][ky+3]!='#')
				if(matrix[kx+9][ky+2]!='#')
		kx+=1;
		if(zipla<1 && kx<mapx-9)//---Patatesler saldýrdý bu yüzden kutularýn üstünde duramýyacaðýz bunu onlara ödeticez!!!!!!!!!!!!!!!!!
		if(matrix[kx+9][ky+4]!='#')
			if(matrix[kx+9][ky+3]!='#')
				if(matrix[kx+9][ky+2]!='#')
				kx+=1;
	if(kx==mapx-9||asagidolumu)
	c=1;
	figural();
	//if(matrix[kx+8][ky+3]=='#'||matrix[kx+8][ky+4]=='#'||matrix[kx+8][ky+2]=='#')
	//kx++;
}
int main()
{

	harital();
	while(e)
	{
    sayac-=0.3;
	figural();
	haritayazdir();
	ziplama();
	hareket();
	gx=kx;gy=ky;
	printf("\n----%d----",(int)sayac);
	system("cls");
	}
	system("color a");
	printf("GameOver\nScore=%d",(int)sayac);
	Sleep(1000);
	return 0;
}

