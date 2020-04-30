#include<stdio.h>

void greetings(char hello[]){
	printf("\n%s",hello);
}

int main(){
	int greet[] = "Hello World";

	greetings(greet);
}
