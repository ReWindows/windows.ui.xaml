#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class SemanticZoomViewChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DestinationItem@SemanticZoomViewChangedEventArgs@DirectUI@@UEAAJPEAPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_DestinationItem(::Windows::UI::Xaml::Controls::ISemanticZoomLocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSourceZoomedInView@SemanticZoomViewChangedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSourceZoomedInView(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceItem@SemanticZoomViewChangedEventArgs@DirectUI@@UEAAJPEAPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_SourceItem(::Windows::UI::Xaml::Controls::ISemanticZoomLocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DestinationItem@SemanticZoomViewChangedEventArgs@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@@Z
    virtual long put_DestinationItem(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSourceZoomedInView@SemanticZoomViewChangedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_IsSourceZoomedInView(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceItem@SemanticZoomViewChangedEventArgs@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@@Z
    virtual long put_SourceItem(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SemanticZoomViewChangedEventArgs@DirectUI@@UEAA@XZ
    virtual ~SemanticZoomViewChangedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SemanticZoomViewChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SemanticZoomViewChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SemanticZoomViewChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SemanticZoomViewChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
