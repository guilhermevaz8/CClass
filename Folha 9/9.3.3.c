#include <stdio.h>
#include <math.h>
    
    typedef struct
    {
        float x;
        float y;
    } ponto;
    
    float distancia( ponto a, ponto b )
    {
       float dx, dy;
    
       dx = a.x - b.x;
       dy = a.y - b.y;
       return sqrt( dx*dx + dy*dy );  
    }
    
    main()
    {
      ponto listapontos[10],p1, p2,a,b;
      float d;
      int n=0;
      double max=0;
      
      while (n!=10){
        printf("Introduz as coordenadas x e y do ponto: ");
        scanf("%f %f", &p1.x, &p1.y );
        listapontos[n]=p1;
        n++;}
      for (int i=0;i<10;i++){
        for (int j=i;j<10;j++){
            if (max < distancia(listapontos[i], listapontos[j]))
                max=distancia(listapontos[i], listapontos[j]);
                a=listapontos[i];
                b=listapontos[j];
        }
      }
    printf("ponto 1(%lf, %lf)\nponto 2(%lf, %lf)\n", a.x, a.y, b.x, b.y);
    }