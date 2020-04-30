#include<stdio.h>

void greetings(char hello[]){
	printf("\n%s",hello);
}

void toUpper(char string[]){
	printf("Making String UPPER...");
}

void toLower(char string[]){
	printf("Making String lower...");
}

int main(){
	int greet[] = "Hello World";

	greetings(greet);
}
