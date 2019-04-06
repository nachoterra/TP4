#pragma once

#ifndef JSONError_H
#define JSONError_H
/* Clase que permite trasmitir errores generados al utilizar JSONObject
* si no hubo error se puede generar un JSONError err que al llamar a
* err.hasFailed() devuelve false y getErrorString() devuelve "No error"
* si err.hasFailed () devuelve true entonces se produjo alg�n error al
* utilizar
* las funcione de JSONObject (ya sea en el constructor o en cualquer otra
* de sus funciones)
* en este caso getErrorString() devuelve un texto que explica cu�l fue el
* error.
*/
class JSONError
{
public:

	JSONError(bool hasFailed = false, const char * Desc = NULL);
	string getErorString(void);
	bool hasFailed(void);
};#endif