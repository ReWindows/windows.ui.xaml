#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CTextBackingStoreNavigator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextBackingStoreNavigator@@QEAA@AEBV0@@Z
    CTextBackingStoreNavigator(CTextBackingStoreNavigator const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacter@CTextBackingStoreNavigator@@QEAAGXZ
    unsigned short GetCharacter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@CTextBackingStoreNavigator@@QEAAIXZ
    unsigned int MoveNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MovePrevious@CTextBackingStoreNavigator@@QEAAIXZ
    unsigned int MovePrevious();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToLastPositionOfContainer@CTextBackingStoreNavigator@@AEAAJXZ
    long MoveToLastPositionOfContainer();
};
