// Exam01.c

/*
	�ϳ��� ������Ʈ���� �ϳ��� main()�� ������ �� �ִ�.

	�׷��� �ҽ������� �߰��ϸ鼭 ������ ���� ������ �ҽ����ϵ��� ���忡�� ���ܽ�Ų��.
		1. �ҽ����� ��Ŭ�� -> �Ӽ� -> ���忡�� ���� �׸��� '��'��
		2. �ش� �ҽ������� �����ܿ� ���� ���׶�̰� �����.
		3. �����Ű�� ���� main() �Լ��� �ִ� �ҽ������� �����ϰ� ������ ���忡�� ����
*/

#include <stdio.h>

void main() {
	/*
		1. ������
			- char �ڷ����� ������������ '1�� ����'�� ǥ���� �� ����Ѵ�.
				> 1�� ���ڴ� ��������ǥ�� ���´�.
				> ������ '�ƽ�Ű�ڵ�ǥ'�� �´� ���ڷ� ��ȯ�Ͽ� ǥ���Ѵ�.
					�ƽ�Ű�ڵ� : ���ڸ� ǥ���ϱ� ���� �ڵ� ü��
	*/
	char cValue = 'A'; // A ���ڸ� �����ϸ� ���� cValue ���� ���� 65�� ���Եȴ�(�ƽ�Ű�ڵ� ����).
	int iValue = 65;
	
	printf("cValue ���� : %c\n", cValue);
	printf("cValue ���� : %d\n", cValue);

	printf("iValue ���� : %c\n", iValue);
	printf("iValue ���� : %d\n", iValue);
	
	// printf()�� ���Ĺ��� �ɼ�
	printf("[%d]\n", iValue);
	printf("[%d]\n", iValue); // [n] : �ڸ��� ���� (n��ŭ ���� Ȯ�� �� ����)
	printf("[%5d]\n", iValue); // [5] : �ڸ��� ���� (5��ŭ ���� Ȯ�� �� ����)
	printf("[%d]\n", iValue); // [-] : �ڸ��� ���� �� ���� ����
	printf("[%-5d]\n", iValue); // [-5] : �ڸ��� ���� �� -5��ŭ ���� ����
	printf("[%d]\n", iValue); // [0] : �ڸ��� ���� �� �� �ڸ��� 0���� ä��
	printf("[%05d]\n", iValue); // [05] : �ڸ��� ���� �� 5��ŭ Ȯ���� ���� �� �� �ڸ��� 0���� ä��, ���� ���Ľ� ������� ����
}