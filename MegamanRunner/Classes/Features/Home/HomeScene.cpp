//
// Created by Douglas Mendes on 2019-03-25.
//

#include "HomeScene.h"
#include "HomeViewFactory.h"
#include "cocos2d.h"
#include "scene.h"
#include "gameScene.h"

bool HomeScene::init() {
     if ( !Scene::init() ) { return false; }

     auto playButton = HomeViewFactory::createPlayGameButton(CC_CALLBACK_1(HomeScene::onPlayButtonTapped, this));
     auto playButtonSize = playButton->getContentSize();
     auto visibleOrigin = this->getOrigin();
     auto visibleWindow = this->getWindow();

     auto x = visibleOrigin.x + ( visibleWindow.width * 0.5 );
     auto y = visibleOrigin.y + ( visibleWindow.height * 0.5 );

     playButton->setPosition(Vec2(x,y));

     auto menu = cocos2d::Menu::create(playButton, NULL);
     menu->setPosition(cocos2d::Vec2::ZERO);

     this->addChild(menu, 1);

    return true;
}

void HomeScene::onPlayButtonTapped(cocos2d::Ref *sender) {
     auto director = Director::getInstance();
     auto gameScene = GameScene::createScene();
     director->pushScene(gameScene);
}

cocos2d::Scene *HomeScene::createScene() {
     return HomeScene::create();
}
