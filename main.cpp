#include <iostream>
#include <vector>
#include <time.h>

int main()
{
	// 1
	// srand(time(0));
	// rand();

	// const int size = 10;
	// int array[size];
	// int copyArray[size];

	// for (int i = 0; i < size; i++)
	// {
	// 	array[i] = -10 + rand() % ((10 + 1) - (-10));
	// }

	// int currentIndex = 0;

	// for (int i = 0; i < size; i++)
	// {
	// 	if (array[i] > 0)
	// 	{
	// 		copyArray[currentIndex] = array[i];
	// 		currentIndex++;
	// 	}
	// }

	// for (int i = 0; i < size; i++)
	// {
	// 	if (array[i] == 0)
	// 	{
	// 		copyArray[currentIndex] = array[i];
	// 		currentIndex++;
	// 	}
	// }

	// for (int i = 0; i < size; i++)
	// {
	// 	if (array[i] < 0)
	// 	{
	// 		copyArray[currentIndex] = array[i];
	// 		currentIndex++;
	// 	}
	// }

	// std::cout << "Result: ";

	// for (int i = 0; i < size; i++)
	// {
	// 	std::cout << copyArray[i] << " ";
	// }

	// 2
	// srand(time(0));
	// rand();

	// const int M = 5;
	// const int N = 10;

	// int first[M];
	// int second[N];
	// std::vector<int> third;

	// for (int i = 0; i < M; i++)
	// {
	// 	first[i] = rand() % 10;
	// }

	// for (int i = 0; i < N; i++)
	// {
	// 	second[i] = rand() % 10;
	// }

	// for (int i = 0; i < N; i++)
	// {
	// 	for (int j = 0; j < M; j++)
	// 	{
	// 		if (second[i] == first[j])
	// 		{
	// 			bool find = false;

	// 			for (int k = 0; k < third.size(); k++)
	// 			{
	// 				if (first[j] == third[k])
	// 				{
	// 					find = true;
	// 					break;
	// 				}
	// 			}

	// 			if (!find)
	// 			{
	// 				third.push_back(first[j]);
	// 			}
	// 		}
	// 	}
	// }

	// std::cout << "First: ";

	// for (int i = 0; i < M; i++)
	// {
	// 	std::cout << first[i] << " ";
	// }

	// std::cout << "\nSecond: ";

	// for (int i = 0; i < N; i++)
	// {
	// 	std::cout << second[i] << " ";
	// }

	// std::cout << "\nResult: ";

	// for (int i = 0; i < third.size(); i++)
	// {
	// 	std::cout << third[i] << " ";
	// }

	// 3
	// srand(time(0));
	// rand();

	// int money = 0;
	// int const size = 5;

	// int prices[] = {0, 50, 100, 300, 500, 2500};

	// while (true)
	// {
	// 	int numbersRandom[size];

	// 	for (int i = 0; i < size; i++)
	// 	{
	// 		numbersRandom[i] = 1 + rand() % ((42 + 1) - 1);
	// 	}

	// 	int numbersPlayer[size];

	// 	for (int i = 0; i < size; i++)
	// 	{
	// 		int num;
	// 		std::cout << "\nEnter " << i + 1 << " number: ";
	// 		std::cin >> num;

	// 		if (num < 0 || num > 42)
	// 		{
	// 			std::cout << "\nIncorrect range!";
	// 			i--;
	// 			continue;
	// 		}

	// 		for (int j = 0; j < i; j++)
	// 		{
	// 			if (numbersPlayer[j] == num)
	// 			{
	// 				std::cout << "\nThis number already exist!";
	// 				i--;
	// 				continue;
	// 			}
	// 		}

	// 		numbersPlayer[i] = num;
	// 	}

	// 	int countCorrect = 0;

	// 	for (int i = 0; i < size; i++)
	// 	{
	// 		for (int j = 0; j < size; j++)
	// 		{
	// 			if (numbersPlayer[i] == numbersRandom[j])
	// 			{
	// 				countCorrect++;
	// 			}
	// 		}
	// 	}

	// 	money += prices[countCorrect];
	// 	std::cout << "\nYou guess " << countCorrect << " numbers\n";
	// 	std::cout << "Your money: " << money;

	// 	int answer;
	// 	std::cout << "\nContinue? 1 - yes, 0 - no";
	// 	std::cin >> answer;

	// 	if (answer == 0)
	// 	{
	// 		break;
	// 	} 
	// }
}