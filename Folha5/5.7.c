int decimal(char str[]){
    int num=o,i=o;
    while(str[i]!='\0'){
        int ascii=str[i];
        ascii-=48;
        num*=10;
        num+=ascii;
        i++;
    }
    return num;
}