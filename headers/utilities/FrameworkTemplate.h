#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class FrameworkTemplate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTemplateCaching@FrameworkTemplate@DirectUI@@UEAAJE@Z
    virtual long EnableTemplateCaching(unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FrameworkTemplate@DirectUI@@QEAA@XZ
    FrameworkTemplate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FrameworkTemplate@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FrameworkTemplate@DirectUI@@UEAA@XZ
    virtual ~FrameworkTemplate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FrameworkTemplate@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FrameworkTemplate@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FrameworkTemplate@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FrameworkTemplate@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
