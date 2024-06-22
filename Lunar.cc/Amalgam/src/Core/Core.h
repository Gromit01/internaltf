#pragma once
#include "../Utils/Feature/Feature.h"

class CCore
{
public:
	void Load();
	bool bHasFailed = false;
	void Unload();

	bool ShouldUnload();
	bool bUnload = false;
};

ADD_FEATURE_CUSTOM(CCore, Core, U);