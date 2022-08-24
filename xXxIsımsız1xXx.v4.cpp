
	//x==3
	//o==4
	#include <stdio.h>
	char matrix[3][3]={{'#','#','#'},{'#','#','#'},{'#','#','#'}};
	char *a1 =&matrix[0][0]; char *a2 =&matrix[0][1]; char *a3 =&matrix[0][2];
	char *a4 =&matrix[1][0]; char *a5 =&matrix[1][1]; char *a6 =&matrix[1][2];
	char *a7 =&matrix[2][0]; char *a8 =&matrix[2][1]; char *a9 =&matrix[2][2];
	int hamle=0;
	// x mi o mu seçilebilsin.// 2 playeri düzenle//hep çaprazlara koyma//düþünme efekti//
	char r;
	int move()
	{
	//3 e tamamlama
	//satirlar
	/*1.satir*/if(*a1=='o'&& *a2=='o' && *a3=='#')*a3='o';else if(*a1=='o'&& *a3=='o' && *a2=='#')*a2='o';else if(*a3=='o'&& *a2=='o' && *a1=='#')*a1='o';
	/*2.satir*/else if(*a4=='o'&& *a5=='o' && *a6=='#')*a6='o';else if(*a4=='o'&& *a6=='o' && *a5=='#')*a5='o';else if(*a6=='o'&& *a5=='o' && *a4=='#')*a4='o';
	/*3.satir*/else if(*a7=='o'&& *a8=='o' && *a9=='#')*a9='o';else if(*a7=='o'&& *a9=='o' && *a8=='#')*a8='o';else if(*a9=='o'&& *a8=='o' && *a7=='#')*a7='o';
	//sutunlar
	/*1.sutun*/else if(*a1=='o'&& *a4=='o' && *a7=='#')*a7='o';else if(*a1=='o'&& *a7=='o' && *a4=='#')*a4='o';else if(*a7=='o'&& *a4=='o' && *a1=='#')*a1='o';
	/*2.sutun*/else if(*a2=='o'&& *a5=='o' && *a8=='#')*a8='o';else if(*a2=='o'&& *a8=='o' && *a5=='#')*a5='o';else if(*a8=='o'&& *a5=='o' && *a2=='#')*a2='o';
	/*3.sutun*/else if(*a3=='o'&& *a6=='o' && *a9=='#')*a9='o';else if(*a3=='o'&& *a9=='o' && *a6=='#')*a6='o';else if(*a9=='o'&& *a6=='o' && *a3=='#')*a3='o';
	//caprazlar
	/*1.capraz*/else if(*a1=='o'&& *a5=='o'&& *a9=='#')*a9='o';else if(*a1=='o'&& *a9=='o'&& *a5=='#')*a5='o';else if(*a9=='o'&& *a5=='o'&& *a1=='#')*a1='o';	
	/*2.capraz*/else if(*a3=='o'&& *a5=='o'&& *a7=='#')*a7='o';else if(*a3=='o'&& *a7=='o'&& *a5=='#')*a5='o';else if(*a7=='o'&& *a5=='o'&& *a3=='#')*a3='o';
	
	//3 u engelleme
	//satirlar
	/*1.satir*/else if(*a1=='x'&& *a2=='x' && *a3=='#')*a3='o';else if(*a1=='x'&& *a3=='x' && *a2=='#')*a2='o';else if(*a3=='x'&& *a2=='x' && *a1=='#')*a1='o';
	/*2.satir*/else if(*a4=='x'&& *a5=='x' && *a6=='#')*a6='o';else if(*a4=='x'&& *a6=='x' && *a5=='#')*a5='o';else if(*a6=='x'&& *a5=='x' && *a4=='#')*a4='o';
	/*3.satir*/else if(*a7=='x'&& *a8=='x' && *a9=='#')*a9='o';else if(*a7=='x'&& *a9=='x' && *a8=='#')*a8='o';else if(*a9=='x'&& *a8=='x' && *a7=='#')*a7='o';
	//sutunlar
	/*1.sutun*/else if(*a1=='x'&& *a4=='x' && *a7=='#')*a7='o';else if(*a1=='x'&& *a7=='x' && *a4=='#')*a4='o';else if(*a7=='x'&& *a4=='x' && *a1=='#')*a1='o';
	/*2.sutun*/else if(*a2=='x'&& *a5=='x' && *a8=='#')*a8='o';else if(*a2=='x'&& *a8=='x' && *a5=='#')*a5='o';else if(*a8=='x'&& *a5=='x' && *a2=='#')*a2='o';
	/*3.sutun*/else if(*a3=='x'&& *a6=='x' && *a9=='#')*a9='o';else if(*a3=='x'&& *a9=='x' && *a6=='#')*a6='o';else if(*a9=='x'&& *a6=='x' && *a3=='#')*a3='o';
	//caprazlar
	/*1.capraz*/else if(*a1=='x'&& *a5=='x'&& *a9=='#')*a9='o';else if(*a1=='x'&& *a9=='x'&& *a5=='#')*a5='o';else if(*a9=='x'&& *a5=='x'&& *a1=='#')*a1='o';	
	/*2.capraz*/else if(*a3=='x'&& *a5=='x'&& *a7=='#')*a7='o';else if(*a3=='x'&& *a7=='x'&& *a5=='#')*a5='o';else if(*a7=='x'&& *a5=='x'&& *a3=='#')*a3='o';
	//oyununu oynama
    else if(*a5=='#')*a5='o';
	else if(*a1=='#')*a1='o'; else if(*a3=='#')*a3='o'; else if(*a7=='#')*a7='o'; else if(*a9=='#')*a9='o';
	else if(*a6=='#')*a6='o'; else if(*a4=='#')*a4='o'; else if(*a2=='#')*a2='o'; else if(*a8=='#')*a8='o';
	}
	int menu()
	{
		int s;
		printf("\t------------------XoX------------------\n");
		printf("\t\t1 Oyunculu/2 Oyunculu \n\n");
		printf("Oyunucu sayisi=");
		scanf("%d",&s);printf("\n");
		if (s==1)r='B';
		else if (s==2)r='I';
		//printf("INPUT:\1.Satir => Insana karsi mi bilgisayara karsi mi (I/B).\n2.Satir => Once kutucuk numarasi, sonra (X/O).\n");	//v2 de degistirlecek!!
		printf("Nasil Oynanir?\n\n");
		printf("x y\n\n");
        printf("-x- yerine oynamak istediginiz yeri yaziniz\n\n-y-yerine oynayacaginiz sembolu yaziniz\n\n");		
		int num=1, satir, sutun;
		for(satir=0; satir<3; satir++)
			{
				for(sutun=0; sutun<3; sutun++)
				{
					printf("%d\t",num);
					num++;
				}
				printf("\n\n");
			}	
	}
	int shutdown()
	{
		char e;
		printf("Oyun Bitmistir. Yeni oyuna baslayalim mi? (E/H)\n");
		scanf("%c",&e);
		scanf("%c",&e);
		if(e=='E')
		{
			hamle=0;
			return 1;
		}
		else
			return 0;
	}
	int temizle()
	{
		int satir, sutun;
		for(satir=0; satir<3; satir++)
			{
				for(sutun=0; sutun<3; sutun++)
				{
					matrix[satir][sutun]='#';
				}
			}
		hamle=0;
	}
	int bittimi()
	{
		int satir, sutun, flag, b;
		for(satir=0; satir<3; satir++)
					
					{
						flag=0;
						for(sutun=0; sutun<3; sutun++)
						{
							if(matrix[satir][sutun]=='x' || matrix[satir][sutun]=='X')
								flag++;
							else
								if(matrix[satir][sutun]=='o')
									flag+=4;
						}
						if(flag==3)
							{
								printf("cCc---//xXx\\---cCc\n");
								temizle();
								b=shutdown();
							}
						else
							if(flag==12)
							{
								printf("cCc---//oOo\\---cCc\n");
								temizle();
								b=shutdown();
							}
					}
					//Evrensel Kazanma Durumu 2:III
					for(sutun=0; sutun<3; sutun++)
					{
						flag=0;
						for(satir=0; satir<3; satir++)
						{
							if(matrix[satir][sutun]=='x' ||matrix[satir][sutun]=='X')
								flag++;
							else
								if(matrix[satir][sutun]=='o')
									flag+=4;
						}
						if(flag==3)
							{
								printf("cCc---//xXx\\---cCc\n");
								temizle();
								b=shutdown();
							}
						else
							if(flag==12)
							{
								printf("cCc---//oOo\\---cCc\n");
								temizle();
								b=shutdown();
							}
					}
					//Evrensel Kazanma Durumu 3: 
					if(matrix[0][2]==matrix[1][1] && matrix[2][0]==matrix[1][1] && matrix[0][2]!='#')
					{
						if(matrix[0][2]=='x' ||matrix[0][2]=='X')
							printf("cCc---//xXx\\---cCc\n");
						else
							if(matrix[0][2]=='o')
								printf("cCc---//oOo\\---cCc\n");
						temizle();
						b=shutdown();
					}
					if(matrix[0][0]==matrix[1][1] && matrix[2][2]==matrix[1][1] && matrix[0][0]!='#')
					{
						if(matrix[0][0]=='x' || matrix[0][0]=='X')
							printf("cCc---//xXx\\---cCc\n");
						else
							if(matrix[0][0]=='o')
								printf("cCc---//oOo\\---cCc\n");
						temizle();
						b=shutdown();
					}
					else if(*a1!='#' && *a2!='#' && *a3!='#' && *a4!='#' && *a5!='#' && *a6!='#' && *a7!='#' && *a8!='#' && *a9!='#')
					{
						printf("Berabere! -=XOOX=-\n");
						temizle();
						b=shutdown();
					}
					return b;
					}
	int player1()
	{
		int x,y,n,c,number,flag,satir,sutun;
		
					scanf("%d %c",&n,&c);
					hamle++;
					number=1;
					flag=1;
					x=(n-1)%3;
					y=(n-1)/3;
					//kontrol
					if(matrix[y][x]!='#')
					{
					printf("\n\n Oynamaya calistiginiz yer dolu lutfen farklý bir yer secin\n");
					player1();
					return 0;
					}
					//kontrol
					
					for(satir=0; satir<3 && flag; satir++)
					{
						for(sutun=0; sutun<3 && flag; sutun++)
						{
							if(number==n && flag)
							{
								matrix[satir][sutun]=c;
								flag=0;
							}
							number++;
						}
					}
					
					for(satir=0; satir<3; satir++)
					{
						for(sutun=0; sutun<3; sutun++)
						{
							printf("%c\t",matrix[satir][sutun]);
						}
						printf("\n\n");
					}
				
	}
	goster()
	{
		int satir,sutun;
		for(satir=0; satir<3; satir++)
					{
						for(sutun=0; sutun<3; sutun++)
						{
							printf("%c\t",matrix[satir][sutun]);
						}
						printf("\n\n");
					}
	}
	int main()
	{
		int satir, sutun, number, n, flag;
		char c;
		menu();	//v2 de 
		int b=1;
		temizle();
		if(r=='B' ||r=='b')
		{
			while(b)
			{   printf("Hamle=");
				player1();
				bittimi();
				move();
				printf("\nBilgisayarýn Hamlesi:\n\n");
				goster();
				b=bittimi();
			}
			
		}
		else if(r=='I' || r=='i');
		{
			hamle=0;
			while(b)
			{
				if(hamle<9)
				{
					scanf("%d %c",&n,&c);
					hamle++;
				//	printf("c:%c n:%d\n",c,n);
					number=1;
					flag=1;
					for(satir=0; satir<3 && flag; satir++)
					{
						for(sutun=0; sutun<3 && flag; sutun++)
						{
							if(number==n && flag)
							{
								matrix[satir][sutun]=c;
								flag=0;
							}
							number++;
						}
					}
					for(satir=0; satir<3; satir++)
					{
						for(sutun=0; sutun<3; sutun++)
						{
							printf("%c\t",matrix[satir][sutun]);
						}
						printf("\n\n");
					}
					//Evrensek Kazanma Durumu 1:---
					for(satir=0; satir<3; satir++)
					{
						flag=0;
						for(sutun=0; sutun<3; sutun++)
						{
							if(matrix[satir][sutun]=='x' || matrix[satir][sutun]=='X')
								flag++;
							else
								if(matrix[satir][sutun]=='o')
									flag+=4;
						}
						if(flag==3)
							{
								printf("cCc---//xXx\\---cCc\n");
								temizle();
								b=shutdown();
							}
						else
							if(flag==12)
							{
								printf("cCc---//oOo\\---cCc\n");
								temizle();
								b=shutdown();
							}
					}
					//Evrensel Kazanma Durumu 2:III
					for(sutun=0; sutun<3; sutun++)
					{
						flag=0;
						for(satir=0; satir<3; satir++)
						{
							if(matrix[satir][sutun]=='x' ||matrix[satir][sutun]=='X')
								flag++;
							else
								if(matrix[satir][sutun]=='o')
									flag+=4;
						}
						if(flag==3)
							{
								printf("cCc---//xXx\\---cCc\n");
								temizle();
								b=shutdown();
							}
						else
							if(flag==12)
							{
								printf("cCc---//oOo\\---cCc\n");
								temizle();
								b=shutdown();
							}
					}
					//Evrensel Kazanma Durumu 3: 
					if(matrix[0][2]==matrix[1][1] && matrix[2][0]==matrix[1][1] && matrix[0][2]!='#')
					{
						if(matrix[0][2]=='x' ||matrix[0][2]=='X')
							printf("cCc---//xXx\\---cCc\n");																													//2017 by Burak Ersöz
								                                                                                                                                                //V4   by Kerim Yusuf Bek
						else
							if(matrix[0][2]=='o')
								printf("cCc---//oOo\\---cCc\n");
						temizle();
						b=shutdown();
					}
					if(matrix[0][0]==matrix[1][1] && matrix[2][2]==matrix[1][1] && matrix[0][0]!='#')
					{
						if(matrix[0][0]=='x' || matrix[0][0]=='X')
							printf("cCc---//xXx\\---cCc\n");
						else
							if(matrix[0][0]=='o')
								printf("cCc---//oOo\\---cCc\n");
						temizle();
						b=shutdown();
					}
				}
				else
				{
					printf("Berabere! -=XOOX=-\n");
					temizle();
					b=shutdown();
				}
			}
		}
		return 42;
	}
