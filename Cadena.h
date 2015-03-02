#ifndef STRING
#define STRING
#include <string.h>

class String{
private:
	char* cadena;
	int tamany;

public:
	String(){

		tamany = 1;
		cadena = new char[tamany];
		cadena[0] = '\0';
	}

	String(const char* cadena1){

		tamany = strlen(cadena1);
		cadena = new char(tamany);
		strcpy_s(cadena, tamany, cadena1);
	}
	
	//String(const string&)

	int len() const
	{
		return strlen(cadena);
	}

};
#endif