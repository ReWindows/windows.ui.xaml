#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 30 member(s).
class CUIElementCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CUIElementCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIElementCollection@@QEAA@PEAVCCoreServices@@@Z
    CUIElementCollection(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CUIElementCollection@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CUIElementCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CUIElementCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CUIElementCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnloadingElement@CUIElementCollection@@QEAAIPEAVCUIElement@@@Z
    unsigned int IsUnloadingElement(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@CUIElementCollection@@QEAAJHH@Z
    long Move(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CUIElementCollection@@UEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CUIElementCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long OnAddToCollection(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CUIElementCollection@@UEAAJPEAVCDependencyObject@@H@Z
    virtual long OnRemoveFromCollection(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CUIElementCollection@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CUIElementCollection@@UEAAPEAVCDependencyObject@@PEAV2@@Z
    virtual CDependencyObject * Remove(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllElements@CUIElementCollection@@QEAAJI@Z
    long RemoveAllElements(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllUnloadingChildren@CUIElementCollection@@QEAAJ_NPEAVDCompTreeHost@@@Z
    long RemoveAllUnloadingChildren(bool, DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CUIElementCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtImpl@CUIElementCollection@@UEAAPEAVCDependencyObject@@I@Z
    virtual CDependencyObject * RemoveAtImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUnloadedElement@CUIElementCollection@@QEAAJPEAVCUIElement@@IPEAI@Z
    long RemoveUnloadedElement(CUIElement *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CUIElementCollection@@UEAAJPEAVCDependencyObject@@P6AX0W4Value@DirtyFlags@@@Z@Z
    virtual long SetOwner(CDependencyObject *, void ( *)(CDependencyObject *, int));
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@CUIElementCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long ValidateItem(CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIElementCollection@@UEAA@XZ
    virtual ~CUIElementCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CUIElementCollection@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemovingDependencyObject@CUIElementCollection@@MEAAXPEAVCDependencyObject@@@Z
    virtual void OnRemovingDependencyObject(CDependencyObject *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySortedCollection@CUIElementCollection@@AEAAXXZ
    void DestroySortedCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUnloadingStorage@CUIElementCollection@@CAJPEAV1@@Z
    static long EnsureUnloadingStorage(CUIElementCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildrenChanged@CUIElementCollection@@AEAAXPEAVCDependencyObject@@@Z
    void OnChildrenChanged(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CUIElementCollection@@AEAAPEAVCDependencyObject@@IPEAV2@@Z
    CDependencyObject * Remove(unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadElement@CUIElementCollection@@AEAAIIPEAVCUIElement@@W4UnloadCleanup@@@Z
    unsigned int UnloadElement(unsigned int, CUIElement *, int);
};
