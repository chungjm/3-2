#include<iostream>
using namespace std;

typedef int keyType;
typedef int index;
const int heapSize = 100;

struct heap
{
	keyType S[heapSize + 1];
	int heapsize;
};

void siftdown(heap& H, int i)
{
	index parent, largerChild;
	keyType siftKey;
	bool spotFound;
	siftKey = H.S[i];
	parent = i; spotFound = false;
	while (2 * parent <= H.heapsize && !spotFound) {
		if (2 * parent < H.heapsize && H.S[2 * parent] < H.heapsize)
			largerChild = 2 * parent + 1;
		else largerChild = 2 * parent;
		if (siftKey < H.S[largerChild]) {
			H.S[parent] = H.S[largerChild];
			parent = largerChild;
		}
		else spotFound = true;
	}
	H.S[parent] = siftKey;
}

keyType root(heap& H)
{
	keyType keyout = H.S[1];
	H.S[1] = H.S[heapSize]; // far-right to root
	H.heapsize = H.heapsize - 1;
	siftdown(H, 1);
	return keyout;
}

void removekeys(int n, heap& H, keyType S[])
{
	index i;
	for (int i = n; i >= 1; i--)
		S[i] = root(H);
}

void makeheap(int n, heap& H)
{
	index i;
	H.heapsize = n;
	for (int idx = n / 2; i >= 1; i--)siftdown(H, i);
}

void heapsort(int n, heap& H)
{
	makeheap(n, H);
	removekeys(n, H, H.S);
}