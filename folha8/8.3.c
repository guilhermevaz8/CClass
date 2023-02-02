#include<stdio.h>
void decompor(int total_seg, int *horas, int *mins, int *segs){
    int hora,min,seg;
    min = total_seg/60;
    seg=total_seg%60;
    hora=min/60;
    min=min%60;

    *horas=hora;
    *mins=min;
    *segs=seg;
}

int main(){
    int hora, total, min, seg, *horas=&hora, *mins=&min, *segs=&seg;
    scanf("%d",&total);
    decompor(total, horas, mins, segs);
    printf("%d\n",hora);
    printf("%d\n",min);
    printf("%d\n",seg);

}
