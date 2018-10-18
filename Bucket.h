#include <iostream>
#include <string>

using namespace std;

#ifndef BUCKET_H
#define BUCKET_H

class Bucket {
	//only for ExtensibleHableTable, no need to private;
	public:
		int local_depth;
		int size;
		int * valueArr;
		
		Bucket();
		Bucket(int size);

		void insert(int value);
		void remove(int value);
		void clear(int value);
		bool update(int value, int newValue);
		bool find(int value);
		void search(int value);


		bool isFull();
		bool isEmpty();

		string display();

		void sort();

		bool check(int value);


};

#endif 