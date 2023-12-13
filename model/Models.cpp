#include <iostream>
using namespace std;
//Tao lop chia se du lieu
class ChiaseDL{
	private:
		int ID;
		string Ten;
	public:
		//setter
		void setID(int ID){
			this->ID = ID;
		}
		void setTen(string Ten){
			this->Ten = Ten;
		}
		//getter
		int getID(){
			return this->ID;
		}
		string getTen(){
			return this->Ten;
		}
};
// Tao lop nguoi
class Nguoi: public ChiaseDL{
	private:
		int Tuoi;
		string SDT;
	public:
		//setter
		void setTuoi(int Tuoi){
			this->Tuoi = Tuoi;
		}
		void setSDT(string SDT){
			this->SDT = SDT;
		}
		//getter
		int getTuoi(){
			return this->Tuoi;
		}
		string getSDT(){
			return SDT;
		}
};
//Tao lop khoa hoc
class KhoaHoc: public ChiaseDL{
	private:
		double Gio;
	public:
		//setter
		void setGio(double Gio){
			this->Gio = Gio
		}
};
// Tao lop giang vien
class GiangVien : public Nguoi{
	private:
		double Luong;
		int IDSinhVien[5];
	public:
		//setter
		void setLuong(double Luong){
			this->Luong = Luong;
		}
		void setIDSinhVien(int IDSinhVien[5]){
			for(int i=0; i<sizeof(IDSinhVien)/sizeof(IDSinhVien[0]); i++){
				this->IDSinhVien[i] = IDSinhVien[i];
			}
		}
		//getter
		double getLuong(){
			return this->Luong;
		}
		int *setIDSinhVien(){
			return this->IDSinhVien;
		}
};
// Tao lop sinh vien
class SinhVien: public Nguoi{
	private:
		double GPA;
		string n;
		GiangVien GV[5];
		KhoaHoc KH[5];
	public:
		//setter
		void setGPA(double GPA){
			this->GPA = GPA;
		}
		
		void setGV(GiangVien GV[5]){
			for(int i=0; i<sizeof(GV)/sizeof(GV[0]); i++){
				this->GV[i] = GV[i];
			}
		}
		void setKH(KhoaHoc KH[5]){
			for(int i=0; i<sizeof(KH)/sizeof(KH[0]); i++){
				this->KH[i] = KH[i];
			}
		}
		//getter
		double getGPA(){
			return this->GPA;
		}
		GiangVien * getGV(){
			return this->GV;
		}
		KhoaHoc * getKH(){
			return this->KH;
		}
};

