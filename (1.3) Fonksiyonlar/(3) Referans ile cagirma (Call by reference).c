#include<stdio.h>

void swap(int *x,int *y){
	
	// x = a   y = b 
	                    
	int temp; 
	
	temp = *x;   	//  temp = 20		a = 20         
	*x = *y;      	//  a = 40			b = 40         
	*y = temp;   	//  b = 20		    temp = 20       
}

int main(){
	
	int a = 20, b = 40;
	printf("a = %d b = %d\n",a,b);
	swap(&a,&b);
	printf("a = %d b = %d",a,b);
	
}
