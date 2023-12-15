#include "../model/Repository.cpp"

class dvSV{
	public:
		virtual int ThemSV(SinhVien SV) = 0;
};
class dvSVImpl: public dvSV{
	private:
		KhoSV khoSV;
	public:
		int ThemSV(SinhVien SV){
			return khoSV.ThemSV(SV);
		}	
};
//////////////////////////////////////////////////
class dvKH{
	public:
		virtual int ThemKH(KhoaHoc KH) = 0;
};
class dvKHImpl: public dvKH{
	private:
		KhoKH khoKH;
	public:
		int ThemKH(KhoaHoc KH){
			return khoKH.ThemKH(KH);
		}	
};
////////////////////////////////////////////////////
class dvGV{
	public:
		virtual int ThemGV(GiangVien GV) = 0;
};
class dvGVImpl: public dvGV{
	private:
		KhoGV khoGV;
	public:
		int ThemGV(GiangVien GV){
			return khoGV.ThemGV(GV);
		}	
};
