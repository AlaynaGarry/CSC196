#pragma once
#include "Base/Actor.h"

class Enemy : public nc::Actor {
public:
	Enemy(const nc::Transform& transform, nc::Shape* shape, float speed) : nc::Actor{ transform, shape }, speed{ speed }{};

	void Update(float dt) override;

private:
	float speed = 300;
};