#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CRangeBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CRangeBase@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRangeBase@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRangeBase@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CRangeBase@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CRangeBase@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRangeBase@@IEAA@PEAVCCoreServices@@@Z
    CRangeBase(CCoreServices *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceAndSetValue@CRangeBase@@AEAAJPEBUSetValueParams@@NN@Z
    long CoerceAndSetValue(SetValueParams const *, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDoubleValueHelper@CRangeBase@@AEAAJW4KnownPropertyIndex@@AEAN@Z
    long GetDoubleValueHelper(int, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDoubleValueHelper@CRangeBase@@AEAAJPEBUSetValueParams@@W4KnownPropertyIndex@@N@Z
    long SetDoubleValueHelper(SetValueParams const *, int, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaximum@CRangeBase@@AEAAJPEBUSetValueParams@@N@Z
    long SetMaximum(SetValueParams const *, double);
};
