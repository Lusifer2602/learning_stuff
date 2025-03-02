#include <stdio.h>
int main() {
	
	int a=10, b=20;
	int sum=a+b;
	printf("%d\n", sum); //integer type function's sample
	
	char str[]="Hello, World!\n"; /*char is the data type for storing characters.
[] means it’s an array (a collection of characters), and the size is automatically set to fit the string.*/
	printf("%s", str);// names given to variables, functions, and other user-defined items are called Identifiers.
	
	//constants are for fized valued items, for eg;
	const int max_value=100;
	printf("%d\n", max_value);
	return 0;
}
