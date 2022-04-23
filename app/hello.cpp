#include <iostream>
#include <vector>


#include <pybind11/pybind11.h>

namespace py = pybind11;

int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a - b;
}
int mult(int a, int b){

	return a * b;
}


PYBIND11_MODULE(testy, m){
	m.def("add", &add);
	m.def("sub", &sub);
	m.def("mult", &mult);
}