#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class TimelineMarkerRoutedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Marker@TimelineMarkerRoutedEventArgs@DirectUI@@UEAAJPEAPEAUITimelineMarker@Media@Xaml@UI@Windows@@@Z
    virtual long get_Marker(::Windows::UI::Xaml::Media::ITimelineMarker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Marker@TimelineMarkerRoutedEventArgs@DirectUI@@UEAAJPEAUITimelineMarker@Media@Xaml@UI@Windows@@@Z
    virtual long put_Marker(::Windows::UI::Xaml::Media::ITimelineMarker *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TimelineMarkerRoutedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@TimelineMarkerRoutedEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TimelineMarkerRoutedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TimelineMarkerRoutedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TimelineMarkerRoutedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
