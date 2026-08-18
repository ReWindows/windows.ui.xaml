#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CIconElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CIconElement@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CIconElement@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChildElement@CIconElement@@IEAAJPEAVCUIElement@@@Z
    long AddChildElement(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CIconElement@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildElementNoRef@CIconElement@@IEAAPEAVCUIElement@@XZ
    CUIElement * GetChildElementNoRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CIconElement@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPhoneAppBarProxyOfChange@CIconElement@@IEAAJXZ
    long NotifyPhoneAppBarProxyOfChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CIconElement@@MEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLinkedChildProperty@CIconElement@@IEAAJW4KnownPropertyIndex@@0_N@Z
    long UpdateLinkedChildProperty(int, int, bool);
};
