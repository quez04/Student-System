#include <iostream>
using namespace std;
int main(){
	int n;
	int count = 0;
	while(true){
	cout << "\t\t************ He Thong Quan Li Sinh Vien ************"<<endl;
	cout << "Hay nhap viec ban can lam !" <<endl;
	cout <<"1 - Them sinh vien" << "\t\t" << "2 - Xoa sinh vien" <<endl;
	cout <<"3 - Chinh sua sinh vien" << "\t\t" << "4 - Hien thi sinh vien" <<endl;
	cout << "5 - Thoat" <<endl;
	cin >> n;
	switch(n){
		case 1:
			cout << "Chon them sinh vien" <<endl;
			break;
		case 2:
			cout << "Chon them sinh vien" <<endl;
			break;
		case 3:
			cout << "Chon them sinh vien" <<endl;
			break;
		case 4:
			cout << "Chon them sinh vien" <<endl;
			break;
		case 5:
			cout << "Chon thoat" <<endl;
			count = 1;
			break;
		default:
			cout << "Ban da nhap sai ! Hay chon lai" <<endl;
	}
	if(count == 1) break;
	}
	
}
