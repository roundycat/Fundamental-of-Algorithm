/* ������� ���� */
#include "preimplemented.h"


/* AVL Ʈ�� ��� ���� �Լ� */
AVLNode* insertAVLTree(AVLNode* node, int key) {
	/*
		INPUT:
			AVLNode* node: ������ ��� (���� ȣ�� �� �ַ� root ���)
			int key: ������ Ű ��

		OUTPUT:
			AVLNode*: ���Ե� ��� (���� ȣ�� �� �ַ� root ���)

		DESCRIPTION:
			AVL Ʈ���� ��带 �����ϴ� �Լ�.
			������ ��ġ�� ��������� ã�� �����ϰ�,
			���� �� ������ ���߱� ���� ȸ�� ������ �����Ѵ�.
			���ο� ��带 ���� ���� createNode �Լ��� ����ϰ�,
			balance factor ����� getBalanceFactor �Լ��� ����Ѵ�.
			����, ȸ�� ������ rotateLL, rotateRR, rotateLR, rotateRL �Լ��� ����Ѵ�.
	*/

	/* ==================== FILL YOUR CODE ==================== */

	// ��尡 NULL�� ��� ���ο� ��� ���� (createNode �Լ� ���)


	// if ������ Ű ���� ���� ����� Ű ������ ���� ��� ���� ����Ʈ���� ���� (��� ȣ��)
	// else if ������ Ű ���� ���� ����� Ű ������ ū ��� ������ ����Ʈ���� ���� (��� ȣ��)
	// else ������ Ű ���� ���� ����� Ű ���� ���� ��� ���� ���� �޽��� ���


	// ����� balance factor ���


	// balanceFactor ���� ���� LL/RR/LR/RL ȸ�� ����


	/* ================= YOUR CODE ENDS HERE ================== */

	// ���Ե� ��� ��ȯ
	return node;
}


/* AVL Ʈ���� LL ȸ�� */
AVLNode* rotateLL(AVLNode* pNode) {
	/*
		INPUT:
			AVLNode* pnode: LL ȸ���� ������ ���

		OUTPUT:
			AVLNode*: ȸ���� ���

		DESCRIPTION:
			AVL Ʈ���� LL ȸ���� �����ϴ� �Լ�.
	*/

	/* ==================== FILL YOUR CODE ==================== */



	/* ================= YOUR CODE ENDS HERE ================== */
}


/* AVL Ʈ���� RR ȸ�� */
AVLNode* rotateRR(AVLNode* pNode) {
	/*
		INPUT:
			AVLNode* pnode: RR ȸ���� ������ ���

		OUTPUT:
			AVLNode*: ȸ���� ���

		DESCRIPTION:
			AVL Ʈ���� RR ȸ���� �����ϴ� �Լ�.
	*/

	/* ==================== FILL YOUR CODE ==================== */



	/* ================= YOUR CODE ENDS HERE ================== */
}


/* AVL Ʈ���� LR ȸ�� */
AVLNode* rotateLR(AVLNode* pNode) {
	/*
		INPUT:
			AVLNode* pnode: LR ȸ���� ������ ���

		OUTPUT:
			AVLNode*: ȸ���� ���

		DESCRIPTION:
			AVL Ʈ���� LR ȸ���� �����ϴ� �Լ�. (������ ������ LL, RR ȸ�� �Լ� ���)
	*/

	/* ==================== FILL YOUR CODE ==================== */



	/* ================= YOUR CODE ENDS HERE ================== */
}


/* AVL Ʈ���� RL ȸ�� */
AVLNode* rotateRL(AVLNode* pNode) {
	/*
		INPUT:
			AVLNode* pnode: RL ȸ���� ������ ���

		OUTPUT:
			AVLNode*: ȸ���� ���

		DESCRIPTION:
			AVL Ʈ���� RL ȸ���� �����ϴ� �Լ�. (������ ������ LL, RR ȸ�� �Լ� ���)
	*/

	/* ==================== FILL YOUR CODE ==================== */



	/* ================= YOUR CODE ENDS HERE ================== */
}


/* ����� height ���ϴ� �Լ� */
int getHeight(AVLNode* node) {
	/*
		INPUT:
			AVLNode* node: ���̸� ���� ���

		OUTPUT:
			int: ����� ����

		DESCRIPTION:
			AVL ����� ���̸� ��������� ���ϴ� �Լ�.
	*/

	/* ==================== FILL YOUR CODE ==================== */

	// ��尡 NULL�� ��� 0 ��ȯ

	// ���� ����Ʈ���� ���̿� ������ ����Ʈ���� ���� �� ū ���� 1�� ���� �� ��ȯ (��� ȣ��)

	/* ================= YOUR CODE ENDS HERE ================== */
}


/* ����� balance factor ���ϴ� �Լ� */
int getBalanceFactor(AVLNode* node) {
	/*
		INPUT:
			AVLNode* node: balance factor�� ���� ���

		OUTPUT:
			int: ����� balance factor

		DESCRIPTION:
			AVL ����� balance factor�� ���ϴ� �Լ�.
			getHeight �Լ��� ����Ͽ� ���� ����Ʈ���� ������ ����Ʈ���� ���̸� ���ϰ�,
			�� ������ ���̸� ��ȯ�Ѵ�.
	*/

	/* ==================== FILL YOUR CODE ==================== */

	// ��尡 NULL�� ��� 0 ��ȯ

	// ���� ����Ʈ���� ���� - ������ ����Ʈ���� ���� ��ȯ

	/* ================= YOUR CODE ENDS HERE ================== */
}


/* main �Լ� */
int main() {
	/* AVL Ʈ�� ���� �� ��� */
	AVLNode* AVLTree = buildAVLTreeFromFile("data.txt");
	printAVLTree(AVLTree, 0);
	return 0;
}