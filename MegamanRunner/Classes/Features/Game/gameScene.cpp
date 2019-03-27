//
// Created by Douglas Mendes on 2019-03-27.
//

#include "gameScene.h"

cocos2d::Scene* GameScene::createScene() {
    return GameScene::create();
}

bool GameScene::init() {
    if(!Scene::init()) { return false; }
    return true;
}