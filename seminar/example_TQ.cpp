//A group of designers was ordered to create a basic
//simulator for the mobile handset. A user can select
//a handset, and should be able to function whatever is
//supported in the handset.


//Let’s start with the mobile phone class, which is an abstract class.
class MobilePhone
{
	public:
		virtual void display() = 0;
		void takeRearCamera()
		{
			frontCameraBehavior->useFrontCamera();
		}
		void takeFrontCamera()
		{		
			rearCameraBehavior->useRearCamera();
		}
		MobilePhone(RearCameraBehavior* rcb, FrontCameraBehavior* fcb):
		rearCameraBehavior(rcb),frontCameraBehvior(fcb){}
	private:
		RearCameraBehavior * rearCameraBehavior;
		FrontCameraBehavior * frontCameraBehavior;
};
//Implement the abstract class for Rear Camera Behavior 
//and Front Camera Behavior.
class FrontCameraBehavior
{
	public:
		virtual void useFrontCamera() = 0;
};
class RearCameraBehavior
{
	public:
		virtual void useRearCamera() = 0;
};

//Implement some mobile phones.
class Iphone11ProMax :public MobilePhone
{
	public:
		void display()
		{
			cout << "I am an Iphone 11 Pro Max." << endl;
		}
	Iphone11ProMax():MobilePhone(new RearCamera(),new FrontCamera()){}
};
class Nokia1080 :public MobilePhone
{
	public:
		void display()
		{
			cout << "I am a Nokia 1080." << endl;
		}
		Nokia1080():MobilePhone(new RearNoWay(),new FrontNoWay()){}
};

//Implement the concrete behaviors.
class RearCamera :public RearCameraBehavior
{
	public:
		void useRearCamera()
		{
			cout << "I'm taking a photo with rear camera." << endl;
		}
		RearCamera();
};
class RearNoWay :public RearCameraBehavior
{
	public:
		void useRearCamera()
		{
			cout << "I don't have a rear camera." << endl;
		}
		RearNoWay();
};
class FrontCamera :public FrontCameraBehavior
{
	public:
		void useFrontCamera()
		{
			cout << "I'm taking a selfie." << endl;
		}
		FrontCamera();
};
class FrontNoWay :public FrontCameraBehavior
{
	public:
		void useFrontCamera()
		{
			cout << "I don't have a front camera." << endl;
		}
		FrontNoWay();
};

// int main()
// {
	// MobilePhone* iphone = new Iphone11ProMax();
	// iphone->takeFrontCamera();
	// iphone->takeRearCamera();
	// return 0;
// }
//I’m taking a selfie.
//I’m taking a photo with rear camera.


//Setting behavior dynamically
void MobilePhone::setFrontCameraBehavior(FrontCameraBehavior* fcb)
{
	frontCameraBehavior = fcb;
}
int main()
{
	MobilePhone* stone = new Nokia1080();
	stone->takeFrontCamera();
	stone->setFrontCameraBehavior(new FrontCamera());
	stone->takeFrontCamera();
	return 0;
}
// I don’t have a front camera.
// I’m taking a selfie.