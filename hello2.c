#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *ptr;
	ptr = malloc(sizeof(int));
	scanf("%d", ptr);

	printf("%d", ptr);
	free(ptr);
	return 0;
}
