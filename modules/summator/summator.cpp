/* summator.cpp */

#include "summator.h"

void Summator::_bind_methods() {

	ClassDB::bind_method(D_METHOD("WaitForTime", "message"), &Summator::WaitForTime);
	ADD_SIGNAL(MethodInfo("my_signal"));

	ClassDB::bind_method(D_METHOD("GetData"), &Summator::GetData);
}

Summator::Summator() {

}

void Summator::WaitForTime(String message) {

	Object::connect("my_signal",callable_mp(this,&Summator::EmitTimeEnd));
	Object::emit_signal("my_signal");
}

void Summator::EmitTimeEnd() {
	data+=100;
}

int Summator::GetData() const {
	return data;
}


