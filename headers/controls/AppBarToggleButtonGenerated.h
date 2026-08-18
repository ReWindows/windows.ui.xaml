#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class AppBarToggleButtonGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasBottomLabel@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long GetHasBottomLabel(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AppBarToggleButtonGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultLabelPosition@AppBarToggleButtonGenerated@DirectUI@@UEAAJW4CommandBarDefaultLabelPosition@Controls@Xaml@UI@Windows@@@Z
    virtual long SetDefaultLabelPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DynamicOverflowOrder@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_DynamicOverflowOrder(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Icon@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAPEAUIIconElement@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Icon(::Windows::UI::Xaml::Controls::IIconElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCompact@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsCompact(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInOverflow@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInOverflow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardAcceleratorTextOverride@AppBarToggleButtonGenerated@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_KeyboardAcceleratorTextOverride(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Label(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LabelPosition@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAW4CommandBarLabelPosition@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LabelPosition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplateSettings@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAPEAUIAppBarToggleButtonTemplateSettings@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TemplateSettings(::Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UseOverflowStyle@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_UseOverflowStyle(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DynamicOverflowOrder@AppBarToggleButtonGenerated@DirectUI@@UEAAJH@Z
    virtual long put_DynamicOverflowOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Icon@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAUIIconElement@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Icon(::Windows::UI::Xaml::Controls::IIconElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCompact@AppBarToggleButtonGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsCompact(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Label@AppBarToggleButtonGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Label(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LabelPosition@AppBarToggleButtonGenerated@DirectUI@@UEAAJW4CommandBarLabelPosition@Controls@Xaml@UI@Windows@@@Z
    virtual long put_LabelPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UseOverflowStyle@AppBarToggleButtonGenerated@DirectUI@@UEAAJE@Z
    virtual long put_UseOverflowStyle(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AppBarToggleButtonGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AppBarToggleButtonGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AppBarToggleButtonGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AppBarToggleButtonGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
