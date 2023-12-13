#include <iostream>
using namespace std;
// Create model people
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
// Create model teacher
class Teacher : public People{
	private:
		double Luong;
		int StudentID[5];
	public:
		//setter
		void setLuong(double Luong){
			Luong = Luong;
		}
		void setStudentID(int StudentID[5]){
			for(int i=0; i<5; i++){
				StudentID[i] = StudentID[5];
			}
		}
		//getter
		double getLuong(){
			return Luong;
		}
		int *setStudentID(){
			return StudentID;
		}
};
// Create model student
class Student: public People{
	private:
		double GPA;
		string n;
		Teacher tch[5];
	public:
		//setter
		void setGPA(double GPA){
			GPA = GPA;
		}
		void setTeacher(Teacher tch[5]){
			for(int i=0; i<5; i++){
				tch[i] = tch[i];
			}
		}
		//getter
		double getGPA(){
			return GPA;
		}
		Teacher * getTeacher(){
			return tch;
		}
		
};
