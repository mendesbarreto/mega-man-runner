//
// Created by Douglas Mendes on 2019-03-27.
//
#include "cocos2d.h"
#include "gameScene.h"


cocos2d::Scene* GameScene::createScene() {
    return GameScene::create();
}
cocos2d::Vector<cocos2d::SpriteFrame*> getAnimation(const char *format, int count)
{
    auto spritecache = cocos2d::SpriteFrameCache::getInstance();
    cocos2d::Vector<cocos2d::SpriteFrame*> animFrames;
    char str[100];
    for(int i = 1; i <= count; i++)
    {
        sprintf(str, format, i);
        auto frame = spritecache->getSpriteFrameByName(str);
        animFrames.pushBack(frame);
    }
    return animFrames;
}

bool GameScene::init() {
    if(!Scene::init()) { return false; }

    cocos2d::SpriteFrameCache::getInstance()->addSpriteFramesWithFile("sprites/megaman.plist");
    auto frames = getAnimation("walk/%1d.png", 10);
    auto sprite = cocos2d::Sprite::createWithSpriteFrame(frames.front());

    this->addChild(sprite);
    sprite->setPosition(cocos2d::Vec2(150,150));

    auto animation = cocos2d::Animation::createWithSpriteFrames(frames, 1.0f/12);
    sprite->runAction(cocos2d::RepeatForever::create(cocos2d::Animate::create(animation)));

    return true;
}

