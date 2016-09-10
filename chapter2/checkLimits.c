#include <stdio.h>
#include <limits.h>

/*determine ranges for machine specific*/
main()
{
  /*Signed types */
  printf("signed char min = %d\n", SCHAR_MIN);
  printf("signed char max = %d\n", SCHAR_MAX);
  printf("signed short min = %d\n", SHRT_MIN);
  printf("signed short min = %d\n", SHRT_MAX);
  printf("signed int min = %d\n", INT_MIN);
  printf("signed int min = %d\n", INT_MAX);
  printf("signed long min = %ld\n", LONG_MIN);
  printf("signed long min = %ld\n", LONG_MAX);
  /*unsigned types*/
  printf("unsigned char max = %u\n", UCHAR_MAX);
  printf("unsigned char min = %u\n", USHRT_MAX);
  printf("unsigned char min = %u\n", UINT_MAX);
  printf("unsigned char min = %lu\n", ULONG_MAX);
}
