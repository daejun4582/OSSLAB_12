#include <stdio.h>
#include "mylib.h"


int main(void)
{
    
	int a, b;
	printf("숫자 두개를 입력하세요: ");
	scanf("%d %d",&a,&b);
	printf("(input) a=%d, b=%d\n",a,b);

    printf("(initial) a=%d, b=%d\n",a,b);

    swap(&a,&b);
    printf("(swapped) a=%d, b=%d\n",a,b);

    printf("(multiplied) a x b = %d x %d = %d\n", a, b, mult(a, b));
    
    printf("(divided) a / b = %d / %d = %d\n", a, b, div(a, b));

	printf("(added) a + b = %d + %d = %d\n", a, b, add(a,b));

	printf("(subtracted) a - b = %d - %d = %d\n", a, b, subtract(a,b));

    return 0;
}
