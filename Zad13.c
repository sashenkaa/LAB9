#include <stdio.h>
#include <stdlib.h>


int count(char const *w)
{
   int i=0;

   while (*w++)
	  ++i;
   return i;
}


int main(int argc, char const *argv[])
{
   int n;

   if(argc>0)
   {
     for(n=1; n<argc; n++)
     {
	printf("%d\n",count(argv[n]));
     }
     }

     else
     {
     	printf("Oops.\n");
     }

  return EXIT_SUCCESS;
}
# LAB9
