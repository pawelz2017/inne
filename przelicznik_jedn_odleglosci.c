#include <stdio.h>


int main(){
	//1 mila to 1760 yardow
	const int mila_jard = 1760;
	//1 mila to 1.609km
	const float mila_km = 1.609;
	//
	
//	char *wybor;
	int wybor;
	
	double wejscie, wyjscie; 
	
	printf("Przelicznik jednostek odleglosci\n");
	
	printf("Podaj przeliczana odleglosc\n");
	scanf("%lf", &wejscie);
	
	printf("Podaj jednostke danych wprowadzanych (1 - km / 2 - mila / 3 - jard)\n");
	scanf("%i", &wybor);
	
	
	switch(wybor){
		case 1: 
			printf("wybrano km\n");
			
			wyjscie = wejscie / mila_km;
			printf("%lf mil\n", wyjscie);
			
			wyjscie = wyjscie * mila_jard;
			printf("%lf jard\n", wyjscie);
			
			break;
		case 2: 
			printf("wybrano mile\n");
			
			wyjscie = wejscie * mila_km;
			printf("%lf km\n", wyjscie);
			
			wyjscie = wejscie * mila_jard;
			printf("%lf jard\n", wyjscie);
			
			break;
			
		case 3: 
			printf("wybrano jardy\n");
			
			wyjscie = wejscie / mila_jard;
			printf("%lf mil\n", wyjscie);
			
			wyjscie = wyjscie * mila_km;
			printf("%lf km\n", wyjscie);
			
			break;
		
		default:
        printf("Bledny wybor\n");
        break;
	}
/*
	scanf(" %c", wybor);

	if(wybor = 'km'){
		printf("km\n");
		
	}else if(wybor = 'mila'){
		printf("mila\n");
			};
*/
	
	
	
	
	
	
	
	
return 0;	
}
