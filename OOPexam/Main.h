#pragma once
#include <iostream>
#include <string>

#define COUNT 4
#define GROUPS 5

class Main {
private:
	std::string candidates[COUNT];
	char votes[COUNT][GROUPS] = { 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e' };
	int votesC[COUNT] = { 0 };
public:
	int groups[GROUPS] = { 1, 2, 3, 4, 5 };
	

	void CoutGroups() {
		for (size_t i = 0; i < GROUPS; i++)
		{
			std::cout << groups[i] << " | ";

		}
		std::cout << std::endl;
	}
	
	void CoutVotes() {
		for (size_t i = 0; i < COUNT; i++)
		{
			for (size_t j = 0; j < GROUPS; j++)
			{
				std::cout << votes[i][j] << " | ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}

	void CounterVotes() {
		for (size_t i = 0; i < GROUPS; i++)
		{
			for (size_t j = 0; j < COUNT; j++)
			{
				if (votes[i][j] == 'a')
				{
					votesC[i]++;
				}
				else if (votes[i][j] == 'b') {
					votesC[i]++;
				}
				else if (votes[i][j] == 'c') {
					votesC[i]++;
				}
				else if (votes[i][j] == 'd') {
					votesC[i]++;
				}
				else if (votes[i][j] == 'e') {
					votesC[i]++;
				}
			}
		}
		std::cout << "\n\n\n\n";
		for (size_t i = 0; i < COUNT; i++)
		{
			std::cout << "Group " << i + 1 << "  votes:" << votesC[i] << std::endl;
		}
	}
};