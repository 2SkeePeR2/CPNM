#include <stdio.h>
#define LEN 1000

int main(){
  char str[LEN];
  int cnt = 0,index = 0;
  printf("Enter the string\n");
    scanf("%[^\n]", &str);
  while(1){
    if(str[index]=='\0'){
      break;
    }
    if((str[index]>=65&&str[index]<=90)||(str[index]>=97&&str[index]<=122)){
      cnt++;
    }
    index++;
  }
  printf("%d", cnt);
  return 0;
}
