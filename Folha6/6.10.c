int magico(int a[20][20], int n){
    int soma = 0;

    for (int i = 0; i < n; i++){
        soma += a[i][0];
    }
    
    int slinha = 0, scoluna = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            slinha += a[i][j];
            scoluna += a[j][i];
        }
        if (slinha != soma || scoluna != soma){
            return 0;
        }
        else{
            slinha = 0;
            scoluna = 0;
        }
    }
    int sDiag1 = 0, sDiag2 = 0;
    for (int i = 0; i < n; i++){
        sDiag1 += a[i][i];
        sDiag2 += a[i][n-1-i];
    }
    if (sDiag1 != soma || sDiag2 != soma){
        return 0;
    }
    return 1;
}