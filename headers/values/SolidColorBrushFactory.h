#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class SolidColorBrushFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithColor@SolidColorBrushFactory@DirectUI@@UEAAJUColor@UI@Windows@@PEAPEAUISolidColorBrush@Media@Xaml@45@@Z
    virtual long CreateInstanceWithColor(::Windows::UI::Color, ::Windows::UI::Xaml::Media::ISolidColorBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColorProperty@SolidColorBrushFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ColorProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SolidColorBrushFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SolidColorBrushFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SolidColorBrushFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SolidColorBrushFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithColorImpl@SolidColorBrushFactory@DirectUI@@AEAAJUColor@UI@Windows@@PEAPEAUISolidColorBrush@Media@Xaml@45@@Z
    long CreateInstanceWithColorImpl(::Windows::UI::Color, ::Windows::UI::Xaml::Media::ISolidColorBrush * *);
};
} // namespace DirectUI
