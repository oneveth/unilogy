
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"
#include <iostream>
#include "GameView.h"
#include "GameScene.h"

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;

    try
    {
        // NOTE: Р•СЃР»Рё РїСЂРё Р·Р°РіСЂСѓР·РєРµ РєР°СЂС‚С‹ Р±СѓРґРµС‚ РІС‹Р±СЂРѕС€РµРЅРѕ РёСЃРєР»СЋС‡РµРЅРёРµ,
        //  С‚Рѕ РїР°РјСЏС‚СЊ СѓС‚РµС‡С‘С‚. РР·Р±Р°РІРёС‚СЊСЃСЏ РѕС‚ СЌС‚РѕРіРѕ РјРѕР¶РЅРѕ СЃ РїРѕРјРѕС‰СЊСЋ
        //  Р·Р°РјРµРЅС‹ new/delete РЅР° make_unique Рё unique_ptr.
        GameView *pGameView = NewGameView({800, 600});
        GameScene *pGameScene = NewGameScene();

        // РђСЂРіСѓРјРµРЅС‚ С‚РёРїР° `GameLogic*` Р±СѓРґРµС‚ РїСЂРµРѕР±СЂР°Р·РѕРІР°РЅ РІ `void*`.
        EnterGameLoop(*pGameView, UpdateGameScene, DrawGameScene, pGameScene);
    }
    catch (const std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
        return 1;
    }

    return 0;
}
