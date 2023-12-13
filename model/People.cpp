#include <iostream>
using namespace std;
class People{
	private:
		int ID;
		string Hoten;
		int Tuoi;
		string SDT;
	public:
		//setter
		void setID(int ID){
			ID = ID;
		}
		void setHoten(string Hoten){
			Hoten = Hoten;
		}
		void setTuoi(int Tuoi){
			Tuoi = Tuoi;
		}
		void setSDT(string SDT){
			SDT = SDT;
		}
		//getter
		int getID(){
			return ID;
		}
		string getHoten(){
			return Hoten;
		}
		int getTuoi(){
			return Tuoi;
		}
		string getSDT(){
			return SDT;
		}
};
