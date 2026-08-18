#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class DxamlCoreTestHooksFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DxamlCoreTestHooksFactory@DirectUI@@QEAA@XZ
    DxamlCoreTestHooksFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@DxamlCoreTestHooksFactory@DirectUI@@UEAAJPEAPEAUIDxamlCoreTestHooks@Xaml@UI@Windows@@@Z
    virtual long GetForCurrentThread(::Windows::UI::Xaml::IDxamlCoreTestHooks * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DxamlCoreTestHooksFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DxamlCoreTestHooksFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DxamlCoreTestHooksFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThreadImpl@DxamlCoreTestHooksFactory@DirectUI@@AEAAJPEAPEAUIDxamlCoreTestHooks@Xaml@UI@Windows@@@Z
    long GetForCurrentThreadImpl(::Windows::UI::Xaml::IDxamlCoreTestHooks * *);
};
} // namespace DirectUI
