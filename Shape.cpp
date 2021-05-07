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

#include "Shape.h"
namespace sdds {
	Shape::~Shape() {};
	std::ostream& operator<<(std::ostream& ostr, const Shape& sp) {
		sp.draw(ostr);
		return ostr;
	}
	std::istream& operator>>(std::istream& istr, Shape& sp) {
		 sp.getSpecs(istr);
		 return istr;
	}
}