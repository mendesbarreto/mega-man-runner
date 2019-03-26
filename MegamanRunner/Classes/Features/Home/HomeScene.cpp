//
// Created by Douglas Mendes on 2019-03-25.
//

#include "HomeScene.h"
#include "HomeViewFactory.h"
USING_NS_CC;

bool HomeScene::init() {
     if ( !Scene::init() ) { return false; }
     m_visibleWindow = Director::getInstance()->getVisibleSize();
     m_visibleOrigin = Director::getInstance()->getVisibleOrigin();

     auto playButton = HomeViewFactory::createPlayGameButton(CC_CALLBACK_1(HomeScene::onPlayButtonTapped, this));
     auto playButtonSize = playButton->getContentSize();

     auto x = m_visibleOrigin.x + ( m_visibleWindow.width * 0.5 );
     auto y = m_visibleOrigin.y + ( m_visibleWindow.height * 0.5 );

     playButton->setPosition(Vec2(x,y));

     auto menu = Menu::create(playButton, NULL);
     menu->setPosition(Vec2::ZERO);

     this->addChild(menu, 1);

    return true;
}

void HomeScene::onPlayButtonTapped(cocos2d::Ref *sender) {
     Director::getInstance()->end();
}

Scene *HomeScene::createScene() {
     return HomeScene::create();
}
