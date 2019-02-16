#include "template_game.h"
#include "src/stages/game_stage.h"

void initOpenGLPlugin(IPluginRegistry &registry);
void initSDLSystemPlugin(IPluginRegistry &registry, Maybe<String> cryptKey);
void initSDLAudioPlugin(IPluginRegistry &registry);
void initSDLInputPlugin(IPluginRegistry &registry);
void initDX11Plugin(IPluginRegistry &registry);

int TemplateGame::initPlugins(IPluginRegistry& registry)
{
	initOpenGLPlugin(registry);
	initSDLSystemPlugin(registry, {});
	initSDLAudioPlugin(registry);
	initSDLInputPlugin(registry);

#ifdef WITH_DX11
	initDX11Plugin(registry);
#endif

	return HalleyAPIFlags::Video | HalleyAPIFlags::Audio | HalleyAPIFlags::Input;
}

void TemplateGame::initResourceLocator(const Path& gamePath, const Path& assetsPath, const Path& unpackedAssetsPath, ResourceLocator& locator)
{
	locator.addPack(Path(assetsPath) / "game.dat");
}

String TemplateGame::getName() const
{
	return "Template project";
}

String TemplateGame::getDataPath() const
{
	return "HalleyTemplate";
}

bool TemplateGame::isDevMode() const
{
	return true;
}

std::unique_ptr<Stage> TemplateGame::startGame(const HalleyAPI* api)
{
	api->video->setWindow(WindowDefinition(WindowType::Window, Vector2i(1280, 720), "HalleyTemplate"));
	api->audio->startPlayback();
	return std::make_unique<GameStage>();
}

HalleyGame(TemplateGame);
