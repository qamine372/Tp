#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int check(char S[]){
 int T[strlen(S)] , k = strlen(S) , m; 
 for(int i = 0 ; i < k ; i++) T[i] = S[k-1-i];
 for(int j = 0 ; j < k/2 ; j++){if(S[j] == T[k-1-j]){m = 1;} else{m = 0; break;}}
 return m;
}

int main(int argc , char *arcv[]) {
   if(argc != 2){printf("Error , enter 1 string"); return 1;}
   printf("%d \n",check(arcv[1]));
   return 0;
}
