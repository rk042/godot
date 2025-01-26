/* summator.h */

#ifndef SUMMATOR_H
#define SUMMATOR_H

#include "core/object/ref_counted.h"

class Summator : public RefCounted {
	GDCLASS(Summator, RefCounted);
private:
	int data;
protected:
	static void _bind_methods();

public:
	Summator();

	void WaitForTime(String message);
	void EmitTimeEnd();
	int GetData() const;
};

#endif // SUMMATOR_H
