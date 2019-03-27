//
// Created by Douglas Mendes on 2019-03-25.
//

#ifndef MEGAMANRUNNER_HOMESCENE_H
#define MEGAMANRUNNER_HOMESCENE_H

#include "cocos2d.h"
#include "scene.h"

class HomeScene: Scene {
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    void onPlayButtonTapped(cocos2d::Ref* sender);
    CREATE_FUNC(HomeScene);
};


#endif //MEGAMANRUNNER_HOMESCENE_H
