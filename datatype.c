#include <stdio.h>

int main(){
	char letter = 'c';
	int number = 1;
	float floatingPoint = 1.2;
	double doublePre = 1.2;
	_Bool swtich = 1;
	long longNum = 30;
	long long evenLonger = 300;
	printf("Printing info of int - \n");
	printf("number: %d\n", number);
	printf("sizeof(number): %ld\n", sizeof(number));
	printf("\n");
	printf("Printing info of char - \n");
	printf("letter: %c\n", letter);
	printf("sizeof(letter): %ld\n", sizeof(letter));
	printf("\n");
	printf("Printing info for float - \n");
	printf("floatingPoint: %f\n", floatingPoint);
	printf("sizeof(floatingPoint): %ld\n", sizeof(floatingPoint));
	printf("\n");
	printf("Printing info for double- \n");
	printf("doublePre: %.2f\n", doublePre);
	printf("sizeof(doublePre): %ld\n", sizeof(doublePre));
	printf("\n");
	printf("Printing info for boolean- \n");
	printf("doublePre: %d\n", swtich);
	printf("sizeof(doublePre): %ld\n", sizeof(swtich));
	printf("\n");
	printf("Printing info for long - \n");
	printf("longNum: %ld\n", longNum);
	printf("sizeof(longNum): %ld\n", sizeof(longNum));
	printf("\n");
	printf("Printing info for long long - \n");
	printf("evenLonger: %lld\n", evenLonger);
	printf("sizeof(evenLonger): %ld\n", sizeof(evenLonger));
	return 0;
}
