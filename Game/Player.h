#pragma once
#include "Base/Actor.h"

class Player : public nc::Actor{
public: 
	Player (const nc::Transform& transform, std::shared_ptr<nc::Shape> shape, float speed) : nc::Actor{ transform, shape }, speed{ speed }{};

	void Update(float dt) override;

	void OnCollision(Actor* actor) override;

private: 
	float fireTimer = 2;
	float fireRate = 0;
	float speed = 300;
};