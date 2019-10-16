#include"task5.h"
#define _CRT_SECURE_NO_WARNINGS


void split(char ***result, int *N, char *buf, char ch) {
	int i = 0;
	int k = 0;
	while (k < strlen(buf)) {
		if (*(buf + k) == ch) {
			*(N) = *(N)+1;
		}
		k++;
	}
	char*sub;
	*(N)=*(N)+1;
	int *mas = (int*)malloc(*(N) * sizeof(int));
	k = 0;
	int kol=0;
	while (k < strlen(buf)) {
		kol++;
		if (*(buf + k) == ch) {
			*(mas + i) = kol-1;
			i++;
			kol = 0;
		}
		k++;
	}
	*(mas + i) = kol;

	char** result_tmp;

	result_tmp = (char**)malloc((*N) * sizeof(char*));
	*result = result_tmp;

	for (i = 0; i < *(N); i++) {
		char* tmp = new char[*(mas + i)];
		result_tmp[i] = tmp;
	}
	int start = 0;
	int end = 0;
	int str=0;
	i = 0;
	for (str = 0; str < *(N); str++) {
		for (k = 0; k < *(mas + str); k++) {
			if(*(buf+i)==ch){
				i++;
			}
			result_tmp[str][k] = *(buf + i);
			i++;
		}
	}

}