#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class TileGridElementAnimatingEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Element@TileGridElementAnimatingEventArgs@DirectUI@@UEAAJPEAPEAUITileGridElement@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Element(::Windows::UI::Xaml::Controls::ITileGridElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@TileGridElementAnimatingEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Element@TileGridElementAnimatingEventArgs@DirectUI@@QEAAJPEAUITileGridElement@Controls@Xaml@UI@Windows@@@Z
    long put_Element(::Windows::UI::Xaml::Controls::ITileGridElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@TileGridElementAnimatingEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileGridElementAnimatingEventArgs@DirectUI@@UEAA@XZ
    virtual ~TileGridElementAnimatingEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TileGridElementAnimatingEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TileGridElementAnimatingEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TileGridElementAnimatingEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TileGridElementAnimatingEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
