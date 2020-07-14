void ft_ultimate_div_mod(int *a, int *b){
   
   int div = *a / *b; 
   int mod = *a % *b; 
   int *ptr1 = &div;
   int *ptr2 = &mod;
   
   *a = *ptr1;
   *b = *ptr2;
  
}    
