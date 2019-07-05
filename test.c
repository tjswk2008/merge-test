#include <stdio.h>
#include <unistd.h>

void base_func() {
	int a = 1;
	int *p = &a;
	printf("this is a crash %d\n", *p);
}

void branch_func_1(){
	printf("branch func1\n");
}

int main() {
	return 0;
}
