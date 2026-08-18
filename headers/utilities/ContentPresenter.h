#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ContentPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindDefaultTextBlock@ContentPresenter@DirectUI@@SAJPEAVCTextBlock@@PEBVxstring_ptr@@@Z
    static long BindDefaultTextBlock(CTextBlock *, xstring_ptr const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildrenCleared@ContentPresenter@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnChildrenCleared(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateChangedCallback@ContentPresenter@DirectUI@@SAJPEAVCDependencyObject@@AEBUPropertyChangedParams@@@Z
    static long OnContentTemplateChangedCallback(CDependencyObject *, PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateChangedImpl@ContentPresenter@DirectUI@@QEAAJPEAUIDataTemplate@Xaml@UI@Windows@@0@Z
    long OnContentTemplateChangedImpl(::Windows::UI::Xaml::IDataTemplate *, ::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateSelectorChangedCallback@ContentPresenter@DirectUI@@SAJPEAVCDependencyObject@@AEBUPropertyChangedParams@@@Z
    static long OnContentTemplateSelectorChangedCallback(CDependencyObject *, PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateSelectorChangedImpl@ContentPresenter@DirectUI@@QEAAJPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@0@Z
    long OnContentTemplateSelectorChangedImpl(::Windows::UI::Xaml::Controls::IDataTemplateSelector *, ::Windows::UI::Xaml::Controls::IDataTemplateSelector *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildrenCleared@ContentPresenter@DirectUI@@MEAAJXZ
    virtual long OnChildrenCleared();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ContentPresenter@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
};
} // namespace DirectUI
