//Tab funciones celsius y fahrenheit
#include<stdio.h>
#include<math.h>
float celsius(float c);
float fahrenheit(float F);
int main (){
	int i,j;
	printf("°C   -   °F      °F   -   °C\n");
	for(i=1;i<=100;i++){
		j=i+31;
		if(i<=9){
		printf("%d       %.3f   %d       %.3f\n",i,celsius(i),j,fahrenheit(j));
		}
		else if(i>=10 && i <=37){
			printf("%d      %.3f   %d       %.3f\n",i,celsius(i),j,fahrenheit(j));
		}
		else if(i>=38 && i<=68){
			printf("%d     %.3f   %d       %.3f\n",i,celsius(i),j,fahrenheit(j));
		}
		else if(i>=69 && i<=99){
			printf("%d     %.3f   %d      %.3f\n",i,celsius(i),j,fahrenheit(j));
		}
		else if(i==100){
			printf("%d    %.3f   %d      x%.3f\n",i,celsius(i),j,fahrenheit(j));
		}
	}
	
	return 0;
}
float celsius(float c){
	
	float f;

	return f=(c*1.8)+32;
	
}
float fahrenheit(float F){
	float C;
	return C=(F-32)/1.8;
}
