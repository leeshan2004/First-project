//#include "docwriter.h"
//#include "htmlwriter.h"
//void main() {
//	// Down Casting
//	//HTMLWriter hw;
//	//DocWriter* pdw = &hw; // up cast
//	//HTMLWriter* phw = (HTMLWriter*)pdw; // down cast
//	//phw->Write();
//
//
//	// Up Casting
//
//	// Ok (�θ� Ŭ���� ���۷��� ��� ����)
//	//HTMLWriter hw("test.html", "�θ�Ŭ���� ���۷��� �̿�");
//	//DocWriter& dw = hw;
//	//dw.Write();
//
//	// Ok (�θ� Ŭ������ Write ����)
//	//HTMLWriter hw("test.html", "�θ�Ŭ���� ������ �̿�");
//	//DocWriter* pdw = &hw;
//	//pdw->Write();
//
//
//	// Ok
//	//HTMLWriter hw;
//	//DocWriter* pdw = &hw;
//	//HTMLWriter hw;
//	//DocWriter& pdw = hw;
//
//	// Fail
//	//DocWriter dw;
//	//HTMLWriter& phw = dw;
//	//DocWriter dw;
//	//HTMLWriter* phw = &dw;
//
//	//HTMLWriter hw("test.html","��ü�� ����");
//	//DocWriter dw;
//	////hw = dw;  // �ڽ� ��ü�� �θ� ��ü ���� �Ұ�
//	////dw = hw; // �θ� ��ü�� �ڽ� ��ü ���� ����
//	////dw.Write();
//	//hw.Write();
//}