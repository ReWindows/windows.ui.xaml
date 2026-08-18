#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 56 member(s).
class CDOCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CDOCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CDOCollection@@UEAAJAEAVCValue@@PEAI@Z
    virtual long Append(CValue &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendImpl@CDOCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long AppendImpl(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CDOCollection@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CDOCollection@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CycleCheck@CDOCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long CycleCheck(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CDOCollection@@UEBAIXZ
    virtual unsigned int GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemImpl@CDOCollection@@QEAAPEAVCDependencyObject@@I@Z
    CDependencyObject * GetItemImpl(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemWithAddRef@CDOCollection@@UEAAPEAXI@Z
    virtual void * GetItemWithAddRef(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentForItems@CDOCollection@@QEAAPEAVCDependencyObject@@XZ
    CDependencyObject * GetParentForItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CDOCollection@@UEAAJPEAVCDependencyObject@@PEAH@Z
    virtual long IndexOf(CDependencyObject *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CDOCollection@@UEAAJAEAVCValue@@PEAH@Z
    virtual long IndexOf(CValue &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CDOCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CDOCollection@@UEAAJIAEAVCValue@@@Z
    virtual long Insert(unsigned int, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertImpl@CDOCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long InsertImpl(unsigned int, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDOCollection@CDOCollection@@UEBA_NXZ
    virtual bool IsDOCollection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsObjectAssociated@CDOCollection@@QEAAHPEAVCDependencyObject@@@Z
    int IsObjectAssociated(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CDOCollection@@UEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CDOCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long OnAddToCollection(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CDOCollection@@UEAAJAEBVCValue@@@Z
    virtual long OnAddToCollection(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CDOCollection@@UEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CDOCollection@@UEAAJPEAVCDependencyObject@@H@Z
    virtual long OnRemoveFromCollection(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CDOCollection@@UEAAJAEBVCValue@@H@Z
    virtual long OnRemoveFromCollection(CValue const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddToCollection@CDOCollection@@UEAAJAEAVCValue@@@Z
    virtual long PreAddToCollection(CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateOwnerInfo@CDOCollection@@UEAAJPEAVCDependencyObject@@0@Z
    virtual long PropagateOwnerInfo(CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CDOCollection@@UEAAPEAVCDependencyObject@@PEAV2@@Z
    virtual CDependencyObject * Remove(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CDOCollection@@UEAAPEAXPEAX@Z
    virtual void * Remove(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CDOCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtImpl@CDOCollection@@UEAAPEAVCDependencyObject@@I@Z
    virtual CDependencyObject * RemoveAtImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reserve@CDOCollection@@UEAAJI@Z
    virtual long Reserve(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldAssociateChildren@CDOCollection@@UEAAIPEAVCDependencyObject@@@Z
    virtual unsigned int ShouldAssociateChildren(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?push_back@CDOCollection@@QEAAXAEBV?$xref_ptr@VCDependencyObject@@@@@Z
    void push_back(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove@CDOCollection@@QEAAXPEAVCDependencyObject@@@Z
    void remove(CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDOCollection@@UEAA@XZ
    virtual ~CDOCollection();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDOCollection@@IEAA@PEAVCCoreServices@@_N@Z
    CDOCollection(CCoreServices *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanProcessEnterLeave@CDOCollection@@IEAAIXZ
    unsigned int CanProcessEnterLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeParent@CDOCollection@@IEAAJPEAVCDependencyObject@@00_N@Z
    long ChangeParent(CDependencyObject *, CDependencyObject *, CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildEnter@CDOCollection@@MEAAJPEAVCDependencyObject@@0UEnterParams@@I@Z
    virtual long ChildEnter(CDependencyObject *, CDependencyObject *, EnterParams, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildLeave@CDOCollection@@MEAAJPEAVCDependencyObject@@0ULeaveParams@@I@Z
    virtual long ChildLeave(CDependencyObject *, CDependencyObject *, LeaveParams, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CDOCollection@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStandardNameScopeParent@CDOCollection@@MEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetStandardNameScopeParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CDOCollection@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Neat@CDOCollection@@MEAAJH@Z
    virtual long Neat(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeatImpl@CDOCollection@@IEAAJXZ
    long NeatImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CDOCollection@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChangeHelper@CDOCollection@@IEAAXXZ
    void OnCollectionChangeHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideStandardNameScopeParent@CDOCollection@@MEAAXPEAVCDependencyObject@@@Z
    virtual void OverrideStandardNameScopeParent(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalkCore@CDOCollection@@MEAA_NW4EReferenceTrackerWalkType@DirectUI@@_N1@Z
    virtual bool ReferenceTrackerWalkCore(int, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChildParent@CDOCollection@@IEAAJPEAVCDependencyObject@@00_N@Z
    long SetChildParent(CDependencyObject *, CDependencyObject *, CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldEnsureNameResolution@CDOCollection@@MEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldKeepPeerReference@CDOCollection@@MEAAIXZ
    virtual unsigned int ShouldKeepPeerReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldParentBePublic@CDOCollection@@MEBA_NXZ
    virtual bool ShouldParentBePublic() const;
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldProcessEnterLeave@CDOCollection@@MEAAIXZ
    virtual unsigned int ShouldProcessEnterLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@CDOCollection@@MEAAJPEAVCDependencyObject@@@Z
    virtual long ValidateItem(CDependencyObject *);
};
