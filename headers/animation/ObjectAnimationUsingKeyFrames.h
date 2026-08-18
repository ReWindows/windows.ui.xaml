#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ObjectAnimationUsingKeyFrames {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ObjectAnimationUsingKeyFrames@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableDependentAnimation@ObjectAnimationUsingKeyFrames@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableDependentAnimation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyFrames@ObjectAnimationUsingKeyFrames@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVObjectKeyFrame@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_KeyFrames(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableDependentAnimation@ObjectAnimationUsingKeyFrames@DirectUI@@UEAAJE@Z
    virtual long put_EnableDependentAnimation(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ObjectAnimationUsingKeyFrames@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ObjectAnimationUsingKeyFrames@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ObjectAnimationUsingKeyFrames@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ObjectAnimationUsingKeyFrames@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
