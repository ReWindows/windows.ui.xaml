#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CBinding {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CBinding@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBinding@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBinding@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CBinding@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBinding@CBinding@@QEAAJPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    long SetBinding(CDependencyObject *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBinding@@UEAA@XZ
    virtual ~CBinding();
};
