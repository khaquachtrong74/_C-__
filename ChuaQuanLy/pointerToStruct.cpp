#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct rectangle{
	int width;
	int height;
};

int main(){
	rectangle *p;
	// malloc will return void so I need to type pressing to struct type
	p = (struct rectangle *)malloc(sizeof(struct rectangle));
	p->height = 10;
	p->width  = 12;
	printf("%d,%d", p->height, p->width);
	free(p);// It similar delete in cpp
	return 0;
}
