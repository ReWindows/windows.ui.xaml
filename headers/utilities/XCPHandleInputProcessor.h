#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class XCPHandleInputProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndGripperDrag@XCPHandleInputProcessor@@UEAAJXZ
    virtual long OnEndGripperDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGripperDrag@XCPHandleInputProcessor@@UEAAJUXPOINT@@IPEAU2@@Z
    virtual long OnGripperDrag(XPOINT, unsigned int, XPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartGripperDrag@XCPHandleInputProcessor@@UEAAJUXPOINT@@I@Z
    virtual long OnStartGripperDrag(XPOINT, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGripperDisplayLocation@XCPHandleInputProcessor@@UEAAXUXPOINT@@0I@Z
    virtual void SetGripperDisplayLocation(XPOINT, XPOINT, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHiMetricsPerPixel@XCPHandleInputProcessor@@UEAAJM@Z
    virtual long SetHiMetricsPerPixel(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XCPHandleInputProcessor@@UEAA@XZ
    virtual ~XCPHandleInputProcessor();
};
