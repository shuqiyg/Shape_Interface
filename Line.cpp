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
#include "Line.h"
namespace sdds {
	Line::Line():LblShape() {
		m_length = 0;
	}
	Line::Line(const string& Str, int length): LblShape(Str){
		m_length = length;
	}
	void Line::draw(std::ostream& ostr) const {
		if (m_length > 0 && label() != nullptr) {
			ostr << label() << endl;
			for (int i = 0; i < m_length; i++) {
				ostr << '=';
			}
		}
	}
	void Line::getSpecs(std::istream& istr) {
		LblShape::getSpecs(istr);
		istr >> m_length;
		istr.ignore(INT_MAX, '\n');
	}
}