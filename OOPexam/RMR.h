#pragma once
#include "Main.h"
#define COUNT 5

class RMR :
    public Source
{
public:

	void WhoWin() {
		Source m;
		m.CounterVotes();
		int votemaxCount = 0;
		int votemaxID = 0;
		short sameVote = 0;
		int sameVoteCount = 0;
		for (size_t i = 0; i < GROUPS; i++)
		{
			if (votesC[i] > votemaxCount) {
				votemaxCount = votesC[i];
				votemaxID = i;
			}
			else if (votesC[i] == votemaxCount) {
				sameVote++;
				sameVoteCount = votesC[i];
			}
		}
		if (votemaxCount > sameVoteCount) {
			std::cout << "Winner of the vote : " << cand[votemaxID] << std::endl;
		}
		else {
			std::cout << "It is impossible to choose a winner!" << std::endl;
		}
	}
};

