/*
 * arrayInt.h
 *
 *  Created on: 23 abr. 2020
 *      Author: Aritz
 */

#ifndef CONTAINERS_ARRAYINT_H_
#define CONTAINERS_ARRAYINT_H_

namespace containers
{
	class ArrayInt
	{
	private:
		unsigned int capacity;
		int *array;

	public:
		ArrayInt();
		ArrayInt(unsigned int capacity);
		~ArrayInt();

		void setValue(unsigned int index, int data);
		int getValue(unsigned int index);
		void setCapacity(unsigned int capacity);
		unsigned int getCapacity();
	};
}

#endif /* CONTAINERS_ARRAYINT_H_ */
