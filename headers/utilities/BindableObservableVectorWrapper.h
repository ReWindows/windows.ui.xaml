#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class BindableObservableVectorWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@BindableObservableVectorWrapper@DirectUI@@SAJPEAUIBindableVector@Interop@Xaml@UI@Windows@@PEAUINotifyCollectionChanged@4567@PEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@7@@Z
    static long CreateInstance(::Windows::UI::Xaml::Interop::IBindableVector *, ::Windows::UI::Xaml::Interop::INotifyCollectionChanged *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@BindableObservableVectorWrapper@DirectUI@@SAJPEAUIBindableObservableVector@Interop@Xaml@UI@Windows@@PEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@7@@Z
    static long CreateInstance(::Windows::UI::Xaml::Interop::IBindableObservableVector *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItemsAsync@BindableObservableVectorWrapper@DirectUI@@UEAAJIPEAPEAU?$IAsyncOperation@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long LoadMoreItemsAsync(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VectorChanged@BindableObservableVectorWrapper@DirectUI@@UEAAJPEAU?$VectorChangedEventHandler@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VectorChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasMoreItems@BindableObservableVectorWrapper@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasMoreItems(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VectorChanged@BindableObservableVectorWrapper@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VectorChanged(EventRegistrationToken);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BindableObservableVectorWrapper@DirectUI@@IEAA@XZ
    BindableObservableVectorWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BindableObservableVectorWrapper@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BindableObservableVectorWrapper@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInstance@BindableObservableVectorWrapper@DirectUI@@IEAAJPEAUIBindableVector@Interop@Xaml@UI@Windows@@PEAUINotifyCollectionChanged@4567@PEAUIInspectable@@@Z
    long InitializeInstance(::Windows::UI::Xaml::Interop::IBindableVector *, ::Windows::UI::Xaml::Interop::INotifyCollectionChanged *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInstance@BindableObservableVectorWrapper@DirectUI@@IEAAJPEAUIBindableVector@Interop@Xaml@UI@Windows@@PEAUIBindableObservableVector@4567@PEAUIInspectable@@@Z
    long InitializeInstance(::Windows::UI::Xaml::Interop::IBindableVector *, ::Windows::UI::Xaml::Interop::IBindableObservableVector *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@BindableObservableVectorWrapper@DirectUI@@MEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BindableObservableVectorWrapper@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetINCC@BindableObservableVectorWrapper@DirectUI@@IEAAJPEAUINotifyCollectionChanged@Interop@Xaml@UI@Windows@@@Z
    long SetINCC(::Windows::UI::Xaml::Interop::INotifyCollectionChanged *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetObservableVector@BindableObservableVectorWrapper@DirectUI@@IEAAJPEAUIBindableObservableVector@Interop@Xaml@UI@Windows@@@Z
    long SetObservableVector(::Windows::UI::Xaml::Interop::IBindableObservableVector *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BindableObservableVectorWrapper@DirectUI@@MEAA@XZ
    virtual ~BindableObservableVectorWrapper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCollectionChange@BindableObservableVectorWrapper@DirectUI@@AEAAJPEAUINotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@@@Z
    long ProcessCollectionChange(::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessVectorChange@BindableObservableVectorWrapper@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long ProcessVectorChange(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVectorChanged@BindableObservableVectorWrapper@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long RaiseVectorChanged(int, unsigned int);
};
} // namespace DirectUI
