#include <iostream>
int main(void) {
int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
int n = sizeof(vector) / sizeof(vector[0]);
int *newvec;
newvec=vector;
int value=1000;
for(int i=0;i<n;i++){
	if(*newvec<value){
		value=*newvec;
	}
		newvec++;
}
std::cout<<value;
return 0;
}

