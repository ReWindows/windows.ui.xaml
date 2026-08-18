#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 34 member(s).
namespace Windows::Media {
class _SystemMediaTransportControlsTimelineProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionSetTime@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJPEA_J@Z
    virtual long GetPositionSetTime(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_SystemMediaTransportControlsTimelineProperties@Media@Windows@@QEAA@XZ
    _SystemMediaTransportControlsTimelineProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EndTime@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJPEAUTimeSpan@Foundation@3@@Z
    virtual long get_EndTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxSeekTime@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJPEAUTimeSpan@Foundation@3@@Z
    virtual long get_MaxSeekTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinSeekTime@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJPEAUTimeSpan@Foundation@3@@Z
    virtual long get_MinSeekTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJPEAUTimeSpan@Foundation@3@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartTime@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJPEAUTimeSpan@Foundation@3@@Z
    virtual long get_StartTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EndTime@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJUTimeSpan@Foundation@3@@Z
    virtual long put_EndTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxSeekTime@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJUTimeSpan@Foundation@3@@Z
    virtual long put_MaxSeekTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinSeekTime@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJUTimeSpan@Foundation@3@@Z
    virtual long put_MinSeekTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Position@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJUTimeSpan@Foundation@3@@Z
    virtual long put_Position(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StartTime@_SystemMediaTransportControlsTimelineProperties@Media@Windows@@UEAAJUTimeSpan@Foundation@3@@Z
    virtual long put_StartTime(WindissectOpaque);
};
} // namespace Windows::Media
