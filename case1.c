#include<stdio.h>
#include<limits.h>
void main()
{
   printf("short:\nsigned: %hd to %hd\n", SHRT_MIN,SHRT_MAX);
   printf("unsigned: %d to %hu", 0, USHRT_MAX);
}
