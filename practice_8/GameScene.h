//
//  GameScene.h
//  sfml_oop
//
//  Created by Ivan Batrakov on 07/12/2025.
//  Copyright © 2025 on_eveth. All rights reserved.
//

#ifndef GameScene_h
#define GameScene_h

#pragma once
#include "TmxLevel.h"

/// Предварительное объявление (pre-declaration) структуры
///  позволит передавать и хранить указатели и ссылки на неё,
///  но не позволит пользоваться или создавать,
///  поскольку мы ещё не знаем ни размер в байтах, ни свойства структуры.
struct GameView;

/// Структура, абстрагирующая игровую сцену.
///  Код ниже намеренно написан в процедурном стиле:
///  - используются структуры
///  - используется явный вызов new и delete.
struct GameScene
{
    TmxLevel level;
    TmxObject player;
    std::vector<TmxObject> enemies;
    std::vector<TmxObject> coins;
    std::vector<TmxObject> block;
    sf::Vector2f startPosition;
};

GameScene *NewGameScene();
void UpdateGameScene(void *pData, GameView &view, float deltaSec);
void DrawGameScene(void *pData, GameView &view);
void DestroyGameScene(GameScene *&pScene);

#endif /* GameScene_h */
