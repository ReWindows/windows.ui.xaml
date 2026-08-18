#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CDataTemplate {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDataTemplate@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadContent@CDataTemplate@@UEAAJPEAPEAVCDependencyObject@@PEAV2@@Z
    virtual long LoadContent(CDependencyObject * *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CDataTemplate@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContentNoRef@CDataTemplate@@QEAAJPEAPEAVCDependencyObject@@PEAV2@@Z
    long QueryContentNoRef(CDependencyObject * *, CDependencyObject *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDataTemplate@@IEAA@PEAVCCoreServices@@@Z
    CDataTemplate(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataTemplate@@MEAA@XZ
    virtual ~CDataTemplate();
};
