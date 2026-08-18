#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class XamlLightFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargetBrush@XamlLightFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long AddTargetBrush(HSTRING__*, ::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargetElement@XamlLightFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long AddTargetElement(HSTRING__*, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@XamlLightFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIXamlLight@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::IXamlLight * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetBrush@XamlLightFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long RemoveTargetBrush(HSTRING__*, ::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetElement@XamlLightFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RemoveTargetElement(HSTRING__*, ::Windows::UI::Xaml::IUIElement *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlLightFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlLightFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@XamlLightFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlLightFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargetBrushImpl@XamlLightFactory@DirectUI@@AEAAJPEAUHSTRING__@@PEAUIBrush@Media@Xaml@UI@Windows@@@Z
    long AddTargetBrushImpl(HSTRING__*, ::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargetElementImpl@XamlLightFactory@DirectUI@@AEAAJPEAUHSTRING__@@PEAUIUIElement@Xaml@UI@Windows@@@Z
    long AddTargetElementImpl(HSTRING__*, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetBrushImpl@XamlLightFactory@DirectUI@@AEAAJPEAUHSTRING__@@PEAUIBrush@Media@Xaml@UI@Windows@@@Z
    long RemoveTargetBrushImpl(HSTRING__*, ::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetElementImpl@XamlLightFactory@DirectUI@@AEAAJPEAUHSTRING__@@PEAUIUIElement@Xaml@UI@Windows@@@Z
    long RemoveTargetElementImpl(HSTRING__*, ::Windows::UI::Xaml::IUIElement *);
};
} // namespace DirectUI
