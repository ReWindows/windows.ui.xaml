#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CTransitionCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTransitionCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CTransitionCollection@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicableTransitionsNoAddRefs@CTransitionCollection@@QEAAJPEAVCUIElement@@W4TransitionTrigger@DirectUI@@AEAV?$xvector@PEAVCTransition@@@@@Z
    long GetApplicableTransitionsNoAddRefs(CUIElement *, int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTransitionCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssociated@CTransitionCollection@@UEAA_NXZ
    virtual bool IsAssociated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsOwnerInfo@CTransitionCollection@@UEAAIXZ
    virtual unsigned int NeedsOwnerInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CTransitionCollection@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssociated@CTransitionCollection@@UEAAX_NPEAVCDependencyObject@@@Z
    virtual void SetAssociated(bool, CDependencyObject *);
};
