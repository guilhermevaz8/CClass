int repetidos(int vec[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        for (int j=o; j<size; j++){
            if (vec[i]==vec[j])
                return 1;
        }    
    }
    return 0;
}