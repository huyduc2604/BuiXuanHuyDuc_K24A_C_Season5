#include <stdio.h>

int main (){
	int n, sum = 0;
	printf("Hay nhap mot so nguyen: ");
	scanf("%d", &n);
	for(int i = 1; i <=n; i++){
		sum = sum + i; 
	}
	
	printf("%d", sum);
	return 0;
}
