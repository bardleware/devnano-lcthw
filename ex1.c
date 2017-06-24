#include <stdio.h>

/* multiline comment
  still a multiline comment
*/

int main (int argc, char * argv[])
{
	char world[] = "World!";//added after 
  int distance = 100;
  int km = 30;
  //single line comment

  printf("You are %d miles away or %d kilometers.\n", distance, km);
	
	printf("Hello %s\n", world);

	return 0;
}
