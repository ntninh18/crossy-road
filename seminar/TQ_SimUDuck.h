////This code show application of "Strategy Pattern"
////////////////////////////////////////////////////////////////////////
#ifndef _TQ_SimUDuck_h
#define _TQ_SimUDuck_h
class Duck
{
 public:

	 FlyBehavior *flyBehavior;					// Composition , HAS-A relationship
	 QuackBehavior *quackBehavior;

	 Duck() {}

	 void performFly();

	 void performQuack();

	 void setFlyBehavior(FlyBehavior *fb) {
		 flyBehavior = fb;
	 }

	 void setQuackBehavior(QuackBehavior *qb){
		 quackBehavior = qb;
	 }

	 virtual void display() = 0;

};

////////

	class MallardDuck : public Duck
	{
	public:

		MallardDuck();

		void display();
	};
	class ModelDuck : public Duck
	{
	public:
		ModelDuck();

		void display();
	};

//////

	class FlyBehavior
	{
	  public: 
		  virtual void fly() = 0;
	};
	class FlyNoWay: public FlyBehavior
	{
	public:

		void fly();
	};
	
	class FlyRocketPowered : public FlyBehavior
	{
	  public:
		  void fly();
	};
	
	class FlyWithWings : public FlyBehavior
	{
	  public:

		  void fly();
	};
///////////////////
class QuackBehavior
{
  public:

	  virtual void quack() = 0;
};

class Quack : public QuackBehavior
{
public:
	void quack();
};
class Squeak : public QuackBehavior
{
public:
	void quack();
};
class MuteQuack : public QuackBehavior
{
public:
	void quack();
};


#endif