#include <iostream>
#include <vector>

using namespace std;

class Doctor;
class Patient
{
public:
	string Name;
	vector<Doctor*> Doctor_list;
	Patient(string pName) :Name(pName)
	{
		cout << "Patient \"" << Name << "\" Not Available\n";
	}

	void addDoctor(Doctor*);
	void printDoctor();
};

class Doctor
{
public:
	string Name;
	vector<Patient*> Patient_list;

	Doctor(string pName) :Name(pName)
	{
		cout << "Doctor \"" << Name << "\" Available\n";
	}

	~Doctor()
	{
		cout << "Doctor \"" << Name << "\" Not Available\n";
	}

	~Doctor()
	{
		cout << "Doctor \"" << Name << "\" Not Available\n";
	}

	void addPatient(Patient*);
	void printPatient();
};

void Patient::addDoctor(Doctor* pDoctor)
{
	Doctor_list.push_back(pDoctor);
}

void Patient::printDoctor()
{
	cout << "Doctor duty's list \"" << this->Name << "\":\n";
	for (auto& a : Doctor_list)
	{
		cout << a->Name << "\n";
	}

	cout << endl;
}

int main()
{
	Doctor* varDoctor1 = new Doctor("dr.Martin");
	Doctor* varDoctor2 = new Doctor("dr.Coki");
	Patient* varPatient1 = new Patient("Tretan");
	Patient* varPatient2 = new Patient("Ebel");

	varDoctor1->addPatient(varPatient1);
	varDoctor1->addPatient(varPatient2);
	varDoctor2->addPatient(varPatient1);

	varDoctor1->printPatient();
	varDoctor2->printPatient();
	varPatient1->printDoctor();
	varPatient2->printDoctor();

	return 0;