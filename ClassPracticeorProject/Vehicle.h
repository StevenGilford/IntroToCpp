#pragma once
class Vehicle
{
public:
	int mNumTires;
	int mNumDoors;
	int mNumSeats;
	char mBrandType[255];
	char mModelDesignation[255];
	int mYearMade;
	bool mAllDoorsOpen;
	bool mEngineStart;
	void EngineOn(bool AllDoorsOpen, bool EngineStart);
};