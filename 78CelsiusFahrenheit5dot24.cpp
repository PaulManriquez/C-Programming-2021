//Tab funciones celsius y fahrenheit
#include<stdio.h>
#include<math.h>
float celsius(float c);
int main (){
	int i;
	printf("°C   -   °F\n");
	for(i=1;i<=100;i++){
		if (i<=9){
		printf("%d       %.3f\n",i,celsius(i));
		}
		if(i>=10 && i<=99){
			printf("%d      %.3f\n",i,celsius(i));
		}
		else if(i==100) {
			printf("%d     %.3f\n",i,celsius(i));
		}
	}
	
	return 0;
}
float celsius(float c){
	
	float f;

	return f=(c*1.8)+32;
	
}
