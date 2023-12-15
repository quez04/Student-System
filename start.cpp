#include <iostream>
using namespace std;
void hienthiluachon(){
	cout << "\t\t************ He Thong Quan Li Sinh Vien ************"<<endl;
	cout << "Hay nhap viec ban can lam !" <<endl;
	cout <<"1 - Sinh Vien" << "\t\t" << "2 - Khoa Hoc" <<endl;
	cout <<"3 - Giang Vien" << "\t\t" << "4 - Thoat" <<endl;
}
void hienthiDS(string gt){
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
