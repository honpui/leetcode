#include <iostream>
using namespace std;

int game(int* guess, int guessSize, int* answer, int answerSize){

	int i = 0;
	int count = 0;
	for (i = 0; i < 3;i++)
	{
		if (guess[i]==answer[i])
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int guess[] = {1,2,3};
	int guessSize = 3;
	int answer[] = {1,2,3};
	int answerSize=3;
	int re =  game(guess,  guessSize,  answer,  answerSize);
	return 0;
}