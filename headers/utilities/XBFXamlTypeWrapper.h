#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
namespace DirectUI {
class XBFXamlTypeWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToMap@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAUIInspectable@@00@Z
    virtual long AddToMap(IInspectable *, IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToVector@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAUIInspectable@@0@Z
    virtual long AddToVector(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromString@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long CreateFromString(HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXBFXamlTypeWrapper@XBFXamlTypeWrapper@DirectUI@@SAJPEAUIXamlType@Markup@Xaml@UI@Windows@@PEAPEAU34567@@Z
    static long CreateXBFXamlTypeWrapper(::Windows::UI::Xaml::Markup::IXamlType *, ::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMember@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUIXamlMember@Markup@Xaml@UI@Windows@@@Z
    virtual long GetMember(HSTRING__*, ::Windows::UI::Xaml::Markup::IXamlMember * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XBFXamlTypeWrapper@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunInitializer@XBFXamlTypeWrapper@DirectUI@@UEAAJXZ
    virtual long RunInitializer();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XBFXamlTypeWrapper@DirectUI@@QEAA@XZ
    XBFXamlTypeWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseType@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_BaseType(::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentProperty@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAPEAUIXamlMember@Markup@Xaml@UI@Windows@@@Z
    virtual long get_ContentProperty(::Windows::UI::Xaml::Markup::IXamlMember * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullName@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsArray@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsArray(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBindable@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsBindable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCollection@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsCollection(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConstructible@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsConstructible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDictionary@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsDictionary(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMarkupExtension@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsMarkupExtension(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemType@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_ItemType(::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyType@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_KeyType(::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnderlyingType@XBFXamlTypeWrapper@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_UnderlyingType(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XBFXamlTypeWrapper@DirectUI@@UEAA@XZ
    virtual ~XBFXamlTypeWrapper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XBFXamlTypeWrapper@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XBFXamlTypeWrapper@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XBFXamlTypeWrapper@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
};
} // namespace DirectUI
