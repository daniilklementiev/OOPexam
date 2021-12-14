#pragma once
#include <iostream>
#include <string>

#define COUNT 4
#define GROUPS 5

class Source {
public:
	char cand[COUNT] = { 'a', 'b', 'c', 'd' };	// candidates
	char votes[COUNT][GROUPS] = {			// 4 person in group 4 votes in 5 groups
		cand[0], 
		cand[1], 
		cand[1], 
		cand[3], 
		cand[0], 
		cand[1], 
		cand[2], 
		cand[1], 
		cand[0], 
		cand[1], 
		cand[2], 
		cand[2], 
		cand[2], 
		cand[1], 
		cand[3], 
		cand[3],  
		cand[3], 
		cand[3], 
		cand[3], 
		cand[3] 
	};

	int votesC[COUNT] = { 0 }; // for each group counter
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
		for (size_t i = 0; i < COUNT; i++)
		{
			for (size_t j = 0; j < GROUPS; j++)
			{
				if (votes[i][j] == 'a')
				{
					++votesC[i];
				}
				else if (votes[i][j] == 'b') {
					++votesC[i];
				}
				else if (votes[i][j] == 'c') {
					++votesC[i];
				}
				else if (votes[i][j] == 'd') {
					++votesC[i];
				}
				else if (votes[i][j] == 'e') {
					++votesC[i];
				}
			}
			std::cout << "Candidate " << cand[i] << "  votes:" << votesC[i] << std::endl;
		}
		std::cout << "\n\n";
	}
};