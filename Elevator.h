#pragma once
class Elevator
{
private:
	static int ElevatorNumber;
	int minStage, maxStage, stage;
	bool active;
public:
	Elevator(int pMinStage, int pMaxStage, bool pActive = false) : minStage(pMinStage), maxStage(pMaxStage), stage(pMinStage), active(pActive) { ElevatorNumber++; };
	Elevator(int pMinStage, int pMaxStage, int pStage, bool pActive = false) : minStage(pMinStage), maxStage(pMaxStage), stage(pStage), active(pActive) { ElevatorNumber++; };
	Elevator(const Elevator& other) : minStage(other.minStage), maxStage(other.maxStage), stage(other.stage), active(other.active) { ElevatorNumber++; };
	~Elevator() { ElevatorNumber--; };

	int getStage() { return stage; };
	bool getStatus() { return active; };

	void setStages(int pMinStage, int pMaxStage);
	void switchStatus() { active = !active; };

	void callElivator(int pStage);
	static int getElevatorNumber() { return ElevatorNumber; };

	Elevator& getUpper(Elevator& other);
	Elevator& getNearest(Elevator& other, int pStage);
};

