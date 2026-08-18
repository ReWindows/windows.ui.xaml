#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 31 member(s).
namespace DirectUI {
class CollectionView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomPropertyImpl@CollectionView@DirectUI@@QEAAJPEAUHSTRING__@@PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    long GetCustomPropertyImpl(HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItemsAsyncImpl@CollectionView@DirectUI@@UEAAJIPEAPEAU?$IAsyncOperation@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long LoadMoreItemsAsyncImpl(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCurrentToImpl@CollectionView@DirectUI@@QEAAJPEAUIInspectable@@PEAE@Z
    long MoveCurrentToImpl(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCurrentToLastImpl@CollectionView@DirectUI@@QEAAJPEAE@Z
    long MoveCurrentToLastImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CurrentChanged@CollectionView@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CurrentChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CurrentChanging@CollectionView@DirectUI@@UEAAJPEAUICurrentChangingEventHandler@Data@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CurrentChanging(::Windows::UI::Xaml::Data::ICurrentChangingEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionGroupsImpl@CollectionView@DirectUI@@UEAAJPEAPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_CollectionGroupsImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasMoreItemsImpl@CollectionView@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasMoreItemsImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CurrentChanged@CollectionView@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CurrentChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CurrentChanging@CollectionView@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CurrentChanging(EventRegistrationToken);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CollectionView@DirectUI@@IEAA@XZ
    CollectionView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CollectionView@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@CollectionView@DirectUI@@MEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCollectionChange@CollectionView@DirectUI@@IEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    long ProcessCollectionChange(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePropertyChanged@CollectionView@DirectUI@@IEAAJPEBGI@Z
    long RaisePropertyChanged(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VectorChanged@CollectionView@DirectUI@@MEAAJPEAU?$VectorChangedEventHandler@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VectorChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VectorChanged@CollectionView@DirectUI@@MEAAJUEventRegistrationToken@@@Z
    virtual long remove_VectorChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CollectionView@DirectUI@@MEAA@XZ
    virtual ~CollectionView();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionGroupsPropertyValue@CollectionView@DirectUI@@CAJPEAUIInspectable@@PEAPEAU3@@Z
    static long GetCollectionGroupsPropertyValue(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentChangedEventSource@CollectionView@DirectUI@@AEAAJPEAPEAV?$CFrameworkEventSource@UICurrentChangedEventSource@DirectUI@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U6@@2@@Z
    long GetCurrentChangedEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentChangingEventSource@CollectionView@DirectUI@@AEAAJPEAPEAV?$CFrameworkEventSource@UICurrentChangingEventSource@DirectUI@@UICurrentChangingEventHandler@Data@Xaml@UI@Windows@@UIInspectable@@UICurrentChangingEventArgs@4567@@2@@Z
    long GetCurrentChangingEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentItemPropertyValue@CollectionView@DirectUI@@CAJPEAUIInspectable@@PEAPEAU3@@Z
    static long GetCurrentItemPropertyValue(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPositionPropertyValue@CollectionView@DirectUI@@CAJPEAUIInspectable@@PEAPEAU3@@Z
    static long GetCurrentPositionPropertyValue(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasMoreItemsPropertyValue@CollectionView@DirectUI@@CAJPEAUIInspectable@@PEAPEAU3@@Z
    static long GetHasMoreItemsPropertyValue(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCurrentAfterLastPropertyValue@CollectionView@DirectUI@@CAJPEAUIInspectable@@PEAPEAU3@@Z
    static long GetIsCurrentAfterLastPropertyValue(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCurrentBeforeFirstPropertyValue@CollectionView@DirectUI@@CAJPEAUIInspectable@@PEAPEAU3@@Z
    static long GetIsCurrentBeforeFirstPropertyValue(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OkToChangeCurrent@CollectionView@DirectUI@@AEAAJPEAE@Z
    long OkToChangeCurrent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCurrentChanged@CollectionView@DirectUI@@AEAAJXZ
    long RaiseCurrentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCurrentChanging@CollectionView@DirectUI@@AEAAJXZ
    long RaiseCurrentChanging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCurrentChanging@CollectionView@DirectUI@@AEAAJPEAUICurrentChangingEventArgs@Data@Xaml@UI@Windows@@@Z
    long RaiseCurrentChanging(::Windows::UI::Xaml::Data::ICurrentChangingEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentIndexAt@CollectionView@DirectUI@@AEAAJHPEAE@Z
    long SetCurrentIndexAt(int, unsigned char *);
};
} // namespace DirectUI
