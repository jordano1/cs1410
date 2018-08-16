class Money {
public:
	Money();
	void getDollars(int);
	void getCents(int);
	void display();
	void concat(const Money&);
	void operator+(const Money&);
	void operator-(const Money&);
	
	~Money();

private:
	Money(int, int);
	int dollars;
	int cents;
};