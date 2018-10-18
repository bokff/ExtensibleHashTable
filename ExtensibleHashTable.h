#include <iostream>
#include <string>
#include "Bucket.h"

using namespace std;

#ifndef EXTENSIBLEHASHTABLE_H
#define EXTENSIBLEHASHTABLE_H

class ExtensibleHashTable{
		
	private:
		int global_depth;
		int bucket_size;
		int directory_size;
		Bucket **bucketArr;

		int hash(int key);
		void split(int key);
		void doubleArr();

		int getSize();
		int getDS();
		int getGD();

	public:
		ExtensibleHashTable();
		ExtensibleHashTable(int size);

		bool find(int key);
		void insert(int key);
		bool remove(int key);
		void print();


};

#endif 