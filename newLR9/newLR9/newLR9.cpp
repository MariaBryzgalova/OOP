#include <iostream>
#include "time.h"
#include <string>
#include "windows.h"
using namespace std;

class Software {
private:
	string name;
	string developer;
	string data;
public:
	string getName() { return name; }
	string getDeveloper() { return developer; }
	string getData() { return data; }
	void setName(string name1) { name = name1; }
	void setDeveloper(string developer1) { developer = developer1; }
	void setData(string data1) { data = data1; }
	void display() {
		cout << "Name: " << name << endl;
		cout << "Developer: " << developer << endl;
		cout << "Data of run-out: " << data << endl;
	}
	virtual void Typename() {
		cout << "Type of software " << endl;
	}
};

class Basic : public Software {
private:
	string lastV;
public:

	string getLast() { return lastV; }
	void setLast(string last1) { lastV = last1; }

	void dB() {
		cout << "Last version: " << lastV << endl;
	}
	void Typename() {
		cout << "Type of software: " << "Basic" << endl;
	}
};


class Applications {
private:
	string area;
	string type;
public:
	string getArea() { return area; };
	void setArea(string area1) { area = area1; };
	string getType() { return type; };
	void setType(string type1) { type = type1; };
	void dApp() {

		cout << "Implementation areas: " << area << endl;
		cout << "Type of launch: " << type << endl;
	}
};

class SWTool : public Software {
private:
	string systype;
	string exetype;
public:
	string getSystype() { return systype; };
	void setSystype(string systype1) { systype = systype1; };
	string getExetype() { return exetype; };
	void setExetype(string exetype1) { exetype = exetype1; };
	void dSW() {
		cout << "System type: " << systype << endl;
		cout << "Type of execute: " << exetype << endl;
	}
	void Typename() {
		cout << "Type of software: " << "SWTools"<<endl;
	}
};

class SpesialAssignment : public Applications, public Software {// специальное назначение
private:
	string SALastV;
	string SARenewal;
	string SASpace;
public:
	string getSALastV() { return SALastV; };
	void setSALastV(string SALastV1) { SALastV = SALastV1; };
	string getSARenewal() { return SARenewal; };
	void setSARenewal(string SARenewal1) { SARenewal = SARenewal1; };
	string getSASpace() { return SASpace; };
	void setSASpace(string SASpace1) { SASpace = SASpace1; };
	void dSA() {
		cout << "Last version: " << SALastV << endl;
		cout << "Data of last renewal: " << SARenewal << endl;
		cout << "Space of using: " << SASpace << endl;
	}
	void Typename() {
		cout << "Type of software: " <<"SpecialAssignment"<< endl;
	}

};



int main()
{
	setlocale(LC_ALL, "ru");
	Software soft;
	Basic basic;
	Software* b=&basic;
	b->Typename();
	basic.setName("Windows");
	basic.setDeveloper("Windows");
	basic.setData("20 November 1985");
	basic.display();
	basic.setLast("10.0.18363.592");
	basic.dB();
	cout << endl;

	SpesialAssignment SA;
	b = &SA;
	b->Typename();
	SA.setName("Photoshop");
	SA.setDeveloper("Adobe");
	SA.setData("19.02.1990");
	SA.display();
	SA.setArea("design");
	SA.setType("downloading");
	SA.dApp();
	SA.setSALastV("CC20");
	SA.setSARenewal("19 May 2020");
	SA.setSASpace("Web-design");
	SA.dSA();
	cout << endl;

	SWTool sw;
	b = &sw;
	b->Typename();
	sw.setName("C++");
	sw.setDeveloper("Bjarne Stroustrup");
	sw.setData("1983");
	sw.display();
	sw.setSystype("static");
	sw.setExetype("compilable");
	sw.dSW();

	system("pause");
	return 0;
}