#pragma once

// TODO add PreUpdate(), PostUpdate(), and PostRender()

class Updateable
{
public:
	virtual void PreUpdate() {};
	virtual void OnUpdate() {};
	virtual void PostUpdate() {};
	virtual void PostRender() {};
};
