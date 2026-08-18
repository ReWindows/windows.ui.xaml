#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CNoParentShareableDependencyObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateImpl@CNoParentShareableDependencyObject@@UEAAXXZ
    virtual void ActivateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CNoParentShareableDependencyObject@@UEAAJPEAPEAV1@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CNoParentShareableDependencyObject@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateImpl@CNoParentShareableDependencyObject@@UEAAXXZ
    virtual void DeactivateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CNoParentShareableDependencyObject@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long Enter(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CNoParentShareableDependencyObject@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@CNoParentShareableDependencyObject@@UEBA_NXZ
    virtual bool IsActive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@CNoParentShareableDependencyObject@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long Leave(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CNoParentShareableDependencyObject@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSharedObjectRegisterName@CNoParentShareableDependencyObject@@UEBA_NPEAVCResourceDictionary@@@Z
    virtual bool ShouldSharedObjectRegisterName(CResourceDictionary *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNoParentShareableDependencyObject@@IEAA@PEAVCCoreServices@@@Z
    CNoParentShareableDependencyObject(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSkippedLiveEnter@CNoParentShareableDependencyObject@@MEAAJXZ
    virtual long OnSkippedLiveEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSkippedLiveLeave@CNoParentShareableDependencyObject@@MEAAJXZ
    virtual long OnSkippedLiveLeave();
};
