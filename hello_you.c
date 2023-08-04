#include <stdio.h>

int main(void)
{
  char name[100];
  printf("What is your name? ");
  // scanf("%s", name);
  fgets(name, sizeof(name), stdin);
  
  printf("Hello, %s\n", name);
}
/*
 scanf get the input and save on "name" array. But scanf does not handle spaces.

 If you want to handle names with spaces, you can use the fgets function to read the input instead of scanf.

 The fgets function allows reading a line of input with spaces and stores it in the name array. The sizeof(name) argument ensures that the function doesn't read more characters than the allocated size of the name array. The stdin argument specifies that we are reading from the standard input (keyboard).
*/