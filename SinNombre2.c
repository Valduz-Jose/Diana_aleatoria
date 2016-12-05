#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

void imprimir(int mapa[7][7]);
int main(){
	int diana[7][7]={
	{176,176,176,176,176,176,176},
	{176,177,177,177,177,177,176},
	{176,177,178,178,178,177,176},
	{176,177,178,219,178,177,176},
	{176,177,178,178,178,177,176},
	{176,177,177,177,177,177,176},
	{176,176,176,176,176,176,176},
	};
int fila=0,columna=0;
srand(time(NULL));
int f;
	for(f=0;f<50;f++){
columna=son();	
fila=will();
	system("color 0F");
	imprimir(diana);
	system("cls");
	printf("%d,%d",fila,columna);
	diana[fila][columna];

	if(diana[fila][columna]==219){
		printf("\tDio en el Blanco");
		printf("\n\n\tEsta a (0) distancia");
	}
	if(diana[fila][columna]==178){
		printf("\tUFF, estuvo Cerca");
		printf("\n\n\tEsta a (1) distancia");
	}
	if(diana[fila][columna]==177){
		printf("\tNi muy muy, ni tan tan");
		printf("\n\n\tEsta a (2) distancia");
	}
	if(diana[fila][columna]==176){
		printf("\tWTF?? a donde tiras?");
		printf("\n\n\tEsta a (3) distancia");
	}
	if(diana[fila][columna]==2){
		printf("\n\tRepitio tiro");
	}
	
	diana[fila][columna]=2;
	imprimir(diana);
	
	Sleep(1500);
}
	
}
void imprimir(int mapa[7][7]){
	int q=0,w=0;
	
	for(q=0;q<7;q++){
		printf("\n\t\t\t\t");
		for(w=0;w<7;w++){
			printf("%c",mapa[q][w]);
		}
	}
}
int will(){
int rand1;
rand1=rand()%7;
return rand1;
}
int son(){
	int rand2;
rand2=rand()%7;
return rand2;
}

	

