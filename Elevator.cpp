#include "Elevator.h"

void Elevator::setStages(int pMinStage, int pMaxStage)
{
	if (pMinStage >= pMaxStage || pMinStage < 0)
		return;

	minStage = pMinStage;
	maxStage = pMaxStage;
}

void Elevator::callElivator(int pStage)
{
	if (pStage < minStage || pStage > maxStage)
		return;
	if (!active)
		return;

	stage = pStage;
}