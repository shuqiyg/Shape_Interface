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

#include "LblShape.h"
namespace sdds {
	void LblShape::getSpecs(std::istream& istr) {
		string Str;
		getline(istr,Str, ',');
		set(Str);
	}
	LblShape::LblShape() {}
	LblShape::LblShape(const string Str) {
		set(Str);
	}
	void LblShape::set(const string& Str) {
		delete[] m_label;
		m_label = new char[strlen(Str.c_str()) + 1];
		strcpy(m_label, Str.c_str());
	}
	LblShape::~LblShape() {
		delete[] m_label;
		m_label = nullptr;
	}
	 char* LblShape::label()const {
		return m_label;
	}
}