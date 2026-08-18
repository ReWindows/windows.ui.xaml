#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CDeployment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDeployment@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationObjectForResourceLookup@CDeployment@@QEAAPEAVCApplication@@XZ
    CApplication * GetApplicationObjectForResourceLookup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDeployment@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?JupiterComplete@CDeployment@@QEAAJPEAVCApplication@@@Z
    long JupiterComplete(CApplication *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeployment@@MEAA@XZ
    virtual ~CDeployment();
};
