#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class Panel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementOverride@Panel@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetFirstFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsOwner@Panel@DirectUI@@QEAAJPEAPEAUIItemsControl@Controls@Xaml@UI@Windows@@@Z
    long GetItemsOwner(::Windows::UI::Xaml::Controls::IItemsControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElementOverride@Panel@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLastFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPortallingSupported@Panel@DirectUI@@UEAAEXZ
    virtual unsigned char IsPortallingSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTreeParentUpdated@Panel@DirectUI@@UEAAJPEAVCDependencyObject@@E@Z
    virtual long OnTreeParentUpdated(CDependencyObject *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Children@Panel@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Children(WindissectOpaque * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Panel@DirectUI@@IEAA@XZ
    Panel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Panel@DirectUI@@MEAA@XZ
    virtual ~Panel();
};
} // namespace DirectUI
