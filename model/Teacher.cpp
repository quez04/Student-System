#include "People.cpp"
class GiangVien : public Nguoi{
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
