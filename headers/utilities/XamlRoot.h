#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class XamlRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@XamlRoot@DirectUI@@SAPEAUIInspectable@@PEAVVisualTree@@@Z
    static IInspectable * Create(VisualTree *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangedEventSourceNoRef@XamlRoot@DirectUI@@UEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVXamlRoot@Xaml@UI@Windows@@PEAVXamlRootChangedEventArgs@234@@Foundation@Windows@@UIXamlRoot@Xaml@UI@3@UIXamlRootChangedEventArgs@563@@2@@Z
    virtual long GetChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForElementStatic@XamlRoot@DirectUI@@SA?AV?$ComPtr@UIXamlRoot@Xaml@UI@Windows@@@ctl@@PEAVDependencyObject@2@@Z
    static WindissectOpaque GetForElementStatic(::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChangedEvent@XamlRoot@DirectUI@@QEAAJXZ
    long RaiseChangedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForElementStatic@XamlRoot@DirectUI@@SAJPEAVDependencyObject@2@PEAUIXamlRoot@Xaml@UI@Windows@@@Z
    static long SetForElementStatic(::DirectUI::DependencyObject *, ::Windows::UI::Xaml::IXamlRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentImpl@XamlRoot@DirectUI@@QEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_ContentImpl(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIContextImpl@XamlRoot@DirectUI@@QEAAJPEAPEAUIUIContext@UI@Windows@@@Z
    long get_UIContextImpl(::Windows::UI::IUIContext * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlRoot@DirectUI@@UEAA@XZ
    virtual ~XamlRoot();
};
} // namespace DirectUI
