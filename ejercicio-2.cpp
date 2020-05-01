#include <iostream>
#include <conio.h>
using namespace std ;
int main () {
	
int prom,cali1,cali2,cali3,cali4,cali5,cali6,cali7,cali8,cali9,cali10,total=0,contador=0;

cout<<"venta mensual de almacen 1  "<<"\n";
cin>>cali1;
cout<<"venta mensual de almacen 2 "<<"\n";
cin>>cali2;
cout<<"venta mensual de almacen 3 "<<"\n";
cin>>cali3;
cout<<"venta mensual de almacen 4 "<<"\n";
cin>>cali4;
cout<<"venta mensual de almacen 5 "<<"\n";
cin>>cali5;
cout<<"venta mensual de almacen 6 "<<"\n";
cin>>cali6;
cout<<"venta mensual de almacen 7 "<<"\n";
cin>>cali7;
cout<<"venta mensual de almacen 8 "<<"\n";
cin>>cali8;
cout<<"venta mensual de almacen 9 "<<"\n";
cin>>cali9;
cout<<"venta mensual de almacen 10 "<<"\n";
cin>>cali10;

prom=(cali1+cali2+cali3+cali4+cali5+cali6+cali7+cali8+cali9+cali10)/10 ;

cout<<"el promedio es:  "<<prom;
cout<<"\nalmacenes con ventas superiores al promedio: ";
 if (prom <cali1)  {
   cout<<"\nalmacen 1\n";
   }
   if (prom<cali2) {
   cout <<"\nalmacen 2 \n ";
   }
   if (prom<cali3) {
   cout <<"\nalmacen 3 \n ";
   }
   if (prom<cali4) {
   cout <<"\nalmacen 4 \n ";
   }
if (prom<cali5) {
   cout <<"\nalmacen 5 \n ";
   }
if (prom<cali6) {
   cout <<"\nalmacen 6 \n ";
   }
if (prom<cali7) {
   cout <<"\nalmacen 7 \n ";
   }
if (prom<cali8) {
   cout <<"\nalmacen 8 \n ";
   }
if (prom<cali9) {
   cout <<"\nalmacen 9 \n ";
   }
if (prom<cali10) {
   cout <<"\nalmacen 10 \n ";
   }






    getch ();
return 0;

}


