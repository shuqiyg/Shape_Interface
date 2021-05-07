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
#define _CRT_SECURE_NO_WARNINGS
#ifndef SDDS_LINE_H
#define SDDS_LINE_H
#include "LblShape.h"
namespace sdds {
	class Line : public LblShape {
		int m_length;
	public:
		Line();
		Line(const string&, int);
		virtual void draw(std::ostream&) const;
		virtual void getSpecs(std::istream&);
	};
}
#endif