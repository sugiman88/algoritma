#include <stdio.h>
#include <stdbool.h>

int main (){
	
	bool x = true;
	bool y = false;
	bool z = true;
	
	
	printf("%d \n", (x && y) || z);
	printf("%d \n", x && y || z);
	printf("%d \n", !x && !z);
	printf("%d \n", !x && !y || !z);
	
	return 0;
	
}