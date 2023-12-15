#include <iostream>
#include "model/Models.cpp"
#include "controller/Controller.cpp"
using namespace std;
void hienthiluachon(){
	cout << "\t\t************ He Thong Quan Li Truong Hoc ************"<<endl;
	cout << "Hay nhap viec ban can lam !" <<endl;
	cout <<"1 - Sinh Vien" << "\t\t" << "2 - Khoa Hoc" <<endl;
	cout <<"3 - Giang Vien" << "\t\t" << "4 - Thoat" <<endl;
}
void hienthiDS(string gt){
	cout << "\t\t************ Quan Li "<<gt<<" ************"<<endl;
	cout <<"1 - Them " <<gt<< "\t\t" << "2 - Xoa " <<gt<<endl;
	cout <<"3 - Chinh sua " <<gt<<"\t\t" << "4 - Hien thi " <<gt<<endl;
	cout << "5 - Thoat" <<endl;
}
int main(){
	int n;
	int count = 0;
	while(true){
		hienthiluachon();
		cin >> n;
		switch(n){
			case 1:
				hienthiDS("Sinh Vien");
				int nSV; cin >> nSV; cin.ignore();
				if(nSV == 1){
					cout <<"Hay nhap du lieu cho sinh vien: "<<endl;
					SinhVien SV;
					cout <<"Ten sinh vien: ";
					string Ten;
					getline(cin, Ten);
					SV.setTen(Ten);
					cout <<"Tuoi sinh vien: ";
					int Tuoi;
					cin >> Tuoi; cin.ignore();
					SV.setTuoi(Tuoi);
					cout <<"So dien thoai sinh vien: ";
					string SDT;
					getline(cin, SDT);
					SV.setSDT(SDT);
					cout <<"GPA sinh vien: ";
					double GPA;
					cin >> GPA; cin.ignore();
					SV.setGPA(GPA);
					DkSV dkSV;
					dkSV.ThemSV(SV);
					cout << SV.getTen() <<" " << SV.getTuoi() <<" " << SV.getSDT() <<" " << SV.getGPA() <<endl;
				}
				break;
			case 2:
				hienthiDS("Khoa Hoc");
				break;
			case 3:
				hienthiDS("Giang Vien");
				break;
			case 4:
				cout << "Thoat" <<endl;
				count = 1;
				break;
			default:
				cout << "Ban da nhap sai ! Hay chon lai" <<endl;
		}
		if(count == 1) break;
	}
	
}
