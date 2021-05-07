/* W08 LAB
   Name: Shuqi Yang
   Std ID: 132162207
   Email: syang136@myseneca.ca
   Date: 03-23-2021
   -------------------------------------------------------
   I have done all the coding by myself and only copied the
   code that my professor provided to complete my workshops
   and assignments.
 */
#ifndef SDDS_LBLSHAPE_H
#define SDDS_LBLSHAPE_H

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
#include <limits.h>
#include "Shape.h"

using namespace std;
namespace sdds {
	class LblShape : public Shape {
		char* m_label{ nullptr };
	public:
		virtual void draw(std::ostream&) const = 0;
		virtual void getSpecs(std::istream&);
		void set(const string&);
		LblShape();
		LblShape(const string);
	    ~LblShape();
		LblShape(const LblShape&) = delete;
		LblShape& operator=(const LblShape&) = delete;
	protected:
		 char* label()const;
	};
}
#endif