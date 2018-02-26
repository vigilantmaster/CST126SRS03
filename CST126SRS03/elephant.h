#pragma once

#include "gps.h"
#include "loxodonta.h"
#include "elephant.h"

class Elephant: public Loxodonta
{
public:
<<<<<<< HEAD
	enum class Turn { k0, kForward, kLeft, kRight};

private:
	GPS* gps_{};

private:
	static constexpr unsigned kMaxAwake{ 22 }; // hours/day
	static constexpr unsigned kMaxWater{ 200 }; // liters/day
	static constexpr unsigned kMaxFood{ 200 }; // kg/day

	unsigned elapsedTime_{}; // minutes
	unsigned awake_{}; // minutes
	unsigned water_{}; // [0, kMaxWater)

	unsigned weight_; // [minWeight_,maxWeight_)

	const unsigned minWeight_;
	const unsigned maxWeight_;

	Direction heading_;

public:
	Elephant(const unsigned weight, const Direction heading);

private:
	static Preserve::Feature look(const Elephant& elephant);
	void incrementTime(const unsigned minutes);
	void decrementWater(const unsigned liters);
	void decrementWeight(const unsigned kg);

private:
	bool isSleepy() const;
	bool isThirsty() const;
	bool isHungry() const;

public:
	GPS * getGps_() const;
	unsigned getElapsedTime() const;

private: // Available methods.
	Direction getHeading(const Turn turn) const;
	Preserve::Feature look() const;
	Preserve::Feature look(const Turn turn) const;
	int listen() const; // Elephants can feel vibrations with their feet. 
	void sleep();
	void drink();
	void eat();
	void turn(const Turn turn);
	void move();
=======
	Elephant(const unsigned weight, const Direction heading) : Loxodonta(weight, heading)
	{
	}
>>>>>>> pr/6

public: // To be implemented methods. 
	void tag(GPS& gps);
	void findHerd();
};
