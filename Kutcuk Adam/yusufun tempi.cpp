#include <stdio.h>
#include <windows.h>
int matrixx[14][25];
void kotuadam(){
	system("color F0");
	freopen("yusufuntempi0.txt","r",stdin);
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
