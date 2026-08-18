#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class DependencyObjectCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@DependencyObjectCollection@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long Append(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@DependencyObjectCollection@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@DependencyObjectCollection@DirectUI@@UEAAJIPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long InsertAt(unsigned int, ::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildUpdated@DependencyObjectCollection@DirectUI@@UEAAJPEAVDependencyObject@2@@Z
    virtual long OnChildUpdated(::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@DependencyObjectCollection@DirectUI@@UEAAJII@Z
    virtual long OnCollectionChanged(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@DependencyObjectCollection@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@DependencyObjectCollection@DirectUI@@UEAAJIPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long SetAt(unsigned int, ::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VectorChanged@DependencyObjectCollection@DirectUI@@UEAAJPEAU?$VectorChangedEventHandler@PEAVDependencyObject@Xaml@UI@Windows@@@Collections@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VectorChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VectorChanged@DependencyObjectCollection@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VectorChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DependencyObjectCollection@DirectUI@@UEAA@XZ
    virtual ~DependencyObjectCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@DependencyObjectCollection@DirectUI@@MEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVectorChanged@DependencyObjectCollection@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long RaiseVectorChanged(int, unsigned int);
};
} // namespace DirectUI
