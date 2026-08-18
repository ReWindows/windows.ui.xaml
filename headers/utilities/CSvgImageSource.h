#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CSvgImageSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSvgImageSource@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAndUpdateHardwareResources@CSvgImageSource@@UEAAJPEAVHWTextureManager@@PEAVCWindowRenderTarget@@PEAVSurfaceCache@@@Z
    virtual long EnsureAndUpdateHardwareResources(HWTextureManager *, CWindowRenderTarget *, SurfaceCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CSvgImageSource@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDescription(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID2D1SvgDocument@CSvgImageSource@@UEAAJPEAUID2D1DeviceContext5@@AEAV?$ComPtr@UID2D1SvgDocument@@@WRL@Microsoft@@PEAI2@Z
    virtual long GetID2D1SvgDocument(ID2D1DeviceContext5*, WindissectOpaque &, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSvgImageSource@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetTitle(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSvgImageSource@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSvgElement@CSvgImageSource@@KAJPEAUID2D1SvgDocument@@PEBGAEAV?$ComPtr@UID2D1SvgElement@@@ctl@@@Z
    static long FindSvgElement(ID2D1SvgDocument *, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecodeHeight@CSvgImageSource@@MEAAIXZ
    virtual unsigned int GetDecodeHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecodeWidth@CSvgImageSource@@MEAAIXZ
    virtual unsigned int GetDecodeWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSvgDocumentString@CSvgImageSource@@IEAAJPEBGPEAPEAUHSTRING__@@@Z
    long GetSvgDocumentString(unsigned short const *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDownloadImageAvailableImpl@CSvgImageSource@@MEAAJPEAUIImageAvailableResponse@@@Z
    virtual long OnDownloadImageAvailableImpl(IImageAvailableResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareDecode@CSvgImageSource@@MEAAJ_N@Z
    virtual long PrepareDecode(bool);
};
