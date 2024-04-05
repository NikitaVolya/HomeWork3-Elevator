#include "Elevator.h"

void Elevator::setStages(int pMinStage, int pMaxStage)
{
	if (pMinStage >= pMaxStage || pMinStage < 0)
		return;

	minStage = pMinStage;
	maxStage = pMaxStage;
}

Elevator& Elevator::getUpper(Elevator& other)
{
	return stage > other.stage ? *this : other;
}

Elevator& Elevator::getNearest(Elevator& other, int pStage)
{
	return std::abs(stage - pStage) < std::abs(other.stage - pStage) ? *this : other;
}

void Elevator::callElivator(int pStage)
{
	if (pStage < minStage || pStage > maxStage)
	{
		std::cout << "[Elevator info :" << this << " ] Invalid parameter pStage\n";
		return;
	}
	if (!active)
	{
		std::cout << "[Elevator info :" << this << " ] Elevator is currently off\n";
		return;
	}

	stage = pStage;
}