#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class DoubleAnimationUsingKeyFrames {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DoubleAnimationUsingKeyFrames@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableDependentAnimation@DoubleAnimationUsingKeyFrames@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableDependentAnimation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyFrames@DoubleAnimationUsingKeyFrames@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVDoubleKeyFrame@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_KeyFrames(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableDependentAnimation@DoubleAnimationUsingKeyFrames@DirectUI@@UEAAJE@Z
    virtual long put_EnableDependentAnimation(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DoubleAnimationUsingKeyFrames@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DoubleAnimationUsingKeyFrames@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DoubleAnimationUsingKeyFrames@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DoubleAnimationUsingKeyFrames@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
