//
// Created by Douglas Mendes on 2019-03-25.
//

#include "HomeViewFactory.h"
#include "string"
USING_NS_CC;

struct Resource {
    struct Home {
        static const std::string PLAY_GAME_BUTTON_SELECTED;
        static const std::string PLAY_GAME_BUTTON_NORMAL;
        static const std::string QUIT_GAME_BUTTON;
    };
};

const std::string Resource::Home::PLAY_GAME_BUTTON_NORMAL = "play_button_normal.png";
const std::string Resource::Home::PLAY_GAME_BUTTON_SELECTED = "play_button_selected.png";
const std::string Resource::Home::QUIT_GAME_BUTTON = "quit_button.png";

MenuItemImage* HomeViewFactory::crateQuitGameButton(const ccMenuCallback &callback) {
    return nullptr;
}

MenuItemImage* HomeViewFactory::createPlayGameButton(const ccMenuCallback &callback) {
    auto playGameButton = MenuItemImage::create(Resource::Home::PLAY_GAME_BUTTON_NORMAL,
            Resource::Home::PLAY_GAME_BUTTON_SELECTED, callback);

    if ( playGameButton == nullptr && playGameButton->getContentSize().width <= 0
                                   && playGameButton->getContentSize().height <= 0) {
        printf("PROBLEM TO LOAD BUTTON PLAY");
    }
    return playGameButton;
}