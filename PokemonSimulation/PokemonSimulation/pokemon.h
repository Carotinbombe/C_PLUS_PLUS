#include <String>

#define MAX_LEVEL 10
#define MIN_LEVEL 1
#define MAX_STAERKE 50
#define MIN_STAERKE 15


std::string generateKraft();

class pokemon {
private:
	int leben;
	int staerke;
	int erfahrung;
	int level;

public:
	void setLeben(int leben);
	int getLeben();
	void setStaerke(int staerke);
	int getStaerke();
	void setErfahrung(int erfahrung);
	int getErfahrung();
	void setLevel(int level);
	int getLevel();
	void addLevel(int level);
	void addErfahrung(int erfahrung);
};

class pika : public pokemon {
private:
	std::string name;
	std::string kraft;

public:
	pika();
	pika(std::string name);
	void setName(std::string name);
	std::string getName();
	std::string getKraft();
	~pika();
};