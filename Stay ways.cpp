#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define limit 20
char harita[limit][limit];
char menu[2][6]={"OYNA ","CIK  "};
char secim;
int ax=1,ay=1,bx=18,by=18,aax,aay,aby,abx,c=0,gaax,gaay,gabx,gaby,canb=5,cana=5,r=0,z=1,sayac=1,k=0,secimx=1;
int ayon=1,byon=2,secimsayac=1,patates=1;//yukarý 1 aþaðý 2 sað 3 sol 4
void menux()
{
	int i,j;
	while(secimx)
	{
	printf("    PATATES YILDIZI\n\n\n");
	for(i=0;i<2;i++)
		{
		printf("          ");
		for(j=0;j<6;j++)
			printf("%c",menu[i][j]);
			printf("\n          ----\n");
		}	
	while(kbhit()!=0)
	{
	   	secim=getch();
	   	if(secim=='w')
	   	{
	   		menu[0][4]='<';
	   		menu[0][5]='<';
	   		menu[1][4]=' ';
	   		menu[1][5]=' ';
	   		secimsayac=1;
		   }
		   if(secim=='s')
	   	{
	   		menu[1][4]='<';
	   		menu[1][5]='<';
	   		menu[0][4]=' ';
	   		menu[0][5]=' ';
	   		secimsayac=2;
		}
		   if(secim==' ')
			{
				if(secimsayac==1)
					{
						secimx=0;
					}
				else
				{
					secimx=0;
					patates=0;
				}
			}
	}
		system("cls");
	}
}
void harital(){
	freopen("i.txt","r",stdin);
	int i,j;
	for(i=0; i<limit; i++){
		for(j=0; j<limit; j++)
			scanf("%c",&harita[i][j]);
		scanf("\n");
	}
}
void haritayazdir()
{	
	int i,j;
	for(i=0; i<limit; i++){
		for(j=0; j<limit; j++)
			printf("%c ",harita[i][j]);
			printf("\n");
			}
	printf("•-");for(i=0;i<cana;i++)printf("%c",3);
	printf("\t");printf("0-");for(i=0;i<canb;i++)printf("%c",3);
	printf("\n%d",sayac);
			system("cls");
	harita[bx][by]='0';
	harita[ax][ay]='•';
}
void atesa()
{
	if(aax==bx&&aay==by)
 	{
 		c=0;
 		canb--;
 		harita[aax][aay]=9;
 		z=1;
 	}
	if(ayon==1)
	{
	if(harita[aax-1][aay]!='#')
	{
		gaax=aax;
		aax--;
		harita[aax][aay]='.';
		harita[gaax][aay]=' ';
	}
	else 
		{
			c=0;
			harita[aax][aay]=' ';
		}
 	}
 		if(ayon==2)
	{
	 if(harita[aax+1][aay]!='#')
	{
		gaax=aax;
		aax++;
		harita[aax][aay]='.';
		harita[gaax][aay]=' ';
	}
		else 
		{
			c=0;
			harita[aax][aay]=' ';
		}
 	}
 		if(ayon==3)
	{
	if(harita[aax][aay+1]!='#')
	{
		gaay=aay;
		aay++;
		harita[aax][aay]='.';
		harita[aax][gaay]=' ';
	}
	else 
		{
			c=0;
			harita[aax][aay]=' ';
		}
 	}
 		if(ayon==4)
	{
	if(harita[aax][aay-1]!='#')
	{
		gaay=aay;
		aay--;
		harita[aax][aay]='.';
		harita[aax][gaay]=' ';
	}
	else 
		{
			c=0;
			harita[aax][aay]=' ';
		}
 	}
 		if(z==1)
		{
		harita[aax][aay]=' ';
 		z--;
		}
 	
	
}
void atesb()
{
	if(abx==ax&&aby==ay)
 	{
 		r=0;
 		cana--;
 		harita[abx][aby]=7;
 		k=1;
 	}
	if(byon==1)
	{
	if(harita[abx-1][aby]!='#')
	{
		gabx=abx;
		abx--;
		harita[abx][aby]='.';
		harita[gabx][aby]=' ';
	}
	else 
		{
			r=0;
			harita[abx][aby]=' ';
		}
 	}
 		if(byon==2)
	{
	 if(harita[abx+1][aby]!='#')
	{
		gabx=abx;
		abx++;
		harita[abx][aby]='.';
		harita[gabx][aby]=' ';
	}
		else 
		{
			r=0;
			harita[abx][aby]=' ';
		}
 	}
 		if(byon==3)
	{
	if(harita[abx][aby+1]!='#')
	{
		gaby=aby;
		aby++;
		harita[abx][aby]='.';
		harita[abx][gaby]=' ';
	}
	else 
		{
			r=0;
			harita[abx][aby]=' ';
		}
 	}
 		if(byon==4)
	{
	if(harita[abx][aby-1]!='#')
	{
		gaby=aby;
		aby--;
		harita[abx][aby]='.';
		harita[abx][gaby]=' ';
	}
	else 
		{
			r=0;
			harita[abx][aby]=' ';
		}
		if(k==1)
		{
		harita[abx][aby]=' ';
 		k--;
		}
	 	}
 	
	
}
void karakterhareket()
{
	char a,b;int gax=ax,gay=ay,gbx=bx,gby=by;//gay=gecici ay
	while(kbhit()!=0)
	{
	b=' ';
	a=getch();
	while(kbhit()!=0)
	{
		b=getch();
	}
	if(a=='w'||b=='w')//Char a
		{
		if(harita[ax-1][ay]!='#')	
			ax--;
			ayon=1;
		}
		if(a=='e'||b=='e')//Char a
		{
		c=1;
		aax=ax;aay=ay;
		}
	if(a=='a'||b=='a')//Char a
		{
		if(harita[ax][ay-1]!='#')	
			ay--;
			ayon=4;
		}
	if(a=='d'||b=='d')//Char a
		{
		if(harita[ax][ay+1]!='#')	
			ay++;
			ayon=3;
		}
	if(a=='s'||b=='s')//Char a
		{
		if(harita[ax+1][ay]!='#')	
			ax++;
			ayon=2;
		}
	if(a=='5'||b=='5')//Char b
		{
		if(harita[bx+1][by]!='#')	
			bx++;
			byon=2;
		}
	if(a=='9'||b=='9')//Char b
		{
		r=1;
		abx=bx;aby=by;
		}
	if(a=='6'||b=='6')//Char b
		{
		if(harita[bx][by+1]!='#')	
			by++;
			byon=3;
		}
	if(a=='4'||b=='4')//Char b
		{
		if(harita[bx][by-1]!='#')	
			by--;
			byon=4;
		}	
	if(a=='8'||b=='8')//char b
		{
		if(harita[bx-1][by]!='#')	
			bx--;
			byon=1;
		}
		harita[gax][gay]=' ';
		harita[gbx][gby]=' ';
	}
}
int main()
{
	
	HWND hwnd = GetConsoleWindow();
if( hwnd != NULL ){ MoveWindow(hwnd ,475,300 ,340,320 ,TRUE); }
	harital();
	system("color 0a");
	menux();
	while(patates)
	{
		if(sayac==100)
		sayac=1;
		else sayac++;
		haritayazdir();
		karakterhareket();
		if(c==1)
		atesa();
		if(r==1)
		atesb();
		if(canb==0||cana==0)
		patates=0;
	}
	system("cls");
	sayac=0;
	while(sayac!=600000000)
	{
		if(canb==0)
		{
		printf("-•-Kazandi");
		canb=1;
		}
		if(cana==0)
		{
		printf("-0-Kazandi");
		cana=1;
		}
		sayac++;
	}
	printf("\nxXx---BEKENES L.T.D S.T.I A. S---xXx");
	return 0;
}
