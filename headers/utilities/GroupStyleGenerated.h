#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class GroupStyleGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyChangedEventSourceNoRef@GroupStyleGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIPropertyChangedEventHandler@Data@Xaml@UI@Windows@@UIInspectable@@UIPropertyChangedEventArgs@2345@@2@@Z
    long GetPropertyChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GroupStyleGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@GroupStyleGenerated@DirectUI@@UEAAJPEAUIPropertyChangedEventHandler@Data@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(::Windows::UI::Xaml::Data::IPropertyChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerStyle@GroupStyleGenerated@DirectUI@@UEAAJPEAPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long get_ContainerStyle(::Windows::UI::Xaml::IStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerStyleSelector@GroupStyleGenerated@DirectUI@@UEAAJPEAPEAUIStyleSelector@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ContainerStyleSelector(::Windows::UI::Xaml::Controls::IStyleSelector * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderContainerStyle@GroupStyleGenerated@DirectUI@@UEAAJPEAPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long get_HeaderContainerStyle(::Windows::UI::Xaml::IStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplate@GroupStyleGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplateSelector@GroupStyleGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplateSelector(::Windows::UI::Xaml::Controls::IDataTemplateSelector * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HidesIfEmpty@GroupStyleGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_HidesIfEmpty(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Panel@GroupStyleGenerated@DirectUI@@UEAAJPEAPEAUIItemsPanelTemplate@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Panel(::Windows::UI::Xaml::Controls::IItemsPanelTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContainerStyle@GroupStyleGenerated@DirectUI@@UEAAJPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long put_ContainerStyle(::Windows::UI::Xaml::IStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContainerStyleSelector@GroupStyleGenerated@DirectUI@@UEAAJPEAUIStyleSelector@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ContainerStyleSelector(::Windows::UI::Xaml::Controls::IStyleSelector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderContainerStyle@GroupStyleGenerated@DirectUI@@UEAAJPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long put_HeaderContainerStyle(::Windows::UI::Xaml::IStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplate@GroupStyleGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplateSelector@GroupStyleGenerated@DirectUI@@UEAAJPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplateSelector(::Windows::UI::Xaml::Controls::IDataTemplateSelector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HidesIfEmpty@GroupStyleGenerated@DirectUI@@UEAAJE@Z
    virtual long put_HidesIfEmpty(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Panel@GroupStyleGenerated@DirectUI@@UEAAJPEAUIItemsPanelTemplate@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Panel(::Windows::UI::Xaml::Controls::IItemsPanelTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@GroupStyleGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GroupStyleGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GroupStyleGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@GroupStyleGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GroupStyleGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
