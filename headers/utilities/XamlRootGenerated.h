#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class XamlRootGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaterialProperties@XamlRootGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetMaterialProperties(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@XamlRootGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVXamlRoot@Xaml@UI@Windows@@PEAVXamlRootChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@XamlRootGenerated@DirectUI@@QEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_Content(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHostVisible@XamlRootGenerated@DirectUI@@QEAAJPEAE@Z
    long get_IsHostVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizationScale@XamlRootGenerated@DirectUI@@QEAAJPEAN@Z
    long get_RasterizationScale(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@XamlRootGenerated@DirectUI@@QEAAJPEAUSize@Foundation@Windows@@@Z
    long get_Size(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIContext@XamlRootGenerated@DirectUI@@QEAAJPEAPEAUIUIContext@UI@Windows@@@Z
    long get_UIContext(::Windows::UI::IUIContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@XamlRootGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_Changed(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlRootGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlRootGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XamlRootGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlRootGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
