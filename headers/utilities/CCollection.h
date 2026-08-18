#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
class CCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CCollection@@SAJPEAVCDependencyObject@@IPEAVCValue@@1@Z
    static long Add(CDependencyObject *, unsigned int, CValue *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsNoRefItems@CCollection@@UEBA_NXZ
    virtual bool ContainsNoRefItems() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailIfLocked@CCollection@@QEAAJXZ
    long FailIfLocked();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CCollection@@SAJPEAVCDependencyObject@@IPEAVCValue@@@Z
    static long GetItem(CDependencyObject *, unsigned int, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CCollection@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetItemCount(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CCollection@@UEAAJAEAVCValue@@PEAH@Z
    virtual long IndexOf(CValue &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertDO@CCollection@@SAJPEAVCDependencyObject@@IAEAVCValue@@@Z
    static long InsertDO(CDependencyObject *, unsigned int, CValue &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDOCollection@CCollection@@UEBA_NXZ
    virtual bool IsDOCollection() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CCollection@@QEAAXXZ
    void Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateOwnerInfo@CCollection@@UEAAJPEAVCDependencyObject@@0@Z
    virtual long PropagateOwnerInfo(CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reserve@CCollection@@UEAAJI@Z
    virtual long Reserve(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAndPropagateOwner@CCollection@@QEAAJPEAVCDependencyObject@@P6AX0W4Value@DirtyFlags@@@Z@Z
    long SetAndPropagateOwner(CDependencyObject *, void ( *)(CDependencyObject *, int));
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CCollection@@UEAAJPEAVCDependencyObject@@P6AX0W4Value@DirtyFlags@@@Z@Z
    virtual long SetOwner(CDependencyObject *, void ( *)(CDependencyObject *, int));
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CCollection@@QEAAXXZ
    void Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateParams@CCollection@@SAJIPEAVCDependencyObject@@IPEAVCValue@@@Z
    static long ValidateParams(unsigned int, CDependencyObject *, unsigned int, CValue *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCollection@@IEAA@PEAVCCoreServices@@@Z
    CCollection(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CCollection@@MEAAJXZ
    virtual long Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CCollection@@MEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsOwnerInfo@CCollection@@MEAAIXZ
    virtual unsigned int NeedsOwnerInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CCollection@@MEAAJAEBVCValue@@@Z
    virtual long OnAddToCollection(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CCollection@@MEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CCollection@@MEAAJAEBVCValue@@H@Z
    virtual long OnRemoveFromCollection(CValue const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemovingDependencyObject@CCollection@@MEAAXPEAVCDependencyObject@@@Z
    virtual void OnRemovingDependencyObject(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddToCollection@CCollection@@MEAAJAEAVCValue@@@Z
    virtual long PreAddToCollection(CValue &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CCollection@@MEAAJPEAVCDependencyObject@@IP6AX0W4Value@DirtyFlags@@@Z@Z
    virtual long SetOwner(CDependencyObject *, unsigned int, void ( *)(CDependencyObject *, int));
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCollection@@MEAA@XZ
    virtual ~CCollection();
};
