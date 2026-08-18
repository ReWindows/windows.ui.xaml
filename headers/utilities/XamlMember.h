#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace Internal {
class XamlMember {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@XamlMember@Internal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@XamlMember@Internal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@XamlMember@Internal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@XamlMember@Internal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@XamlMember@Internal@@UEAAJPEAUIInspectable@@PEAPEAU3@@Z
    virtual long GetValue(IInspectable *, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@XamlMember@Internal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@XamlMember@Internal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@XamlMember@Internal@@UEAAJPEAUIInspectable@@0@Z
    virtual long SetValue(IInspectable *, IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlMember@Internal@@QEAA@IPEAVXamlTypeInfoProvider@Private@@@Z
    XamlMember(unsigned int, ::Private::XamlTypeInfoProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAttachable@XamlMember@Internal@@UEAAJPEAE@Z
    virtual long get_IsAttachable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDependencyProperty@XamlMember@Internal@@UEAAJPEAE@Z
    virtual long get_IsDependencyProperty(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@XamlMember@Internal@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@XamlMember@Internal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetType@XamlMember@Internal@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_TargetType(::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@XamlMember@Internal@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Markup::IXamlType * *);
};
} // namespace Internal
