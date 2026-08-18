#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class Style {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Style@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seal@Style@DirectUI@@UEAAJXZ
    virtual long Seal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BasedOn@Style@DirectUI@@UEAAJPEAPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long get_BasedOn(::Windows::UI::Xaml::IStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSealed@Style@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSealed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Setters@Style@DirectUI@@UEAAJPEAPEAUISetterBaseCollection@Xaml@UI@Windows@@@Z
    virtual long get_Setters(::Windows::UI::Xaml::ISetterBaseCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetType@Style@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_TargetType(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BasedOn@Style@DirectUI@@UEAAJPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long put_BasedOn(::Windows::UI::Xaml::IStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetType@Style@DirectUI@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long put_TargetType(::Windows::UI::Xaml::Interop::TypeName);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Style@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Style@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Style@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Style@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
