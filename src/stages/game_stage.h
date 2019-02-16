#pragma once

#include <halley.hpp>
using namespace Halley;

class GameStage : public Stage
{
public:
	void init() override;
	void onFixedUpdate(Time t) override;
	void onVariableUpdate(Time t) override;
	void onRender(RenderContext& rc) const override;
};
