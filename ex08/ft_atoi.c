#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str){
int dec = 0;
int test = 0;

while(*str >= '0' && *str <= '9'){
  dec *= 10;
        dec += (int) (*str-'0');
        str++;
}
write(1, &dec, 1);
printf("dec");
return dec;

}    

int main(){

  ft_atoi("22");
  return 0;
}