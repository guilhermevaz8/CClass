int filtrar_positivos(int vec[], int size){
    int count=0, pos=0;
    for (int i=0; i<size;i++){
        if (vec[i]>0){
            vec[pos]=vec[i];
            pos++;
            count++;}
    }
    return count;
}