#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class ContentControlGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalBounds@ContentControlGenerated@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetGlobalBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScale@ContentControlGenerated@DirectUI@@UEAAJPEAM@Z
    virtual long GetRasterizationScale(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ContentControlGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@ContentControlGenerated@DirectUI@@UEAAJPEAUIInspectable@@0@Z
    virtual long OnContentChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChangedProtected@ContentControlGenerated@DirectUI@@QEAAJPEAUIInspectable@@0@Z
    long OnContentChangedProtected(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateChanged@ContentControlGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@0@Z
    virtual long OnContentTemplateChanged(::Windows::UI::Xaml::IDataTemplate *, ::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateChangedProtected@ContentControlGenerated@DirectUI@@QEAAJPEAUIDataTemplate@Xaml@UI@Windows@@0@Z
    long OnContentTemplateChangedProtected(::Windows::UI::Xaml::IDataTemplate *, ::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateSelectorChanged@ContentControlGenerated@DirectUI@@UEAAJPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@0@Z
    virtual long OnContentTemplateSelectorChanged(::Windows::UI::Xaml::Controls::IDataTemplateSelector *, ::Windows::UI::Xaml::Controls::IDataTemplateSelector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentTemplateSelectorChangedProtected@ContentControlGenerated@DirectUI@@QEAAJPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@0@Z
    long OnContentTemplateSelectorChangedProtected(::Windows::UI::Xaml::Controls::IDataTemplateSelector *, ::Windows::UI::Xaml::Controls::IDataTemplateSelector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@ContentControlGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Content(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentTemplate@ContentControlGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_ContentTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentTemplateRoot@ContentControlGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_ContentTemplateRoot(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentTemplateSelector@ContentControlGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ContentTemplateSelector(::Windows::UI::Xaml::Controls::IDataTemplateSelector * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentTransitions@ContentControlGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_ContentTransitions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Content@ContentControlGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Content(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentTemplate@ContentControlGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_ContentTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentTemplateSelector@ContentControlGenerated@DirectUI@@UEAAJPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ContentTemplateSelector(::Windows::UI::Xaml::Controls::IDataTemplateSelector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentTransitions@ContentControlGenerated@DirectUI@@UEAAJPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_ContentTransitions(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ContentControlGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ContentControlGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ContentControlGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContentControlGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
