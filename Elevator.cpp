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
	return (stage - pStage) * (stage - pStage) < (other.stage - pStage) * (other.stage - pStage) ? *this : other;
}

void Elevator::callElivator(int pStage)
{
	if (pStage < minStage || pStage > maxStage)
		return;
	if (!active)
		return;

	stage = pStage;
}