#include <cocos2d.h>

using namespace cocos2d;

#pragma warning(push)
#pragma warning(disable : 4273)

CCObject* CCArray::firstObject() {
    if (data->num) {
        return data->arr[0];
    }
    return nullptr;
}

void CCArray::removeFirstObject(bool bReleaseObj) {
    this->removeObjectAtIndex(0, bReleaseObj);
}
 
#pragma warning(pop)
