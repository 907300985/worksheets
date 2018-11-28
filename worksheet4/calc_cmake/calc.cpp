#include <sstream> 
#include <iostream>
#include "adder.h"
#ifndef MATHSLIB_ADDER_H 
#define MATHSLIB_ADDER_H
#if defined(WIN32)|defined(_WIN32) 
#ifdef maths_STATIC
#define MATHSLIB_API 
#else 
#ifdef maths_EXPORTS
#define MATHSLIB_API __declspec( dllexport )
#else
#define MATHSLIB_API __declspec( dllimport ) 
#endif
#endif 
#else 
#define MATHSLIB_API 
#endif 
MATHSLIB_API int add( int a, int b );
#endif
int main( int argc, char *argv[] ) { 
int a, b, c;
if(argc != 3) return 1;
std::string sa( argv[1] ); 
std::string sb( argv[2] );
std::stringstream ssa( sa ); 
std::stringstream ssb( sb );
ssa >> a; 
ssb >> b;
c = add( a, b ); 
std::cout << c;
return 0;
}