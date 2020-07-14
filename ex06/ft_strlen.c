#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

 int ft_strlen(char *str){
 int count = 0;
  while(*str != '\0'){
      str = str + 1;
      count++;
  }
  ft_putchar(count + '0');
  return (count);
}    

