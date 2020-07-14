int ft_strlen(char *str){
int count = 0;
  while(*str != '\0'){
    str = str + 1;
    count++;
  }
return (count);
}    

