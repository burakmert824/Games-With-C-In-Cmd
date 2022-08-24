#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define soldolumu matrix[kx+8][ky-1]=='#'||matrix[kx+7][ky-1]=='#'||matrix[kx+6][ky-1]=='#'||matrix[kx+5][ky-1]=='#'||matrix[kx+4][ky-1]=='#'||matrix[kx+3][ky-1]=='#'||matrix[kx+2][ky-1]=='#'||matrix[kx+1][ky-1]=='#'||  matrix[kx][ky-1]=='#' 
#define sagdolumu matrix[kx+8][ky+7]=='#'||matrix[kx+7][ky+7]=='#'||matrix[kx+6][ky+7]=='#'||matrix[kx+5][ky+7]=='#'||matrix[kx+4][ky+7]=='#'||matrix[kx+3][ky+7]=='#'||matrix[kx+2][ky+7]=='#'||matrix[kx+1][ky+7]=='#'||  matrix[kx][ky+7]=='#'                                          
#define asagidolumu matrix[kx+9][ky+3]=='#'||matrix[kx+9][ky+4]=='#'||matrix[kx+9][ky+2]=='#'
#define ustdolumu matrix[kx-1][ky+3]=='#'||matrix[kx-1][ky+4]=='#'||matrix[kx-1][ky+2]=='#'
char matrix[500][500];
int mapx=260,mapy=90;
int kx=mapx-14,ky=0,gx=0,gy=0,saysayac,saysayacc,ch=1,zipla=0,asagi=0,c=1,kontx,konty,mapyy=75,mapxx=mapx-35,e=1,level=1;
char a;
float sayac=1020;
void sifirla()
 {
 	int i,j;
 	for(i=0;i<500;i++)
			for(j=0;j<500;j++)
		matrix[i][j]=' ';
 }
void harital(){
	mapx=260;mapy=90;
	int i,j;
	sifirla();
	freopen("Harita1.txt","r",stdin);
	for(i=0;i<mapx;i++)
		{
			for(j=0;j<mapy;j++)
			{scanf("%c",&matrix[i][j]);
				if(matrix[i][j]=='-')
			matrix[i][j]=' ';
			}
			scanf("\n");
		}
		ky=0;kx=mapx-10;
		mapyy=75;mapxx=mapx-35;
	
}
void harital2()
{
	mapx=90;mapy=490;
	sifirla();
	int i,j;
	freopen("yusufunharitatempi0.txt","r",stdin);
	for(i=0;i<mapx;i++)
		{
			for(j=0;j<mapy;j++)
			{scanf("%c",&matrix[i][j]);
				if(matrix[i][j]=='-')
			matrix[i][j]=' ';
			}
			scanf("\n");
		}
		ky=0;kx=mapx-10;
		mapyy=75;mapxx=mapx-35;
	
}
int matrixx[14][25];
void kotuadam(){
	system("color F0");
	freopen("kotuadam.txt","r",stdin);
	for(int i=0; i<13; i++){
		for(int j=0; j<24; j++)
			scanf("%d",&matrix[i][j]);
		if(i!=12)
			scanf("\n");
	}
	for(int i=0; i<13; i++){
		for(int j=0; j<24; j++){
			int temp;
			printf("%c",matrix[i][j]);
		}
		printf("\n");
	}
}
void dialog(){
	printf("Evet");
	Sleep(2000);
	system("cls");
	printf("Buraya Kadar geldin.");
	Sleep(2000);
	system("cls");
	printf("Helal Olsun ama ");
	Sleep(2000);
	system("cls");
	kotuadam();
	printf("\n");
	Sleep(4000);
	system("cls");
}
void haritayazdir()
{
	int i,j;
	
	if(ky>mapyy-55 && mapyy!=mapy)
	mapyy++;
	if(ky<mapyy-55 && mapyy!=75)
	mapyy--;
	if(kx>mapxx-10 && mapxx!=mapx)
	mapxx++;
	if(kx<mapxx-30 && mapxx!=35)
	mapxx--;
	
	for(i=mapxx-35;i<mapxx;i++)
		{
			for(j=mapyy-75;j<mapyy;j++)
			printf("%c",matrix[i][j]);
			printf("\n");
		}
		printf("%d- %d",ch,saysayac);
		printf("\n");
		for(int i=0;i<100;i++)
		printf("0");
}
void hikaye(){
	char a=' ';
	freopen("Hikaye deneme.txt","r",stdin);
	while(a!='!')
	{
				scanf("%c",&a);
				if(a!='!')
					printf("%c",a);
				Sleep(100);
	}
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
				 matrix[gx+i][gy+j]=' ';
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
			if(kx==mapx-9 ||matrix[kx+i][ky+j]=='c')// oyununm bitmewsi
			{
				if(level==2 && ky<mapy-150){
					ky=0;
					kx=mapx-10;
					system("cls");
					printf("Tam bir Bekenes...");
					Sleep(2000);
				}
				else
		 		e=0;
	 		}
			 scanf("%c",&matrix[kx+i][ky+j]);
	 		if(matrix[kx+i][ky+j]!='0')
	 		matrix[kx+i][ky+j]=' ';
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
		gy=ky;gx=kx; 
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
		gy=ky;gx=kx;
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
	if(zipla<1 && kx<mapx-9)//  -Patatesler saldýrdý bu yüzden kutularýn üstünde duramýyacaðýz bunu onlara ödeticez!!!!!!!!!!!!!!!!!
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
	HWND hwnd = GetConsoleWindow();
if( hwnd != NULL ){ MoveWindow(hwnd ,350,250 ,690,550 ,TRUE); }
	harital();// BÖLÜM 1;
	while(e)
	{
    sayac-=0.3;
	figural();
	haritayazdir();
	ziplama();
	hareket();
	gx=kx;gy=ky;
	printf("\nx=%d\ny=%d\npuan=%d",kx,ky,(int)sayac);
	system("cls");
	Sleep(10);
	}
	printf("\nEnesbek:Thank you Mario but our Princess is in another castle but we have Bekenes Would you like it?");
	Sleep(4000);
	e=1;
	system("cls");
	harital2();
	level++;
	while(e)//BÖLÜM 2;
	{
    sayac-=0.3;
	figural();
	haritayazdir();
	ziplama();
	hareket();
	gx=kx;gy=ky;
	printf("\nx=%d\ny=%d\npuan=%d",kx,ky,(int)sayac);
	system("cls");
	}
	dialog();
	system("color a");
	printf("GameOver\nScore=%d",(int)sayac);
	
	
	return 0;
}

