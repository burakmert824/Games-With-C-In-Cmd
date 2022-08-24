#include <stdio.h>
char matrix[9][9];
int main(){
	freopen("Bekleme1.txt","r",stdin);
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++)
			scanf("%c",&matrix[i][j]);
		scanf("\n");
	}

	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++)
			printf("%c",matrix[i][j]);
		printf("\n");
	}
}
