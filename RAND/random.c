#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
int counter;

	srand(time(NULL));

for (counter = 0; counter < 10; counter = counter + 1)
{	printf("%i\n", rand());
//	printf("%i\n", rand() % 100);
}

return 0;
}
