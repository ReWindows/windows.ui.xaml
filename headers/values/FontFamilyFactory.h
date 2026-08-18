#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class FontFamilyFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithName@FontFamilyFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAPEAU4@PEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithName(HSTRING__*, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XamlAutoFontFamily@FontFamilyFactory@DirectUI@@UEAAJPEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long get_XamlAutoFontFamily(::Windows::UI::Xaml::Media::IFontFamily * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FontFamilyFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FontFamilyFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FontFamilyFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FontFamilyFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithNameImpl@FontFamilyFactory@DirectUI@@AEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAPEAU4@PEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    long CreateInstanceWithNameImpl(HSTRING__*, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XamlAutoFontFamilyImpl@FontFamilyFactory@DirectUI@@AEAAJPEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    long get_XamlAutoFontFamilyImpl(::Windows::UI::Xaml::Media::IFontFamily * *);
};
} // namespace DirectUI
