#include <iostream> 
int main()
{
	int x, y, total;
	
	std::cout << "What do you want to add?" << std::endl;
    std::cin >> x >> y;
    total = x + y;
    std::cout << "This equals" << total << std::endl;

    return 0;
}
