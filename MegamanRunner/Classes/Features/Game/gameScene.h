//
// Created by Douglas Mendes on 2019-03-27.
//

#ifndef MEGAMANRUNNER_GAMESCENE_H
#define MEGAMANRUNNER_GAMESCENE_H

#include "scene.h"
#include "cocos2d.h"

class GameScene: core::Scene {
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(GameScene);
};


#endif //MEGAMANRUNNER_GAMESCENE_H
