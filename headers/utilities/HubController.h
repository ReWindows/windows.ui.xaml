#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class HubController {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HubController@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWrapping@HubController@@UEAA_NXZ
    virtual bool GetIsWrapping();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWrappingEnabled@HubController@@UEAA_NXZ
    virtual bool GetIsWrappingEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HubController@@QEAAJPEAUIDirectManipulationViewport@@PEAVCWinCriticalSection@@PEAUIWrappingEventHandler@@@Z
    long Initialize(IDirectManipulationViewport *, CWinCriticalSection *, IWrappingEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyViewportNormalizationCorrected@HubController@@UEAAJPEAUIDirectManipulationViewport@@@Z
    virtual long NotifyViewportNormalizationCorrected(IDirectManipulationViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentOffsetChanged@HubController@@UEAAJM@Z
    virtual long OnContentOffsetChanged(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportStatusUpdated@HubController@@UEAAJPEAUIObject@@PEAUIDirectManipulationViewport@@W4DIRECTMANIPULATION_STATUS@@2@Z
    virtual long OnViewportStatusUpdated(IObject *, IDirectManipulationViewport *, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HubController@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConfiguration@HubController@@UEAAJMMMPEAUSnapPointData@@K@Z
    virtual long SetConfiguration(float, float, float, SnapPointData *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWrappingEnabled@HubController@@UEAAX_N@Z
    virtual void SetIsWrappingEnabled(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HubController@@UEAA@XZ
    virtual ~HubController();
};
