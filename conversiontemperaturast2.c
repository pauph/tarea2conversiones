#include <stdio.h>
#include <windows.h>

#define color SetConsoleTextAttribute

int main(){
	
	HANDLE hConsole =
	GetStdHandle( STD_OUTPUT_HANDLE);
	color(hConsole,62);
	printf("\t\t\t\t\t\t\t\t Conversiones \n");
	
	
	float celsius = 18;
	float fahrenheit = 86;
	float temperaturaFahrenheit = (9/5.0)*celsius +32;
	float temperaturaCelsius = (fahrenheit -32.0)*(5.0/9.0);
	
	color(hConsole,15);
	printf("\n\n\t\t\t\tTemperatura Celsius:");
	
	color(hConsole,14);
	printf(" %f%c", celsius, 167);
	
	color(hConsole,12);
	printf("\t%c", 175);
	
	color(hConsole,15);
	printf("\tTemperatura Celsius a Fahrenheit:");
	
	color(hConsole,14);
	printf(" %f%c" , temperaturaFahrenheit,167);
	
	color(hConsole,15);
	printf("\n\n\t\t\t\tTemperatura Fahrenheit:");
	
	color(hConsole,14);
	printf(" %f%c", fahrenheit, 167); 
	
	color(hConsole,12);
	printf("\t%c", 175);
	
	color(hConsole,15);
	printf("\tTemperatura Fahrenheit a Celius:");
	
	color(hConsole,14);
	printf(" %f%c\n" , temperaturaCelsius,167);
	
	color(hConsole,15);
	
	return 0;
	
}
