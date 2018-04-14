#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <algorithm>   
using namespace std;

bool neparan(int i) {
	return ((i % 2) == 1);
}


void main() {
	array<int, 10> polje{ 1, 2, 3, 4, 5, 6, 7, 8 };
	if (all_of(polje.begin(), polje.end(), [](int i) {return i % 2; }))
	{
		cout << "svi brojevi su parni.";
	}
	else
	{
		cout << "nisu parni." << endl;
	} // all_of

	vector<int> vektor{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int>::iterator it = find_if(vektor.begin(), vektor.end(), neparan);
	cout << "prvi neparan broj je: " << *it;
	// find_if

	int myints[] = { 5,20,5,5,30,20,10,10,20 };
	std::vector<int> myvector(myints, myints + 8);
	std::vector<int>::iterator it;

	it = std::adjacent_find(++it, myvector.end(), neparan);

	if (it != myvector.end())
		std::cout << "the second pair of repeated elements are: " << *it << '\n';
	
	

}