//
// Created by Douglas Mendes on 2019-03-27.
//

#include "scene.h"
#include "cocos2d.h"
cocos2d::Scene* Scene::createScene()
{
    return Scene::create();
}

bool Scene::init() {
    if ( !cocos2d::Scene::init() ) { return false; }
    m_visibleWindow = cocos2d::Director::getInstance()->getVisibleSize();
    m_visibleOrigin = cocos2d::Director::getInstance()->getVisibleOrigin();
    return true;
}

cocos2d::Size Scene::getWindow() {
    return m_visibleWindow;
}

cocos2d::Vec2 Scene::getOrigin() {
    return m_visibleOrigin;
}