#include <stdio.h>

int a(int i,int x){
  
  if(i<27){
   printf("%c",(i==x)? i+64 : i+96);
   return a(i+1,x);
  }
}

main(){
  for(int c = 1; c<52; c++)
	{(c<26)? a(1,c) : a(1,52-c);puts("");}
}
