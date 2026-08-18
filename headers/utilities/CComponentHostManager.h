#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CComponentHostManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWebViewByWindowHandle@CComponentHostManager@@UEBAPEAVCWebView@@QEAUHWND__@@@Z
    virtual CWebView * FindWebViewByWindowHandle(HWND__* const) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBitmapUpdateCompleted@CComponentHostManager@@UEAAJPEAVCUIElement@@PEAE@Z
    virtual long HasBitmapUpdateCompleted(CUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterComponentHost@CComponentHostManager@@UEAAJPEAUIComponentHost@@@Z
    virtual long RegisterComponentHost(IComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tick@CComponentHostManager@@UEAAJXZ
    virtual long Tick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAccelerator@CComponentHostManager@@UEAAJPEAXPEAI@Z
    virtual long TranslateAccelerator(void *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterComponentHost@CComponentHostManager@@UEAAJPEAUIComponentHost@@@Z
    virtual long UnregisterComponentHost(IComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmapAsync@CComponentHostManager@@UEAAJPEAVCUIElement@@@Z
    virtual long UpdateBitmapAsync(CUIElement *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComponentHostManager@@EEAA@XZ
    virtual ~CComponentHostManager();
};
