#include "implementation.h"

void implementation::addLine(const DRW_Line &data) {
		std::cout << "-------Line-------\n";
    std::cout << "Start \n X\t Y\n";
    std::cout << data.basePoint.x;
    std::cout << "\t";
    std::cout << data.basePoint.y;
    std::cout << "\n";
    std::cout << "End \n X\t Y\n";
    std::cout << data.secPoint.x;
    std::cout << "\t";
    std::cout << data.secPoint.y;
    std::cout << "\n";
}

void implementation::addCircle(const DRW_Circle& data) {
		std::cout << "-------Circle-------\n";
		std::cout << "Radius:"<<data.radious;
		std::cout << "\nCenter\n";
		std::cout << "X\t Y\n";
		std::cout << data.basePoint.x;
		std::cout << "\t";
		std::cout << data.basePoint.y;
		std::cout << "\n";
}
