#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace InternalDebugInterop {
class ComponentHost {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBitmapUpdateCompleted@ComponentHost@InternalDebugInterop@@UEAAJPEAE@Z
    virtual long HasBitmapUpdateCompleted(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasComponentBeenCreated@ComponentHost@InternalDebugInterop@@UEAA_NXZ
    virtual bool HasComponentBeenCreated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDescendantOfOrSelf@ComponentHost@InternalDebugInterop@@UEAA_NPEAVCUIElement@@@Z
    virtual bool IsDescendantOfOrSelf(CUIElement *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentHost@InternalDebugInterop@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tick@ComponentHost@InternalDebugInterop@@UEAAJXZ
    virtual long Tick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAccelerator@ComponentHost@InternalDebugInterop@@UEAAJPEAXPEAI@Z
    virtual long TranslateAccelerator(void *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmapAsync@ComponentHost@InternalDebugInterop@@UEAAJXZ
    virtual long UpdateBitmapAsync();
};
} // namespace InternalDebugInterop
