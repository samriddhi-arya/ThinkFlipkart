#include<stdio.h>
#include<math.h>

int sum(int x,int){
  return (x+y);
}

//Function added in testing branch
int mul(int x,int y){
	return x*y;
}

//Following is Added in testing branch
int div(int x,int y){
	if(y != 0){
		return (x/y);
	}
	else{

		printf("Error");
	}
}

