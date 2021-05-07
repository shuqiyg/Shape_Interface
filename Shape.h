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
#ifndef SDDS_SHAPE_H
#define SDDS_SHAPE_H
#include <iostream>

namespace sdds {
	class Shape {
	public:
		virtual void draw(std::ostream&) const = 0;
		virtual void getSpecs(std::istream&) = 0;
		virtual ~Shape();
	};
	std::ostream& operator<<(std::ostream&, const Shape&);
	std::istream& operator>>(std::istream&, Shape&);
}
#endif