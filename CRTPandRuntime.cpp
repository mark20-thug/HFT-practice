#include<cstdio>
#include "SpecificRuntimeExample"
#include "CRTPExample"
int main(int, char **){

RuntimeExample* runtime_example = new SpecificRuntimeExample();
runtime_example->placeOrder();

CRTPExample<SpecificCRTPExample> crtp_exapmle;
crtp_example.placeOrder();

return 0;

}
