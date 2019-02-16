#pragma once

#include <halley.hpp>
using namespace Halley;

class TemplateGame : public Game
{
public:
	int initPlugins(IPluginRegistry& registry) override;
	void initResourceLocator(const Path& gamePath, const Path& assetsPath, const Path& unpackedAssetsPath, ResourceLocator& locator) override;

	String getName() const override;
	String getDataPath() const override;
	bool isDevMode() const override;
	std::unique_ptr<Stage> startGame(const HalleyAPI*) override;
};
