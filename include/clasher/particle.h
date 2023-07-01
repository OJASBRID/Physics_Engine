#pragma once
#include<core.h>
class Particle
{
public:
	clasher::Vector3 position;
	clasher::Vector3 velocity;
	clasher::Vector3 acceleration;

	clasher::real damping;
	clasher::real inverseMass;
};