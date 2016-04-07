#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void departamento();
void sel_dep();
void titu();
void menudep();
void pedido();
int op;
main()
{
menudep();
	}
void departamento()
{
	char nombre[40];
	int sel;
	FILE *dep;	
	dep=fopen("departamentos.txt","a+");
	if(dep==NULL)
	printf("No se puede crear ni leer el archivo\n");
	else
	{
		while(sel!=2)
		{
		printf("Ingrese el nombre de su departamento:\n");
		fflush(stdin);
		scanf("%s",&nombre);
		fprintf(dep,"\n%s",nombre);
		printf("Desea agregar otro departamento? SI(1) NO(2)\n");
		scanf("%d",&sel);
		if(sel<1||sel>2)
		{
			system("cls");
			printf("***Opcion Incorrecta***");
			system("pause");
		}
		}
	}
	fclose(dep);
}
void titu()
{
	system("cls");
		printf("\n\n\t *******FACULTAD DE INGENERIA*******");
        printf("\n\n\t ***Universiad Nacional Autonoma de Mexico***");
		printf("\n\n\tSistema ABC");
}
void menudep()
{
	int opc,opci,si,no,i=0,le,j=0,k=0,*arre2;
	FILE *leer,*leer2,*apu,*ap,*depar,*depar2,*deparprecio,*deparexi;
	char al2[4]={'.','t','x','t'};
	char al3[6]={'p','r','e','c','i','o'};
	char al4[3]={'e','x','i'};
	char al5[3]={'r','e','p'};
	char *arre;
  FILE *Fd;
      char to[30];
      int ze,zb[10];
      int l=0,w,e;
	int sel;
	struct 
		{
		char nombre_articulo[30];
		float  precio;
		int cantidad;
	}caracteristicas[5];
	struct
	{	
	char nomdepa[50];
}depa[100];
	do	
	{
		i=0;
		opc=0;
	titu();
	printf("\n\n\tSELECCIONE UN DEPARTAMENTO");
	ap=fopen("departamentos.txt","r");
	while(!feof(ap))
		   {
		 	fscanf(ap,"%s",depa[i].nomdepa);
	   printf("\n\n\t%d-->%s",i+1,depa[i].nomdepa);
	   i++;
}
	printf("\n\n\t     Tiene %d departamentos",i);
	printf("\n\n\t%d-->Anadir Departamento",i+1);
	printf("\n\n\t%d-->SALIR",i+2);
	printf("\n\n\t     Ingrese una opcion ");
	scanf("%d",&opc);
	if(opc==i+1)
	{	
	departamento();
}
if(opc<i+1)
	{
		printf("\n\n\tHa seleccionado el departamento '%s'",depa[opc-1].nomdepa);
		printf("\n\n\tEspere buscando departamento ");
		system("pause");
		//menu();
	titu();
			depar=fopen(strcat(depa[opc-1].nomdepa,al2),"a+");
			deparprecio=fopen(strcat(al3,depa[opc-1].nomdepa),"a+");
			deparexi=fopen(strcat(al4,depa[opc-1].nomdepa),"a+");
	do{		
	printf("\n\n\tEsta en el departamento '%s'",depa[opc-1].nomdepa);
	printf("\n\n\t1--->Agrgar productos");
	printf("\n\n\t2--->Vender");
    printf("\n\n\t3--->Comprar en otro departamento");
	printf("\n\n\tIngrese una opcion: ");
	scanf("%d",&opci);
	if(opci==1)
	{
	i=0;
	{
	do
	{
		i=0;
	printf("\nNombre articulo:\n");
	fflush(stdin);
	scanf("%s",&caracteristicas[i].nombre_articulo);
	printf("Precio articulo:\n");
	scanf("%f",&caracteristicas[i].precio);
	printf("Cantidad de articulos:\n");
	scanf("%d",&caracteristicas[i].cantidad);
	fprintf(depar,"%s %.2f \n",caracteristicas[i].nombre_articulo,caracteristicas[i].precio);
	fprintf(deparprecio,"%.2f\n",caracteristicas[i].precio);
	fprintf(deparexi,"%d\n",caracteristicas[i].cantidad);
	i++;
	printf("Desea anadir algun otro articulo? SI(1) NO(2): ");
	scanf("%d",&sel);
	}while(sel!=2);
}
	fclose(depar);
	fclose(deparprecio);
	fclose(deparexi);
}
	if(opci==2)
	{	
    printf("\n\n\t\tProductos en existencia\n ");	
     leer= fopen(depa[opc-1].nomdepa,"r");
    leer2=fopen(depa[opc-1].nomdepa,"r");
    FILE *leer3;
    FILE *leer4;
    leer3=fopen(depa[opc-1].nomdepa,"r");
    leer4=fopen(depa[opc-1].nomdepa,"r");
    k=0;
    le=0;
	while(le!=EOF)
    {
        le= getc(leer); 
            k++;
    };
    arre=(char*)malloc(k*sizeof(char));
    j=1;
	while(fgets(arre,k,leer2)!=NULL)
		   {
j++;
}
FILE *po;
po=fopen(al3,"rb");
Fd=fopen(al4,"rb");
float *arre3;
arre3=(float*)malloc((j+1)*sizeof(float));
arre2=(int*)malloc((j+1)*sizeof(int));
l=0;
char to2[30];
      while (!feof(po))
      {
            fgets(to2,10,po);
            sscanf(to2,"%f",&arre3[l]);      
            l++;
      }
l=0;
      while (!feof(Fd))
      {
            fgets(to,10,Fd);
            sscanf(to,"%d",&arre2[l]);      
            l++;
      }
      j=0;
 w=0;
 
    while(fgets(arre,k,leer3)!=NULL)
		   {
{   
     printf("\n\t     Nombre  Precio\n");
     printf("\n\t%d--->%s ",j+1,arre);
    printf("\n\t  Existencia-->%d\n",arre2[w]);       
	  j++;
	  w++;
}
}
      printf("\n\ntiene elementos %d",l-1);
//free(arre);
fclose(leer);
fclose(leer2);
fclose(leer3);
printf("\n\n\t Ingrese el numero del producto: ");
int repu,pi;
scanf("%d",&repu);
printf("\n\n\t Ingrese el numero de piezas: ");
scanf("%d",&pi);
if((arre2[repu-1]-pi)<0)
{
	printf("\n\tProducto sin existencia lo siento o no alcanzan las piezas ");
}
else
{
	arre2[repu-1]=arre2[repu-1]-pi;
}
j=0;
w=0;
float pagar=0;
pagar=pi*(arre3[repu-1]);
system("cls");
    j=0;
    w=0;
    //arre=0;
	while(fgets(arre,k,leer4)!=NULL)
		   {   
     printf("\n\t     Nombre  Precio\n");
     printf("\n\t%d--->%s ",j+1,arre);
    printf("\n\t  Existencia-->%d\n",arre2[w]);       
	  j++;
	  w++;
}
fclose(leer4);
free(arre2);
free(arre3);
FILE *hj;
hj=fopen(strcat(al5,al4),"a+");
fprintf(hj,"%.2f\n",pagar);
fclose(hj);
printf("\n\n\t Su total es de %.2f gracias\n\n",pagar);
system("pause");
menudep();
}
	if(opci==3)
	{
		menudep();
	}	
}while(opci!=3);
}
}while(opc!=i+2);
}

