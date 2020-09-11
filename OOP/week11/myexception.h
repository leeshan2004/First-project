#pragma once
class MyException {
public:
	const void* sender; // ���ܸ� throw�� ��ü�� �ּ�
	const char* description; // ���ܿ� ���� ����
	int info; // �ΰ� ����

	MyException(const void* sender, const char* description, int info) {
		this->sender = sender;
		this->description = description;
		this->info = info;
	}
};