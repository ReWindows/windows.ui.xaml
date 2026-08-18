#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class HWFrameData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNinegrid@HWFrameData@@QEAAJPEAV?$xvector@PEAUIUnknown@@@@AEBUHWRenderParamsBase@@AEBUXSIZEF@@2PEAVHWTexture@@3IIPEBUXRECTF_RB@@IPEBUXRECTF_WH@@PEAUIDCompositionColorPartner@@@Z
    long AddNinegrid(WindissectOpaque *, HWRenderParamsBase const &, XSIZEF const &, XSIZEF const &, HWTexture *, HWTexture *, unsigned int, unsigned int, XRECTF_RB const *, unsigned int, XRECTF_WH const *, IDCompositionColorPartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRectangle@HWFrameData@@QEAAJPEAV?$xvector@PEAUIUnknown@@@@AEBUHWRenderParamsBase@@AEBUXRECTF_WH@@IPEAUIDCompositionColorPartner@@IPEAVHWTexture@@PEBVCMILMatrix@@45@Z
    long AddRectangle(WindissectOpaque *, HWRenderParamsBase const &, XRECTF_WH const &, unsigned int, IDCompositionColorPartner *, unsigned int, HWTexture *, CMILMatrix const *, HWTexture *, CMILMatrix const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HWFrameData@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTiledRectangle@HWFrameData@@QEAAJPEAV?$xvector@PEAUIUnknown@@@@AEBUHWRenderParamsBase@@AEBUXRECTF_WH@@IAEAVCTileIterator@@PEBUXRECTF_RB@@IPEAVHWTexture@@@Z
    long AddTiledRectangle(WindissectOpaque *, HWRenderParamsBase const &, XRECTF_WH const &, unsigned int, CTileIterator &, XRECTF_RB const *, unsigned int, HWTexture *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HWFrameData@@UEAAIXZ
    virtual unsigned int Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRenderData@HWFrameData@@AEAAJPEAV?$xvector@PEAUIUnknown@@@@AEBUHWRenderParamsBase@@AEBUXRECTF_WH@@PEAVHWTexture@@PEBVCMILMatrix@@34IIPEAUIDCompositionColorPartner@@@Z
    long AddRenderData(WindissectOpaque *, HWRenderParamsBase const &, XRECTF_WH const &, HWTexture *, CMILMatrix const *, HWTexture *, CMILMatrix const *, unsigned int, unsigned int, IDCompositionColorPartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateNinegridPositionToTextureTransform@HWFrameData@@AEAAXPEBUXRECTF_WH@@0MMPEAVCMILMatrix@@@Z
    void CalculateNinegridPositionToTextureTransform(XRECTF_WH const *, XRECTF_WH const *, float, float, CMILMatrix *);
};
