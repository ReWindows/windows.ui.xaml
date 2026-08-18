#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI::UIElement {
class VirtualizationInformation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuildTreeArgs@VirtualizationInformation@UIElement@DirectUI@@QEAAJPEAV?$ComPtr@UIContainerContentChangingEventArgs@Controls@Xaml@UI@Windows@@@ctl@@@Z
    long GetBuildTreeArgs(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@VirtualizationInformation@UIElement@DirectUI@@QEBA?AV?$ComPtr@UIInspectable@@@ctl@@XZ
    WindissectOpaque GetItem() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedTemplate@VirtualizationInformation@UIElement@DirectUI@@QEBA?AV?$ComPtr@UIDataTemplate@Xaml@UI@Windows@@@ctl@@XZ
    WindissectOpaque GetSelectedTemplate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsRealized@VirtualizationInformation@UIElement@DirectUI@@QEAAX_N@Z
    void SetIsRealized(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@VirtualizationInformation@UIElement@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long SetItem(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualizationInformation@UIElement@DirectUI@@QEAA@XZ
    ~VirtualizationInformation();
};
} // namespace DirectUI::UIElement
