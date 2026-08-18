#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 31 member(s).
class CLoadedImageSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CLoadedImageSurface@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsHandlerWhenNotLive@CLoadedImageSurface@@UEBA_NHW4KnownEventIndex@@@Z
    virtual bool AllowsHandlerWhenNotLive(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CLoadedImageSurface@@QEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLoadedImageSurface@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionSurface@CLoadedImageSurface@@QEAAJPEAPEAVDCompSurface@@@Z
    long GetCompositionSurface(DCompSurface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecodedPhysicalSize@CLoadedImageSurface@@QEBA?AUXSIZE@@XZ
    XSIZE GetDecodedPhysicalSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CLoadedImageSurface@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CLoadedImageSurface@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromUri@CLoadedImageSurface@@QEAAJVxstring_ptr@@@Z
    long InitFromUri(xstring_ptr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CLoadedImageSurface@@UEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CLoadedImageSurface@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLoadedImageSurface@@IEAA@PEAVCCoreServices@@@Z
    CLoadedImageSurface(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLoadedImageSurface@@MEAA@XZ
    virtual ~CLoadedImageSurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireLoadCompleted@CLoadedImageSurface@@AEAAJJ@Z
    long FireLoadCompleted(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecodePixelSize@CLoadedImageSurface@@AEBA?AUXSIZE@@AEBUImageMetadata@@M@Z
    XSIZE GetDecodePixelSize(ImageMetadata const &, float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredMaxPixelSize@CLoadedImageSurface@@AEBA?AUXSIZE@@M@Z
    XSIZE GetDesiredMaxPixelSize(float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageDescription@CLoadedImageSurface@@AEAAJAEAVImageCache@@@Z
    long GetImageDescription(ImageCache &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDownloadComplete@CLoadedImageSurface@@AEBA_NXZ
    bool IsDownloadComplete() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtualPossible@CLoadedImageSurface@@AEBA_NUXSIZE@@@Z
    bool IsVirtualPossible(XSIZE) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceCreated@CLoadedImageSurface@@EEAAJXZ
    virtual long OnDeviceCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceRemoved@CLoadedImageSurface@@EEAAJ_N@Z
    virtual long OnDeviceRemoved(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageViewUpdated@CLoadedImageSurface@@EEAAJAEAVImageViewBase@@@Z
    virtual long OnImageViewUpdated(ImageViewBase &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowMemory@CLoadedImageSurface@@EEAAXXZ
    virtual void OnLowMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@CLoadedImageSurface@@EEAAJXZ
    virtual long OnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScaleChanged@CLoadedImageSurface@@EEAAJXZ
    virtual long OnScaleChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspend@CLoadedImageSurface@@EEAAJI@Z
    virtual long OnSuspend(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSurfaceMemory@CLoadedImageSurface@@AEAAXXZ
    void ReleaseSurfaceMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDecodingHelper@CLoadedImageSurface@@AEAAJXZ
    long StartDecodingHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFinalSizeDecoding@CLoadedImageSurface@@AEAAJXZ
    long StartFinalSizeDecoding();
};
