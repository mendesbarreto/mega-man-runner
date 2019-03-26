//
// Created by Douglas Mendes on 2019-03-25.
//

#ifndef MEGAMANRUNNER_HOMESCENE_H
#define MEGAMANRUNNER_HOMESCENE_H

#include "cocos2d.h"

USING_NS_CC;

class HomeScene: cocos2d::Scene {
public:
    Size m_visibleWindow;
    Vec2 m_visibleOrigin;

public:
    static Scene* createScene();
    virtual bool init();
    void onPlayButtonTapped(cocos2d::Ref* sender);
    CREATE_FUNC(HomeScene);
};


#endif //MEGAMANRUNNER_HOMESCENE_H
