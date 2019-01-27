#ifndef WANDER_BEHAVIOUR_H
#define WANDER_BEHAVIOUR_H

#include "Behaviour.h"
#include "cMeshObject.h"

class WanderBehaviour : public Behaviour {
public:
	WanderBehaviour(cMeshObject* agent, cMeshObject* target, float maxSpeed, float maxForce, float timeToWait, float upLim, float dwLim);
	virtual ~WanderBehaviour(void);

	virtual void update(float dt);

private:
	//cMeshObject* mTarget;
	cMeshObject* mAgent;
	float mMaxSpeed;
	float mMaxForce; //steering speed
	float mUpLim;
	float mDwnLim;
	float mTimeToWait;
	
	float mTimeWaitedSoFar;
	bool mStart;
	glm::vec3 mCurTarget;
};

#endif
