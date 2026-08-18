#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CWinWorkItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupGroupCancelCallback@CWinWorkItem@@SAXPEAX0@Z
    static void CleanupGroupCancelCallback(void *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataNoRef@CWinWorkItem@@UEAAPEAUIObject@@XZ
    virtual IObject * GetDataNoRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Submit@CWinWorkItem@@UEAAJXZ
    virtual long Submit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wait@CWinWorkItem@@UEAAJI@Z
    virtual long Wait(unsigned int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinWorkItem@@MEAA@XZ
    virtual ~CWinWorkItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkCallback@CWinWorkItem@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    static void WorkCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WORK *);
};
