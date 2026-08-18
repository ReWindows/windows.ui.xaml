#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class DependencyPropertyFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnsetValue@DependencyPropertyFactory@DirectUI@@SAJPEAUIInspectable@@AEAE@Z
    static long IsUnsetValue(IInspectable *, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@DependencyPropertyFactory@DirectUI@@UEAAJPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@1PEAUIPropertyMetadata@678@PEAPEAUIDependencyProperty@678@@Z
    virtual long Register(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::IPropertyMetadata *, ::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAttached@DependencyPropertyFactory@DirectUI@@UEAAJPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@1PEAUIPropertyMetadata@678@PEAPEAUIDependencyProperty@678@@Z
    virtual long RegisterAttached(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::IPropertyMetadata *, ::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnsetValue@DependencyPropertyFactory@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_UnsetValue(IInspectable * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@DependencyPropertyFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DependencyPropertyFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DependencyPropertyFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DependencyPropertyFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
