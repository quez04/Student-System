#include "../model/Models.cpp"
#include <bits/stdc++.h>
using namespace std;

/////////////////student////////////
class khoSV{
	public:
		virtual int ThemSV(SinhVien SV);
};
class khoSVImpl: public khoSV{
	private:
		SinhVien Sinhvien[25];
		int i=0;
	public:
		int ThemSV(SinhVien SV){
			if(i==25) cout << "Da du sinh vien"<<endl;
			else{
				Sinhvien[i] = SV;
				i++;
			}
		}
};

/////////////////course////////////
class khoKH{
	public:
		virtual int ThemKH(KhoaHoc KH);
};
class khoKHImpl: public khoKH{
	private:
		KhoaHoc Khoahoc[25];
		int i=0;
	public:
		int ThemKH(KhoaHoc KH){
			if(i==25) cout << "Da du khoa hoc"<<endl;
			else{
				Khoahoc[i] = KH;
				i++;
			}
		}
};

/////////////////teacher////////////
class khoGV{
	public:
		virtual int ThemGV(GiangVien GV);
};
class khoGVImpl: public khoGV{
	private:
		GiangVien Giangvien[25];
		int i=0;
	public:
		int ThemGV(GiangVien GV){
			if(i==25) cout << "Da du giang vien"<<endl;
			else{
				Giangvien[i] = GV;
				i++;
			}
		}
};
