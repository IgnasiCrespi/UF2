#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#endif

struct address{
	char street[100];
	char city[50];
	char state[20];
	char postalCode[5];
};

struct office{
	int id;
	char name[50];
	char cto[50];
	int workers;
	struct address addr;
};
int validate();
void modifyData(struct office *, int);
void printData(struct office *, int);

