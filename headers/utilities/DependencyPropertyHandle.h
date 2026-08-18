#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DependencyPropertyHandle {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DependencyPropertyHandle@DirectUI@@QEAA@XZ
    DependencyPropertyHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDP@DependencyPropertyHandle@DirectUI@@QEAAPEBVCDependencyProperty@@XZ
    CDependencyProperty const * GetDP();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadata@DependencyPropertyHandle@DirectUI@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEAUIPropertyMetadata@567@@Z
    virtual long GetMetadata(::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::IPropertyMetadata * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DependencyPropertyHandle@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DependencyPropertyHandle@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DependencyPropertyHandle@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DependencyPropertyHandle@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
