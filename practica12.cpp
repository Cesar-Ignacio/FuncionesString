#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

///Prototipo de Funciones

void StrcpyCop(char *,char *);
int CantidadDCaracteres(char *);
int CantidadDCaracteresSinEspa(char *);
int StrcmpCop(char * ,char *);
int CadenaMayor(char *,char *);

///Definición de Funciones

void StrcpyCop(char *v1,char *v2)
{

   int ccter=CantidadDCaracteres(v2);
   for(int x=0;x<ccter+1;x++)
   {
       v1[x]=v2[x];
   }


}
int CantidadDCaracteres(char *v)
{
    int pos=0;
    while(v[pos]!='\0')
    {
        pos++;
    }
    return pos;
}

int CantidadDCaracteresSinEspa(char *v)
{
   int cc=CantidadDCaracteres(v),con=0;
   for(int x=0;x<cc;x++)
   {
       if((int)v[x]!=32)
       {
           con++;
       }
   }
   return con;
}
int StrcmpCop(char *v1, char *v2)
{
   int tamanio=CadenaMayor(v1,v2),con=0;

   for(int x=0;x<tamanio;x++)
   {
       if((int)v1[x]<(int)v2[x])
       {
         return -1;
       }
       else if((int)v1[x]>(int)v2[x])
       {
           return 1;
       }
       else if((int)v1[x]==(int)v2[x])
       {
           con++;
       }

   }
   if(con==tamanio)
   {
       return 0;
   }

}

int CadenaMayor(char *v1, char *v2)
{
   int cv1=CantidadDCaracteres(v1),cv2=CantidadDCaracteres(v2);

   if(cv1>cv2)
   {
       return cv1;
   }
   else{
    return cv2;
   }

}


int main()
{



    char PalabraUno[8],PalabraDos[8];
    int valor=0;

    cout<<"Primera Palabra  :";
    cin.getline(PalabraUno,8),'\n';
    cout<<"Sengunda Palabra :";
    cin.getline(PalabraDos,8,'\n');

    ///Strcpy()

   /* strcpy(PalabraUno,PalabraDos);

    cout<<"Contenido de Palabra Uno :"<< PalabraUno <<endl;

    cout<<"******FUNCION COPIA********"<<endl;

    StrcpyCop(PalabraUno,PalabraDos);

    cout<<"Contenido de Palabra Uno :"<< PalabraUno <<endl;

    */


   ///Strcmp()
   /*
    valor=strcmp(PalabraUno,PalabraDos);
    if(valor==0)
    {
       cout<<"Son iguales"<<endl;
    }
    else if(valor>0)
    {
       cout<<"La cadena 1 esta despues "<<endl;
    }
    else if(valor<0)
    {
       cout<<"La cadena 1 esta antes"<<endl;
    }

    cout<<"Strcmp:"<<strcmp(PalabraUno,PalabraDos)<<endl;

    cout<<"Mi Funcion:"<<StrcmpCop(PalabraUno,PalabraDos)<<endl;

    */

   ///Strlen

   /*
   cout<<"STRLEN:"<< strlen(PalabraUno)<<endl;

   cout<<"Cantidad de Caracter:"<<CantidadDCaracteres(PalabraUno)<<endl;

   cout<<"Cantidad de caractres sin espacio:"<<CantidadDCaracteresSinEspa(PalabraUno)<<endl;

   */

   ///Strcat

   cout<<"Strcat:"<<strcat(PalabraUno,PalabraDos)<<endl;

    system("pause");
    return 0;

}
