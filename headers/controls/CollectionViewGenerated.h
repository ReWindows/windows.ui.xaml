#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class CollectionViewGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CollectionViewGenerated@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    virtual long GetCustomProperty(HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedProperty@CollectionViewGenerated@DirectUI@@UEAAJPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@PEAPEAUICustomProperty@Data@678@@Z
    virtual long GetIndexedProperty(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyChangedEventSourceNoRef@CollectionViewGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIPropertyChangedEventHandler@Data@Xaml@UI@Windows@@UIInspectable@@UIPropertyChangedEventArgs@2345@@2@@Z
    long GetPropertyChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRepresentation@CollectionViewGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetStringRepresentation(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItemsAsync@CollectionViewGenerated@DirectUI@@UEAAJIPEAPEAU?$IAsyncOperation@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long LoadMoreItemsAsync(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCurrentTo@CollectionViewGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAE@Z
    virtual long MoveCurrentTo(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCurrentToFirst@CollectionViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long MoveCurrentToFirst(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCurrentToLast@CollectionViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long MoveCurrentToLast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCurrentToNext@CollectionViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long MoveCurrentToNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCurrentToPosition@CollectionViewGenerated@DirectUI@@UEAAJHPEAE@Z
    virtual long MoveCurrentToPosition(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCurrentToPrevious@CollectionViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long MoveCurrentToPrevious(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@CollectionViewGenerated@DirectUI@@UEAAJPEAUIPropertyChangedEventHandler@Data@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(::Windows::UI::Xaml::Data::IPropertyChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionGroups@CollectionViewGenerated@DirectUI@@UEAAJPEAPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_CollectionGroups(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentItem@CollectionViewGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_CurrentItem(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPosition@CollectionViewGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_CurrentPosition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasMoreItems@CollectionViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasMoreItems(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCurrentAfterLast@CollectionViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsCurrentAfterLast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCurrentBeforeFirst@CollectionViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsCurrentBeforeFirst(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CollectionViewGenerated@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@CollectionViewGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CollectionViewGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CollectionViewGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CollectionViewGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
