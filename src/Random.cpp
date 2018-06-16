#include "Random.h"

namespace Random {
	std::random_device RandomDevice;
	std::mt19937 RandomEngine(RandomDevice());

	int Random(int min, int max)
	{
		std::uniform_int_distribution<> Distribution(min, max);
		return Distribution(RandomEngine);
	}
}