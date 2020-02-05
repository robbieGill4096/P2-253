#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <iostream>
char *pattern = "engineer";
lineChecker(char line[100]){


int pattern_index =0;
int pattern_length = strlen(pattern);
int length_of_string = strlen(line);
for(int i=0; i < length_of_string; i++){
  if(line[i] == pattern[pattern_index]){
    (pattern_index++);
  }
  else if(pattern_index == pattern_length){
    puts(line);
    break;
  }
  else{
    pattern_index =0;
  }
}
}
int main(){
  char str[100];
while(fgets(str, sizeof(str), stdin)){
lineChecker(str);
}

  return(0);
}
