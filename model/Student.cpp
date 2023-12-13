#include "People.cpp"
#include "Teacher.cpp"
class HocSinh: public Nguoi{
	private:
		double GPA;
		string n;
		GiangVien a[5];
	public:
		//setter
		void setGPA(double GPA){
			GPA = GPA;
		}
		//getter
		double getGPA(){
			return GPA;
		}
		
		
};
