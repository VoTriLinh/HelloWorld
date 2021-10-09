#include "stdafx.h"
#include <iostream>

int main(int argc, char* argv[])
{
	if (nullptr == argv) {
		std::cout << "argv is empty";
		return S_FALSE;
	}

	std::cout << "Number Parameter: " << argc << std::endl;
	std::cout << "Parameters: ";

	for (int i = 0; i < argc; i++) {
		char* arg = argv[i];
		if (nullptr == arg) {
			std::cout << "argv[" << i << "] is empty";
			return S_FALSE;
		}

		std::cout << argv[i] << " ";
	}

	std::cout << std::endl << "Success!!!";
	return S_OK;
}
