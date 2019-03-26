//
// Created by Douglas Mendes on 2019-03-25.
//

#ifndef MEGAMANRUNNER_HOMEVIEWFACTORY_H
#define MEGAMANRUNNER_HOMEVIEWFACTORY_H

USING_NS_CC;

class HomeViewFactory {
public:
    static MenuItemImage* createPlayGameButton(const ccMenuCallback& callback);
    static MenuItemImage* crateQuitGameButton(const ccMenuCallback& callback);
};
#endif //MEGAMANRUNNER_HOMEVIEWFACTORY_H
