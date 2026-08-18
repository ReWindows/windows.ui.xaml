#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CMultiParentShareableDependencyObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddParent@CMultiParentShareableDependencyObject@@UEAAJPEAVCDependencyObject@@_NP6AX0W4Value@DirtyFlags@@@Z@Z
    virtual long AddParent(CDependencyObject *, bool, void ( *)(CDependencyObject *, int));
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CMultiParentShareableDependencyObject@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleParents@CMultiParentShareableDependencyObject@@UEBA_NXZ
    virtual bool DoesAllowMultipleParents() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMentor@CMultiParentShareableDependencyObject@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetMentor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CMultiParentShareableDependencyObject@@UEBAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentCount@CMultiParentShareableDependencyObject@@UEBA_KXZ
    virtual uint64_t GetParentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentItem@CMultiParentShareableDependencyObject@@UEBAPEAVCDependencyObject@@_K@Z
    virtual CDependencyObject * GetParentItem(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveParent@CMultiParentShareableDependencyObject@@UEAAJPEAVCDependencyObject@@@Z
    virtual long RemoveParent(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentForInheritanceContextOnly@CMultiParentShareableDependencyObject@@UEAAXPEAVCDependencyObject@@@Z
    virtual void SetParentForInheritanceContextOnly(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSharedObjectRegisterName@CMultiParentShareableDependencyObject@@UEBA_NPEAVCResourceDictionary@@@Z
    virtual bool ShouldSharedObjectRegisterName(CResourceDictionary *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMultiParentShareableDependencyObject@@UEAA@XZ
    virtual ~CMultiParentShareableDependencyObject();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMultiParentShareableDependencyObject@@IEAA@PEAVCCoreServices@@@Z
    CMultiParentShareableDependencyObject(CCoreServices *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMultiParentShareableDependencyObject@@IEAA@AEBV0@AEAJ@Z
    CMultiParentShareableDependencyObject(CMultiParentShareableDependencyObject const &, long &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CMultiParentShareableDependencyObject@@MEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
};
