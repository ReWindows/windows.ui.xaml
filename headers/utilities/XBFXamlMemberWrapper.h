#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class XBFXamlMemberWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXBFXamlMemberWrapper@XBFXamlMemberWrapper@DirectUI@@SAJPEAUIXamlMember@Markup@Xaml@UI@Windows@@PEAPEAU34567@@Z
    static long CreateXBFXamlMemberWrapper(::Windows::UI::Xaml::Markup::IXamlMember *, ::Windows::UI::Xaml::Markup::IXamlMember * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@XBFXamlMemberWrapper@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@@Z
    virtual long GetValue(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XBFXamlMemberWrapper@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@XBFXamlMemberWrapper@DirectUI@@UEAAJPEAUIInspectable@@0@Z
    virtual long SetValue(IInspectable *, IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XBFXamlMemberWrapper@DirectUI@@QEAA@XZ
    XBFXamlMemberWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAttachable@XBFXamlMemberWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsAttachable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDependencyProperty@XBFXamlMemberWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsDependencyProperty(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@XBFXamlMemberWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@XBFXamlMemberWrapper@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetType@XBFXamlMemberWrapper@DirectUI@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_TargetType(::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@XBFXamlMemberWrapper@DirectUI@@UEAAJPEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XBFXamlMemberWrapper@DirectUI@@UEAA@XZ
    virtual ~XBFXamlMemberWrapper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XBFXamlMemberWrapper@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XBFXamlMemberWrapper@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XBFXamlMemberWrapper@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
};
} // namespace DirectUI
