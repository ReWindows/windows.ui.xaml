#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace ctl {
class ComBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsNonDelegatingInspectable@ComBase@ctl@@UEAAPEAUINonDelegatingUnknown@2@XZ
    virtual WindissectOpaque * AsNonDelegatingInspectable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRefCount@ComBase@ctl@@QEAAKXZ
    unsigned long GetRefCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComposed@ComBase@ctl@@QEAAHXZ
    int IsComposed();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRefImpl@ComBase@ctl@@IEAAKXZ
    unsigned long AddRefImpl();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComBase@ctl@@IEAA@XZ
    ComBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ComBase@ctl@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIidsImpl@ComBase@ctl@@IEAAJPEAKPEAPEAU_GUID@@@Z
    long GetIidsImpl(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ComBase@ctl@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ComBase@ctl@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ComBase@ctl@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ComBase@ctl@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@ComBase@ctl@@MEAAXXZ
    virtual void OnFinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ComBase@ctl@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseImpl@ComBase@ctl@@IEAAKXZ
    unsigned long ReleaseImpl();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComBase@ctl@@MEAA@XZ
    virtual ~ComBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFTM@ComBase@ctl@@AEAAJXZ
    long EnsureFTM();
};
} // namespace ctl
