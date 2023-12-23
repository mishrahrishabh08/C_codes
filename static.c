#include <stdio.h>

void function(){
	int var = 1;
	static int static_var = 1;

	printf("\t[in function] The value of var  at address %p is  %d \n",&var,var);
	printf("\t[in function] The value of static_var  at address %p is %d \n",&static_var,static_var);
	var++;static_var++;

}

int main (){
	static int static_var = 1223;
	for(int i = 0;i<5;i++){
		printf("[in main ] The value of static_var at address %p is %d\n ",&static_var,static_var);
		function();
	}
	return 0;
}



