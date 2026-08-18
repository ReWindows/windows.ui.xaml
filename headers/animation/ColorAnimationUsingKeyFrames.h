#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ColorAnimationUsingKeyFrames {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ColorAnimationUsingKeyFrames@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableDependentAnimation@ColorAnimationUsingKeyFrames@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableDependentAnimation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyFrames@ColorAnimationUsingKeyFrames@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVColorKeyFrame@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_KeyFrames(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableDependentAnimation@ColorAnimationUsingKeyFrames@DirectUI@@UEAAJE@Z
    virtual long put_EnableDependentAnimation(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ColorAnimationUsingKeyFrames@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ColorAnimationUsingKeyFrames@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ColorAnimationUsingKeyFrames@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ColorAnimationUsingKeyFrames@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
