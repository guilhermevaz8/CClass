int soma_divisores(int n){
    int i,soma=0;
    for (i=1;i<n;i++)
        if (n%i==0)
            soma=soma+i;
    return soma;
}