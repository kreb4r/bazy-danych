

#include "pch.h"
#include <iostream>
#include <vector>

void wypisz(int a)
{
	std::cout << a << '\n';
}

void wypisz(std::vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		std::cout << tab[i] << ",";
	}
}


int main()
{
	std::vector<int>tab={1,3,5,7};
	
	std::cout << tab[0] << "\n" ;

	std::cout << tab[0] << "," << tab[1] << "," << tab[2] << "," << tab[3] << "\n";
	
	wypisz(tab);

	bool CzyNalezy(std::vector<int>tab, int element)
	{
		for (int i = 0; i < tab.size(); i++)
		{
			if (tab[i] == element)
			{
				return true;
			}
		}
		return false;
	}
	bool wynik = CzyNalezy(tab, 4);
}

