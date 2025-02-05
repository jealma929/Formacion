#include <stdio.h>
#include <conio.h>

/*void Escribir(int tabla[a][b]);
    int a,b;
     do {
        printf("\nDar de alta un Ingreso \e[1m (s/n) \e[m ? ");
        scanf("%c",&opcion1);
        if (opcion1='s')
            {
            printf("\nIntroducir Vendedor ");
            scanf("%d",v);
            printf("\nIntroducir Producto ");
            scanf("%d",p);
            printf("\nIntroducir Ingresos ");
            scanf("%d",ing);
            tabla[a][b]=ing;
            //clrscr();
             }
        }    
    while (opcion1!='n');
  
*/
//programa vendedores
int main(void)
{
    int tabla[18][10];
    int opcion,i,j,*ip,*jp;
    int v,p,ing;
    char opcion1;
    for (i=0;i<18;i++){
        for (j=0;j<10;j++){
            tabla[i][j]=0;
            }    
        }
    printf("\n\e[1m (1) \e[m Introducir Ingresos (vendedor/producto)");
    printf("\n\e[1m (2) \e[m Total Ingresos por vendedores");
    printf("\n\e[1m (3) \e[m Total Ingreso por producto");
    printf("\n\e[1m (4) \e[m Total Ingresos");
    printf("\n\e[1m (0) \e[m Salida\n  ");

    do{
        scanf("%d",&opcion);
        switch(opcion){
            case 1: do {
                        printf("\nDar de alta un Ingreso \e[1m (s/n) \e[m ? ");
                        scanf("%c",&opcion1);
                        if (opcion1='s')
                            {
                            printf("\nIntroducir Vendedor ");
                            scanf("%d",v);
                            printf("\nIntroducir Producto ");
                            scanf("%d",p);
                            printf("\nIntroducir Ingresos ");
                            scanf("%d",ing);
                            tabla[v][p]=ing;
                            //clrscr();
                            }
                        }    
                    while (opcion1!='n'); 

            case 2:
            case 3:
            case 4:
            case 0: break;    
        }   
    }
    while (opcion!=0);


}