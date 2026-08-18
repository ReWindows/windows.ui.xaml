#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CItemCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CItemCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CItemCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CItemCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CItemCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CItemCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@CItemCollection@@UEBA_NXZ
    virtual bool IsActive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CItemCollection@@UEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CItemCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CItemCollection@@UEAAJPEAVCDependencyObject@@P6AX0W4Value@DirtyFlags@@@Z@Z
    virtual long SetOwner(CDependencyObject *, void ( *)(CDependencyObject *, int));
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemovingDependencyObject@CItemCollection@@MEAAXPEAVCDependencyObject@@@Z
    virtual void OnRemovingDependencyObject(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAssociateChildren@CItemCollection@@MEAAIPEAVCDependencyObject@@@Z
    virtual unsigned int ShouldAssociateChildren(CDependencyObject *);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldKeepPeerReference@CItemCollection@@MEAAIXZ
    virtual unsigned int ShouldKeepPeerReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldParentBePublic@CItemCollection@@MEBA_NXZ
    virtual bool ShouldParentBePublic() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearLogicalParentForItems@CItemCollection@@AEAAXXZ
    void ClearLogicalParentForItems();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemCollection@@EEAA@XZ
    virtual ~CItemCollection();
};
