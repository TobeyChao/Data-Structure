#pragma once
template<typename T>
class BinaryTree
{
public:
	BinaryTree()
		:
		mLeftChild(nullptr),
		mRightChild(nullptr)
	{}

	BinaryTree * mLeftChild;
	BinaryTree * mRightChild;
	T mElement;
};