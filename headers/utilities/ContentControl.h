#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ContentControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ContentControl@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalBoundsImpl@ContentControl@DirectUI@@QEAAJPEAURect@Foundation@Windows@@@Z
    long GetGlobalBoundsImpl(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@ContentControl@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ContentControl@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateChangedImpl@ContentControl@DirectUI@@QEAAJPEAUIDataTemplate@Xaml@UI@Windows@@0@Z
    long OnContentTemplateChangedImpl(::Windows::UI::Xaml::IDataTemplate *, ::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateSelectorChangedImpl@ContentControl@DirectUI@@QEAAJPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@0@Z
    long OnContentTemplateSelectorChangedImpl(::Windows::UI::Xaml::Controls::IDataTemplateSelector *, ::Windows::UI::Xaml::Controls::IDataTemplateSelector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentTemplateRootImpl@ContentControl@DirectUI@@QEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_ContentTemplateRootImpl(::Windows::UI::Xaml::IUIElement * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectVisualChildren@ContentControl@DirectUI@@MEAAJXZ
    virtual long OnDisconnectVisualChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ContentControl@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateChanged@ContentControl@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnContentTemplateChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateSelectorChanged@ContentControl@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnContentTemplateSelectorChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSelectedTemplate@ContentControl@DirectUI@@AEAAJPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@PEAUIInspectable@@EPEAPEAUIDataTemplate@567@@Z
    long RefreshSelectedTemplate(::Windows::UI::Xaml::Controls::IDataTemplateSelector *, IInspectable *, unsigned char, ::Windows::UI::Xaml::IDataTemplate * *);
};
} // namespace DirectUI
