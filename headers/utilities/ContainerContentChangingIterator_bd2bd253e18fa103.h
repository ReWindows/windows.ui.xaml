#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI::ModernCollectionBasePanel {
class ContainerContentChangingIterator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ContainerContentChangingIterator@ModernCollectionBasePanel@DirectUI@@QEAAJPEAV23@@Z
    long Initialize(::DirectUI::ModernCollectionBasePanel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@ContainerContentChangingIterator@ModernCollectionBasePanel@DirectUI@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ContainerContentChangingIterator@ModernCollectionBasePanel@DirectUI@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@ContainerContentChangingIterator@ModernCollectionBasePanel@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_Current(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ContainerContentChangingIterator@ModernCollectionBasePanel@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContainerContentChangingIterator@ModernCollectionBasePanel@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI::ModernCollectionBasePanel
