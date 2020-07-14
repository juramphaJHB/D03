void ft_div_mod(int a, int b, int *div, int *mod){

    int answer = (a / b);
    int *c = &answer;
    *div = *c;
    *mod = a%b;

}    
