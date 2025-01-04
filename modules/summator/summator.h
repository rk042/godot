/* summator.h */

#ifndef SUMMATOR_H
#define SUMMATOR_H

#include "core/object/ref_counted.h"

class Summator : public RefCounted {
	GDCLASS(Summator, RefCounted);
	int output;
protected:
	static void _bind_methods();

public:
	void add(int _valueA,int _valueB);
	int GetOutput() const;
	Summator();
};

#endif // SUMMATOR_H
