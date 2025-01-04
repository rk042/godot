/* summator.cpp */

#include "summator.h"

void Summator::add(int _valueA,int _valueB) {
	output = _valueA + _valueB;
}

void Summator::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add","_valueA","_valueB"), &Summator::add);
	ClassDB::bind_method(D_METHOD("GetOutput"), &Summator::GetOutput);
}

int Summator::GetOutput() const{
	return output;
}

Summator::Summator() {

}
