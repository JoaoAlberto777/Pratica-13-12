#include <stdio.h>

#define Q '#'
	void parede(int X)
	{
		for(int i=0; i < X; ++i){
			printf("%c", Q);
		}
		printf("\n");
	}

	void casa(int h, int t = 6)
	{
		for(int X = 0; X < t; X++){
			parede(h);
		}
		printf("\n");
	} 
	
	int main (){
		casa(3,2);
		casa(9);
		casa(15);
		casa(9);
		casa(25,15);
		return 0;
	}
