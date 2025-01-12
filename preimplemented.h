#pragma once


/* scanf �� fscanf ����� ���� ���� ��� ���� */
#define _CRT_SECURE_NO_WARNINGS


/* ���̺귯�� �� ������� ���� */
#include <stdio.h>
#include <stdlib.h>


/* AVL Ʈ�� ��� ����ü */
typedef struct AVLNode {
	int key;				// ����� Ű ��

	struct AVLNode* left;   // ���� �ڽ� ���
	struct AVLNode* right;  // ������ �ڽ� ���
} AVLNode;


/* �Լ� ������Ÿ�� ���� (�����ؾ� �ϴ� �Լ����Դϴ�.) */
AVLNode* insertAVLTree(AVLNode* node, int key);
AVLNode* rotateLL(AVLNode* pNode);
AVLNode* rotateRR(AVLNode* pNode);
AVLNode* rotateLR(AVLNode* pNode);
AVLNode* rotateRL(AVLNode* pNode);
int getHeight(AVLNode* node);
int getBalanceFactor(AVLNode* node);


/* AVL Ʈ�� ��� ���� �Լ� */
AVLNode* createNode(int key) {
	/*
		INPUT:
			int std_num: �й�
			const char* std_name: �̸�

		OUTPUT:
			AVLNode*: ������ ���

		DESCRIPTION:
			�й��� �̸��� �Է¹޾� AVL ��带 �����ϴ� �Լ�.
	*/

	// ��� ���� �Ҵ�
	AVLNode* newNode = (AVLNode*)malloc(sizeof(AVLNode));
	if (newNode == NULL) {
		printf("Failed to allocate memory\n");
		exit(1);
	}

	// ��� �ʱ�ȭ
	newNode->key = key;

	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}


/* AVL Ʈ�� ��� ��� �Լ� */
void printAVLTree(AVLNode* node, int level) {
	/*
		INPUT:
			AVLNode* node: ����� ���
			int level: ����� ����

		DESCRIPTION:
			AVL Ʈ���� ���� ������� ����ϴ� �Լ�.
	*/

	// ��尡 NULL�� ��� ��ȯ
	if (node == NULL) return;

	// ������ ����Ʈ�� ���
	printAVLTree(node->right, level + 1);

	// ���� ��� ���
	for (int i = 0; i < level; i++) {
		printf("    ");
	}
	printf("%d\n", node->key);

	// ���� ����Ʈ�� ���
	printAVLTree(node->left, level + 1);
}


/* ���Ϸκ��� AVL Ʈ�� �����ϴ� �Լ� */
AVLNode* buildAVLTreeFromFile(const char* filename) {
	/*
		INPUT:
			const char* filename: AVL Ʈ���� ������ ���� �̸�

		OUTPUT:
			AVLNode*: ����� AVL Ʈ��

		DESCRIPTION:
			���Ϸκ��� AVL Ʈ���� �����ϴ� �Լ�.
	*/

	// ���� ������ ����
	FILE* fp;

	// AVL Ʈ�� ��Ʈ ��� ����
	AVLNode* root = NULL;

	// ���� ����
	if (fopen_s(&fp, filename, "r") != 0) {
		printf("������ �� �� �����ϴ�.\n");
		exit(1);
	}

	// ���Ϸκ��� �й��� �о� AVL Ʈ���� ����
	int key;
	while (fscanf(fp, "%d", &key) != EOF) {
		root = insertAVLTree(root, key);
		printAVLTree(root, 0);
		printf("==========================================\n");
	}

	// ���� �ݱ�
	fclose(fp);

	// AVL Ʈ�� ��Ʈ ��� ��ȯ
	return root;
}