#include <stdio.h>
int sum(int *ptr){
	int s = 0;
	s = s+*ptr;
	return s;
}
int main(){
sum(0);
return 0;
}
