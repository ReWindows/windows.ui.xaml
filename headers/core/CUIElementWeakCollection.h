#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CUIElementWeakCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CUIElementWeakCollection@@UEAAJAEAVCValue@@PEAI@Z
    virtual long Append(CValue &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForAncestorElements@CUIElementWeakCollection@@QEBAJPEAVCUIElement@@@Z
    long CheckForAncestorElements(CUIElement *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsNoRefItems@CUIElementWeakCollection@@UEBA_NXZ
    virtual bool ContainsNoRefItems() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIElementWeakCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisallowAncestorsInCollection@CUIElementWeakCollection@@QEAAXXZ
    void DisallowAncestorsInCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CUIElementWeakCollection@@UEBAIXZ
    virtual unsigned int GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemWithAddRef@CUIElementWeakCollection@@UEAAPEAXI@Z
    virtual void * GetItemWithAddRef(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CUIElementWeakCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CUIElementWeakCollection@@UEAAJIAEAVCValue@@@Z
    virtual long Insert(unsigned int, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CUIElementWeakCollection@@UEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Neat@CUIElementWeakCollection@@UEAAJH@Z
    virtual long Neat(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CUIElementWeakCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIElementWeakCollection@@UEAA@XZ
    virtual ~CUIElementWeakCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForAncestor@CUIElementWeakCollection@@AEBAJPEBVCUIElement@@PEAV2@@Z
    long CheckForAncestor(CUIElement const *, CUIElement *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@CUIElementWeakCollection@@AEAAJAEBVCValue@@@Z
    long ValidateItem(CValue const &);
};
