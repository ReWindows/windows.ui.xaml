#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class PopupPlacementEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlacementTarget@PopupPlacementEventArgs@DirectUI@@UEAAJPEAPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    virtual long get_PlacementTarget(::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PopupParent@PopupPlacementEventArgs@DirectUI@@UEAAJPEAPEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PopupParent(::Windows::UI::Xaml::Controls::IPanel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScreenRect@PopupPlacementEventArgs@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_ScreenRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransformMatrix@PopupPlacementEventArgs@DirectUI@@UEAAJPEAUMatrix@Media@Xaml@UI@Windows@@@Z
    virtual long get_TransformMatrix(::Windows::UI::Xaml::Media::Matrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlacementTarget@PopupPlacementEventArgs@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    virtual long put_PlacementTarget(::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PopupParent@PopupPlacementEventArgs@DirectUI@@UEAAJPEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    virtual long put_PopupParent(::Windows::UI::Xaml::Controls::IPanel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScreenRect@PopupPlacementEventArgs@DirectUI@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_ScreenRect(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransformMatrix@PopupPlacementEventArgs@DirectUI@@UEAAJUMatrix@Media@Xaml@UI@Windows@@@Z
    virtual long put_TransformMatrix(::Windows::UI::Xaml::Media::Matrix);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PopupPlacementEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@PopupPlacementEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PopupPlacementEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PopupPlacementEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PopupPlacementEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
