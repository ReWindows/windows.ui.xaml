#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class WinTextCore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyLogicalDpiSettings@WinTextCore@@QEAAXPEAUID2D1DeviceContext@@@Z
    void ApplyLogicalDpiSettings(ID2D1DeviceContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@WinTextCore@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long Create(CCoreServices *, WinTextCore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayInvalidation@WinTextCore@@QEAAJPEAVCUIElement@@@Z
    long DelayInvalidation(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushTextRealizations@WinTextCore@@QEAAJXZ
    long FlushTextRealizations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2D1Factory@WinTextCore@@QEAAJPEAPEAUID2D1Factory1@@@Z
    long GetD2D1Factory(ID2D1Factory1* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDWriteFactory@WinTextCore@@QEAAJPEAPEAUIDWriteFactory4@@@Z
    long GetDWriteFactory(IDWriteFactory4* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontFaceId@WinTextCore@@QEAAXPEAVDWriteFontFace@@PEAI@Z
    void GetFontFaceId(DWriteFontFace *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontFaceNoAddRef@WinTextCore@@QEBAPEBVDWriteFontFace@@I@Z
    DWriteFontFace const * GetFontFaceNoAddRef(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedD2D1DeviceContext@WinTextCore@@QEAAJPEAPEAUID2D1DeviceContext@@@Z
    long GetSharedD2D1DeviceContext(ID2D1DeviceContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedD2DSolidColorBrush@WinTextCore@@QEAAJPEAPEAUID2D1SolidColorBrush@@@Z
    long GetSharedD2DSolidColorBrush(ID2D1SolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemFontCollectionOverride@WinTextCore@@QEAAJPEAUIDWriteFontCollection@@@Z
    long SetSystemFontCollectionOverride(IDWriteFontCollection *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedD2DResources@WinTextCore@@AEAAJXZ
    long CreateSharedD2DResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSharedD2DResources@WinTextCore@@AEAAJXZ
    long EnsureSharedD2DResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinTextCore@@EEAA@XZ
    virtual ~WinTextCore();
};
