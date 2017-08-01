#include<iostream>
using namespace std;

class A{
public:
	void AshowPublic(){
		cout << "class a public"<<endl;
	}
protected:
	void AshowProtected(){
		cout << "class a protected" << endl;


	}
private:
	void AshowPrivate(){
		cout << "class a private" << endl;

	}
};

class B: public A {
public:
	void s(){
		A::AshowPublic();
		A::AshowProtected();
	}
};

class C : protected A{
public:
	void s(){
		A::AshowPublic();
		A::AshowProtected();
	}
};

class D : private A{
public:
	void s(){
		A::AshowPublic();
		A::AshowProtected();
	}
};

class E : public C{
public:
	void s(){
		C::s();

	}
};
void main(){
	A objA;
	objA.AshowPublic();
	B objB;
	objB.s();
	C objC;
	objC.s();
	D objD;
	objD.s();
	E objE;
	objE.s();
	system("pause");
}