#include <stdio.h>
#include <windows.h>
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
int main()
{
	hikaye();
	
	
	return 0;
}
