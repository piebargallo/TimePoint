// C++ program to illustrate time point
// and system clock functions
#include <iostream>
#include <chrono>
#include <ctime>

// Driver code
int main() {
	
	// Using time point and system_clock
	std::chrono::time_point<std::chrono::system_clock> start, end;

	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout << "finished computation at " << std::ctime(&end_time);
	
	return 0;

} // End driver
