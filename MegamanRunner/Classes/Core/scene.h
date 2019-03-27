//
// Created by Douglas Mendes on 2019-03-27.
//

#ifndef MEGAMANRUNNER_SCENE_H
#define MEGAMANRUNNER_SCENE_H

#include "cocos2d.h"

class Scene: public cocos2d::Scene {
private:
    cocos2d::Size m_visibleWindow;
    cocos2d::Vec2 m_visibleOrigin;

public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(Scene);

    cocos2d::Size getWindow();
    cocos2d::Vec2 getOrigin();
};


#endif //MEGAMANRUNNER_SCENE_H
