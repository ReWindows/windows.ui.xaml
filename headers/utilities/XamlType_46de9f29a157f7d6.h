#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 32 member(s).
namespace Internal {
class XamlType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@XamlType@Internal@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@XamlType@Internal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToMap@XamlType@Internal@@UEAAJPEAUIInspectable@@00@Z
    virtual long AddToMap(IInspectable *, IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToVector@XamlType@Internal@@UEAAJPEAUIInspectable@@0@Z
    virtual long AddToVector(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromString@XamlType@Internal@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long CreateFromString(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@XamlType@Internal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMember@XamlType@Internal@@UEAAJPEAUHSTRING__@@PEAPEAUIXamlMember@Markup@Xaml@UI@Windows@@@Z
    virtual long GetMember(HSTRING__*, ::Windows::UI::Xaml::Markup::IXamlMember * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@XamlType@Internal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@XamlType@Internal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@XamlType@Internal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@XamlType@Internal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunInitializer@XamlType@Internal@@UEAAJXZ
    virtual long RunInitializer();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlType@Internal@@QEAA@IPEAVXamlTypeInfoProvider@Private@@@Z
    XamlType(unsigned int, ::Private::XamlTypeInfoProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseType@XamlType@Internal@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_BaseType(::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentProperty@XamlType@Internal@@UEAAJPEAPEAUIXamlMember@Markup@Xaml@UI@Windows@@@Z
    virtual long get_ContentProperty(::Windows::UI::Xaml::Markup::IXamlMember * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullName@XamlType@Internal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsArray@XamlType@Internal@@UEAAJPEAE@Z
    virtual long get_IsArray(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBindable@XamlType@Internal@@UEAAJPEAE@Z
    virtual long get_IsBindable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCollection@XamlType@Internal@@UEAAJPEAE@Z
    virtual long get_IsCollection(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConstructible@XamlType@Internal@@UEAAJPEAE@Z
    virtual long get_IsConstructible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDictionary@XamlType@Internal@@UEAAJPEAE@Z
    virtual long get_IsDictionary(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMarkupExtension@XamlType@Internal@@UEAAJPEAE@Z
    virtual long get_IsMarkupExtension(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemType@XamlType@Internal@@UEAAJPEAE@Z
    virtual long get_IsSystemType(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemType@XamlType@Internal@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_ItemType(::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyType@XamlType@Internal@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_KeyType(::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@XamlType@Internal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnderlyingType@XamlType@Internal@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_UnderlyingType(::Windows::UI::Xaml::Interop::TypeName *);
};
} // namespace Internal
