#include <stdio.h>
#include <math.h>
    
    typedef struct
    {
        float x;
        float y;
    } ponto;
    
    /* calcula a distância entre 2 pontos */
    float distancia( ponto a, ponto b )
    {
       float dx, dy;
    
       dx = a.x - b.x;
       dy = a.y - b.y;
       return sqrt( dx*dx + dy*dy );  
    }
    
    main()
    {
      ponto p1, p2;
      float d;
      
      printf("Introduz as coordenadas x e y do ponto p1: ");
      scanf("%f %f", &p1.x, &p1.y );
      printf("Introduz as coordenadas x e y do ponto p2: ");
      scanf("%f %f", &p2.x, &p2.y );
      d = distancia( p1, p2 );
      printf("A distância entre os pontos é %f\n", d );  
    }