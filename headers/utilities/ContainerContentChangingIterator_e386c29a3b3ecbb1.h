#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI::Components::TileGridPanel {
class ContainerContentChangingIterator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@QEAAJPEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@I@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_Current(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerContentChangingIterator@TileGridPanel@Components@DirectUI@@UEAA@XZ
    virtual ~ContainerContentChangingIterator();
};
} // namespace DirectUI::Components::TileGridPanel
