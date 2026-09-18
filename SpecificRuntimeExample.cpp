#include <cstdio>

class RuntimeExample{
	virtual void placeOrder(){
	printf("RuntimeExample::placeOrder()\n");
}
};

class SpecificRuntimeExample : public RuntimeExapmle {
public:
	void placeOrder() override {
	printf("SpecificRuntimeExample::placeOrder()\n");
}
};


