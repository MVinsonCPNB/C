#include <stdio.h>
main() {
 int x,y,c;
   for(c=1;c<52;c++)
   {
      x = (c>26)? 52-c : c;
      for(y=1;y<27;)
        printf("%c", (y++==x)? y+63 : y+95);
    puts(""); 
   }
}
