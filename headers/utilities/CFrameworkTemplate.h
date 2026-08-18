#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CFrameworkTemplate {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFrameworkTemplate@@QEAA@PEAVCCoreServices@@@Z
    CFrameworkTemplate(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CFrameworkTemplate@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadContent@CFrameworkTemplate@@UEAAJPEAPEAVCDependencyObject@@PEAV2@@Z
    virtual long LoadContent(CDependencyObject * *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CFrameworkTemplate@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameworkTemplate@@UEAA@XZ
    virtual ~CFrameworkTemplate();
};
