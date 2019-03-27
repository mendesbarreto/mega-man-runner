//
// Created by Douglas Mendes on 2019-03-27.
//

#include "scene.h"
#include "cocos2d.h"
cocos2d::Scene* core::Scene::createScene()
{
    return core::Scene::create();
}

bool core::Scene::init() {
    if ( !cocos2d::Scene::init() ) { return false; }
    m_visibleWindow = cocos2d::Director::getInstance()->getVisibleSize();
    m_visibleOrigin = cocos2d::Director::getInstance()->getVisibleOrigin();
    return true;
}

cocos2d::Size core::Scene::getWindow() {
    return m_visibleWindow;
}

cocos2d::Vec2 core::Scene::getOrigin() {
    return m_visibleOrigin;
}