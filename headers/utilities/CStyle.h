#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
class CStyle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForBasedOnCircularReferences@CStyle@@QEAAJXZ
    long CheckForBasedOnCircularReferences();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyAtSetterIndex@CStyle@@QEAAJIPEAW4KnownPropertyIndex@@@Z
    long GetPropertyAtSetterIndex(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CStyle@@QEAAJW4KnownPropertyIndex@@PEAVCValue@@PEA_N@Z
    long GetPropertyValue(int, CValue *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CStyle@@QEAAJW4KnownPropertyIndex@@_NPEAVCValue@@PEA_N@Z
    long GetPropertyValue(int, bool, CValue *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetterCollection@CStyle@@QEBAPEAVCSetterBaseCollection@@XZ
    CSetterBaseCollection * GetSetterCollection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetterCount@CStyle@@QEAAIXZ
    unsigned int GetSetterCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CStyle@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CStyle@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMutableSetters@CStyle@@QEBA_N_N@Z
    bool HasMutableSetters(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPropertySetter@CStyle@@QEAAJW4KnownPropertyIndex@@PEA_N@Z
    long HasPropertySetter(int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMutableSetterValueChanged@CStyle@@QEAAJQEAVCSetter@@@Z
    long NotifyMutableSetterValueChanged(CSetter * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySetterApplied@CStyle@@QEAAJI@Z
    long NotifySetterApplied(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CStyle@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseOverride@CStyle@@UEAAXXZ
    virtual void ReleaseOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seal@CStyle@@QEAAJXZ
    long Seal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CStyle@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToMutableSetters@CStyle@@QEAAXXZ
    void SubscribeToMutableSetters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromMutableSetters@CStyle@@QEAAXXZ
    void UnsubscribeFromMutableSetters();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStyle@@UEAA@XZ
    virtual ~CStyle();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CStyle@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalkCore@CStyle@@MEAA_NW4EReferenceTrackerWalkType@DirectUI@@_N1@Z
    virtual bool ReferenceTrackerWalkCore(int, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMergedBasedOnSetterCollection@CStyle@@AEAAJXZ
    long CreateMergedBasedOnSetterCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOptimizedStyle@CStyle@@AEAAJXZ
    long EnsureOptimizedStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FaultInOptimizedStyle@CStyle@@AEAAJXZ
    long FaultInOptimizedStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateBasedOnTargetType@CStyle@@AEAAJXZ
    long ValidateBasedOnTargetType();
};
