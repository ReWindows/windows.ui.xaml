#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CViewbox {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@CViewbox@@UEAAJPEAVCUIElement@@@Z
    virtual long AddChild(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CViewbox@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Child@CViewbox@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Child(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CViewbox@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChild@CViewbox@@UEAAJPEAPEAVCUIElement@@@Z
    virtual long GetChild(CUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CViewbox@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CViewbox@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CViewbox@@UEAAJXZ
    virtual long InitInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChild@CViewbox@@UEAAJPEAVCUIElement@@@Z
    virtual long SetChild(CUIElement *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CViewbox@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CViewbox@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeScaleFactor@CViewbox@@AEAA?AUXSIZEF@@U2@0@Z
    XSIZEF ComputeScaleFactor(XSIZEF, XSIZEF);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CViewbox@@EEAA@XZ
    virtual ~CViewbox();
};
