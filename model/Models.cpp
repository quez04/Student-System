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
class People: public ChiaseDL{
	private:
		int Tuoi;
		string SDT;
	public:
		//setter
		void setTuoi(int Tuoi){
			this-> = Tuoi;
		}
		void setSDT(string SDT){
			this->SDT = SDT;
		}
		//getter
		int getTuoi(){
			return this->uoi;
		}
		string getSDT(){
			return SDT;
		}
};
// Tao lop giang vien
class Teacher : public People{
	private:
		double Luong;
		int StudentID[5];
	public:
		//setter
		void setLuong(double Luong){
			this->Luong = Luong;
		}
		void setStudentID(int StudentID[5]){
			for(int i=0; i<sizeof(StudentID)/sizeof(StudentID[0]); i++){
				this->StudentID[i] = StudentID[i];
			}
		}
		//getter
		double getLuong(){
			return this->Luong;
		}
		int *setStudentID(){
			return this->StudentID;
		}
};
// Tao lop sinh vien
class Student: public People{
	private:
		double GPA;
		string n;
		Teacher tch[5];
	public:
		//setter
		void setGPA(double GPA){
			this->GPA = GPA;
		}
		
		void setTeacher(Teacher tch[5]){
			for(int i=0; i<sizeof(tch)/sizeof(tch[0]); i++){
				this->tch[i] = tch[i];
			}
		}
		//getter
		double getGPA(){
			return this->GPA;
		}
		Teacher * getTeacher(){
			return this->tch;
		}
		
};
//Tao lop khoa hoc
class KhoaHoc{
	private:
		double Gio;
	public:
		//setter
		void setGio(double Gio){
			this->Gio = Gio
		}
};
