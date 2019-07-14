#include <iostream>
#include <memory>


using namespace std;

void ptr_func1() {
	cout << "Juhu ich fahre\n";
}

void ptr_func2() {
	cout << "Juhu ich fahre nicht\n";
}

class Fahrzeug {
public:
	int speed;
	int volume;
};

class Fahrrad : public Fahrzeug {
public:
	int sitze;
	int farbe;
	Fahrrad(int sitze, int farbe, int volume, int speed) {
		this->sitze = sitze;
		this->farbe = farbe;
		this->speed = speed;
		this->volume = volume;
	};
	Fahrrad* operator +(int i) {
		return new Fahrrad(sitze, farbe, volume, speed + i);
	};

	Fahrrad* operator +(Fahrrad f) {
		return new Fahrrad(f.sitze + sitze, f.farbe + farbe, f.volume + volume, f.speed +speed);
	};
};

class Roller : public Fahrzeug {
private:

	double lenkerhoehe;
	Roller(double lenkerhoehe, int volume, int speed) {
		this->lenkerhoehe = lenkerhoehe;
		this->speed = speed;
		this->volume = volume;
	}
	
	
public:
	static Roller* getInstance(double lenkerhoehe, int volume, int speed) {
		static Roller* instance;
		if (instance == NULL) {
			instance = new Roller(lenkerhoehe,volume,speed);
		}
		return instance;
	}
};


int main() {
	

	Roller* RobinsRoller = Roller::getInstance(3.0, 4, 5);
	cout << "Huhu ich bin Robins Roller: " << RobinsRoller->speed << endl;
	Roller* MandysRoller = Roller::getInstance(0.1, 2, 4);
	cout << "Huhu ich bin Mandys Roller: " << MandysRoller->speed << endl;

	Fahrrad* MandysTollesTandem = new Fahrrad(4, 5, 50, 45);
	cout << "Mandys tolles Fahrrad wurde erstellt und freut sich!" << endl;
	Fahrrad* HannesFahrrad = *MandysTollesTandem + 5;
	Fahrrad* RobinsFahrrad = *HannesFahrrad + *MandysTollesTandem;
	
	cout << "Fahrradvergleich: " << endl;
	cout << "\tMandy\tHannes\tRobin" << endl;
	cout << "Sitze: \t" << MandysTollesTandem->sitze << "\t" << HannesFahrrad->sitze << "\t" << RobinsFahrrad->sitze << endl;
	cout << "Farbe: \t" << MandysTollesTandem->farbe << "\t" << HannesFahrrad->farbe << "\t" << RobinsFahrrad->farbe << endl;
	cout << "Volume:\t" << MandysTollesTandem->volume << "\t" << HannesFahrrad->volume << "\t" << RobinsFahrrad->volume << endl;
	cout << "Speed: \t" << MandysTollesTandem->speed << "\t" << HannesFahrrad->speed << "\t" << RobinsFahrrad->speed<< endl;
	
	void (*ptr) (void) = &ptr_func1;
	(*ptr) ();

	(ptr) = &ptr_func2;
	(*ptr) ();

	Fahrzeug* kaputt = dynamic_cast<Fahrzeug*> (RobinsFahrrad);
	
	shared_ptr<Fahrrad> ptr_shr(MandysTollesTandem);
	cout << "Es zeigen " << ptr_shr.use_count() << " Pointer\n";


	


	return EXIT_SUCCESS;
}