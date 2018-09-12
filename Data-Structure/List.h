#pragma once
template <typename T>
struct ListNode
{
	ListNode(T _data)
		:
		data(_data),
		pNext(nullptr)
	{}
	T data;
	ListNode* pNext;
};

template <typename T>
class List
{
public:
	List()
		:
		mListHead(nullptr)
	{};
	~List() = default;
	bool InitList()
	{
		return true;
	};
	void DestroyList()
	{

	};
	void ClearList()
	{

	};
	bool IsEmpty() const
	{
		return mListHead ? true : false;
	};
	size_t ListLength()const
	{
		auto count = 0;
		ListNode<T> * node = mListHead;
		while (node != nullptr)
		{
			count++;
			node = node->pNext;
		}
		return count;
	};
	ListNode<T>* GetElem(const size_t index)
	{
		ListNode<T> * node = mListHead;
		size_t tempIndex = 0;
		while (tempIndex < index)
		{
			tempIndex++;
			node = node->pNext;
		}
		return node;
	};
	ListNode<T>* PriorElem()
	{
		return nullptr;
	};
	ListNode<T>* NextElem()
	{
		return nullptr;
	};
	//Insert node at last.
	bool ListInsert(T data)
	{
		auto* node = new ListNode<T>(data);
		if (!mListHead)
		{
			mListHead = node;
			return true;
		}
		ListNode<T>* pNode = mListHead;
		while (pNode->pNext)
		{
			pNode = pNode->pNext;
		};
		pNode->pNext = node;
		return true;
	}
	//Insert node before index and the List[index] exist.
	bool ListInsert(T data, const size_t index)
	{
		auto* node = new ListNode<T>(data);
		if (index == 0)
		{
			return ListInsertAtHead(node);
		}
		if (index >= ListLength())
		{
			return false;
		}
		ListNode<T>* pNode = mListHead;
		size_t tempIndex = 0;
		while (tempIndex + 1 < index)
		{
			pNode = pNode->pNext;
			tempIndex++;
		}
		ListNode<T>* pNodeTemp = pNode->pNext;
		pNode->pNext = node;
		node->pNext = pNodeTemp;
		return true;
	};
	T ListDelete(size_t index)
	{
		T value;
		return value;
	}
private:
	bool ListInsertAtHead(ListNode<T>* head)
	{
		if (!mListHead)
		{
			mListHead = head;
		}
		else
		{
			head->pNext = mListHead;
			mListHead = head;
		}
		return true;
	}
private:
	ListNode<T>* mListHead;
};