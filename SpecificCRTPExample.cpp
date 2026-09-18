template <typename actual_type>
class CRTPExample{
public:
	void placeOrder(){
		static_cast<actual_type*>(this)->actualPlaceOrder();
	}
	void actualPlaceOrder(){
		printf("CRTPExample::actualPLaceOrder()\n");
	}
};

class SpecificCRTPExample: public CRTPExample<SpecificCRTPExample>{
public:
	void actualPlaceOrder(){
		printf("SpecificCRTPExample::actualPlaceOrder()\n");
	}
};

