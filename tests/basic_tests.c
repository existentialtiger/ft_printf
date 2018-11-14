#include <stdio.h>
#include <limits.h>

int		main(){
	char	*string = "this is a string";
	char	a = 'a';
	int		aa = 65;
	int 	num = 123456789;
	int 	max_int = INT_MAX;
	double 	myDouble =  11;
	short	shrt = 
	//float	myFloat = 12.3456789;

	printf("%s, %s %d, %.2d:%.2d\n", "Caturday", "April", 4, 20, 00);
	printf("%s\n", string);
	printf("%.3s\n", string);
	printf("%s %i\n", string, num);
	printf("Print a string: %s, and a number: %i\n", string, num);
	printf("%.2i\n", num);
	printf("%6.2i\n", num);
	printf("%.2f\n", 12.3456789);
	printf("%.2f\n", 12.34444);
	printf("%6.2f\n", 12.3456789);
	printf("%i\n", num);
	printf("%   sack\n", string); 
	printf("%?cat\n");
	printf("%c\n", a);
	printf("%c\n", aa);
	//printf("%s%s\n", a, string); seg fault
	//printf("%s%s\n", string); seg fault
	printf("%hx\n", 74565);
	printf("%hhu\n", a);
	printf("%hhu\n", aa);
	printf("%3sx\n", "hi");
	printf("%-3sx\n", "hi");
}
