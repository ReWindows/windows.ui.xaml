#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class MediaTransportControlsThumbnailRequestedEventArgsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@MediaTransportControlsThumbnailRequestedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDeferral@Foundation@Windows@@@Z
    virtual long GetDeferral(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailImage@MediaTransportControlsThumbnailRequestedEventArgsGenerated@DirectUI@@UEAAJPEAUIInputStream@Streams@Storage@Windows@@@Z
    virtual long SetThumbnailImage(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MediaTransportControlsThumbnailRequestedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MediaTransportControlsThumbnailRequestedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MediaTransportControlsThumbnailRequestedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MediaTransportControlsThumbnailRequestedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
