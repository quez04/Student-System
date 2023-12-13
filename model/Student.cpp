#include "People.cpp"
class Student: public People{
	private:
		double GPA;
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
