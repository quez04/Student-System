#include "People.cpp"
class Teacher : public People{
	private:
		double Luong;
	public:
		//setter
		void setLuong(double Luong){
			Luong = Luong;
		}
		//getter
		double getLuong(){
			return Luong;
		}
};
