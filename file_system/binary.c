#include<stdio.h>
#include<stdlib.h>
int main() {
	File* bptr;
	bptr = fopen("req.bin", "wb+");
	int m = 31;
	fwrite(&m, sizeof(m), 1, bptr);

	int out;
	fread(&out, sizeof(out), 1, bptr);
	printf("%d", out);
	return 0;
}