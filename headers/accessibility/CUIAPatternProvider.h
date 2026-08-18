#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CUIAPatternProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAPatternProvider@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CUIAPatternProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CUIAPatternProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAWrapper@CUIAPatternProvider@@UEAAPEAUIUIAWrapper@@XZ
    virtual IUIAWrapper * GetUIAWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateUIAWrapper@CUIAPatternProvider@@UEAAXXZ
    virtual void InvalidateUIAWrapper();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAPatternProvider@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIAWrapper@CUIAPatternProvider@@UEAAXPEAUIUIAWrapper@@@Z
    virtual void SetUIAWrapper(IUIAWrapper *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIAPatternProvider@@UEAA@XZ
    virtual ~CUIAPatternProvider();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxArrayOfStrings@CUIAPatternProvider@@KAJAEBVCValue@Automation@@PEAHPEAPEAVxstring_ptr@@@Z
    static long UnboxArrayOfStrings(::Automation::CValue const &, int *, xstring_ptr * *);
};
