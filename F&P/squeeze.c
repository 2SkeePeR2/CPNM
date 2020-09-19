#include<stdio.h>
#include<string.h>
#define MAX 100

char *squeeze(char *word, char letter){
  int sz = strlen(word);
  char res[MAX];
  int i,j=0;
  for(i=0;i<sz;i++){
    if(word[i]!=letter){
      res[j] = word[i];
      j++;
    }
  }
  printf("The resultant word is: %s",res);
}

int main(){
  char word[MAX];
  char chtr;
  char *res;
  printf("\nEnter the string: ");
  gets(word);
  printf("Enter the word: ");
  scanf("%c",&chtr);
  squeeze(word,chtr);
  return 0;
}