#include "docwriter.h"
#include "htmlwriter.h"

void main() {
	HTMLWriter hw("gta.html", "Ʈ���� �ʸ���"); // �θ� Ŭ������ ������ Ȱ��
	hw.Write(); // �ڽ� Ŭ������ �������̵� �� html ���� �޼���

	//DocWriter dw;
	//dw.Write();

	//DocWriter dw;
	//dw.SetFileName("exam.txt");
	//dw.SetContent("���� �ߺ�!");
	//dw.Write();

	//DocWriter dw("assignment.txt","���� ����~~");
	//dw.Write();
}