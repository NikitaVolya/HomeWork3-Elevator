#pragma once
class Elevator
{
private:
	static int ElevatorNumber;
	int minStage, maxStage, stage;
	bool active;
public:
	Elevator(int pMinStage, int pMaxStage) : minStage(pMinStage), maxStage(pMaxStage), stage(pMinStage), active(false) { ElevatorNumber++; };
	Elevator(int pMinStage, int pMaxStage, int pStage) : minStage(pMinStage), maxStage(pMaxStage), stage(pStage), active(false) { ElevatorNumber++; };
	Elevator(int pMinStage, int pMaxStage, int pStage, bool pActive) : minStage(pMinStage), maxStage(pMaxStage), stage(pStage), active(pActive) { ElevatorNumber++; };
	~Elevator() { ElevatorNumber--; };

	int getStage() { return stage; };
	bool getStatus() { return active; };

	void setStages(int pMinStage, int pMaxStage);
	void switchStatus() { active = !active; };

	void callElivator(int pStage);
	static int getElevatorNumber() { return ElevatorNumber; };
};

