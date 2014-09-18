/*
* Autor de la solución: Natalia S. V.
*
*Tema: Resolución final 18-7-2014
*
*
*/

#include "stdafx.h"
#include <iostream>
#include <array>

using namespace std;

struct ruta
{
	unsigned localidad1;
	unsigned localidad2;
	unsigned distancia;
	unsigned ruta;
} ;

void InicializarM(array < array < unsigned, 100 >, 100 >);

void MostrarRuta(unsigned, unsigned, array < array < unsigned, 100 >, 100 >);

int main()
{
	array <ruta, 4950> rutas;
	array < array < unsigned, 100 > , 100 > rutadistancia;
	return 0;

}

void MostrarRuta(unsigned loc1, unsigned loc2, array < array < unsigned, 100 >, 100 > rutdis)
 {
	if (loc1 == loc2)
	{
		cout << "Las localidades ingresadas son las mismas";
		return;
	}
	if (rutdis.at(loc2).at(loc1) == 0)
	{
		cout << "No se encuentra una ruta directa entre ambas localidades";
	}
	else
	{
		cout << "La ruta tiene un valor de: " << rutdis.at(loc2).at(loc1) << endl;
		cout << "La distancia entre ambas localidades es de: " << rutdis.at(loc1).at(loc2) << endl;
	}
	return;


 }
