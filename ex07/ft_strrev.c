char ft_strlen(char *str){
int count = 0;
char arr[count];
while(*str != '\0'){
  arr[count] = *str;
  str = str + 1;
  count++;
      
  }

  int count2 = count;
  while(count2 > -1 ){

    *str = arr[count2];
    count2--;
  }

  return str;
}    

