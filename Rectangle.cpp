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
#include "Rectangle.h"
namespace sdds {
	Rectangle::Rectangle() : LblShape(){
		m_width = 0;
		m_height = 0;
	}
	Rectangle::Rectangle(const string& Str, const int& width, const int& height) : LblShape(Str) {
		m_width = width;
		m_height = height;
		if (m_width < int(strlen(label()) + 2) || m_height < 3) {
			m_width = 0;
			m_height = 0;
		};
	}
	void Rectangle::draw(std::ostream& ostr) const {
		if (m_height > 0 && m_width > 0) {
			int i, j;
			ostr << '+';
			for (i = 0; i < m_width - 2; i++) {
				ostr << '-';
			}
			ostr <<'+' << endl << '|';
			ostr.width(m_width-2);
			ostr.setf(ios::left);
			ostr << label() << '|' << endl;
			for (j = 0; j < m_height - 3; j++) {
				ostr << '|';
				for (i = 0; i < m_width - 2; i++) {
					ostr << ' ';
				}
				ostr << '|' << endl;
			}
			ostr << '+';
			for (i = 0; i < m_width - 2; i++) {
				ostr << '-';
			}
			ostr << '+';		
		}
	}
	void Rectangle::getSpecs(std::istream& istr) {
		LblShape::getSpecs(istr);
		istr >> m_width;
		istr.ignore();
		istr >> m_height;
		istr.ignore(INT_MAX, '\n');
	}
}