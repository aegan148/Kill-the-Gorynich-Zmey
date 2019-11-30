#include <iostream>

class zmey {
public:
	zmey(const int& h, const int& t);        //construct
	void strike();               //hit logic 
	bool is_Win();               //check win
	int count_Strike();          //return number of strike

private:
	int counter;
	int head;
	int teal;
};
///////////////////////////////
zmey::zmey(const int& h, const int& t) {
	this->head = h;
	this->teal = t;
	counter = 0;
}
///////////////////////////////
int zmey::count_Strike() { return counter; }
///////////////////////////////
bool zmey::is_Win(){
	if ((head == 0)&&(teal==0)) { return false; }
};
////////////////////////////
void zmey::strike () {
	if (teal != 0) {
		if (teal == 1) {
			teal += 1;
			std::cout << "Zmey got hit! +2 teals!\n";
			counter++;
			return;
		}
		else {
			teal -= 2;
			head += 1;
			std::cout << "Zmey got hit! -2 teals& +1 head!\n";
			counter++;
			return;
		}
	}
		//////////////////// if teal==0
		if (head == 1) {
			head += 1;
			std::cout << "Zmey got hit! +1 head!\n";
			counter++;
			return;
		}
		if((head !=1)||(teal==0)) {
			head -= 2;
			std::cout << "Minus 2 head!!\n";
			counter++;
		}
		if (head == 0) { std::cout << "You won!!!\n";
		return;
		}
	return;
}
//////////////////////////////////////////

int main() {
	int temp_head, temp_teal;
	
	std::cout << "Enter the numbers of head\n";
	std::cin >> temp_head;
	std::cout << "Enter the numbers of teal\n";
	std::cin >> temp_teal;
	std::cout <<"_____________________________________"<< std::endl;

	zmey a(temp_head,temp_teal);//creating obj zmey
	
	while (a.is_Win()) {		//while zmey is alive
		std::cout <<std::endl<< "One hit by knife -------->\n";
		a.zmey::strike();
		std::cout << std::endl;
	};

	std::cout <<"Zmey was killed by "<< a.count_Strike() << " strike!";
	
}
