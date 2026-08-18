#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 39 member(s).
class CImageBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CImageBrush@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CImageBrush@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CImageBrush@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushSpan@CImageBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAPEAUIBrushSpan@@@Z
    virtual long CreateBrushSpan(CMILMatrix const *, XRECTF_WH const *, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAndUpdateHardwareResources@CImageBrush@@UEAAJPEAVHWTextureManager@@PEAVCWindowRenderTarget@@PEAVSurfaceCache@@@Z
    virtual long EnsureAndUpdateHardwareResources(HWTextureManager *, CWindowRenderTarget *, SurfaceCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageFailed@CImageBrush@@QEAAJI@Z
    long FireImageFailed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageOpened@CImageBrush@@QEAAJXZ
    long FireImageOpened();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualBounds@CImageBrush@@UEAAXPEAUXRECTF_WH@@@Z
    virtual void GetActualBounds(XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareSurface@CImageBrush@@UEAAPEAVHWTexture@@XZ
    virtual HWTexture * GetHardwareSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID2D1SvgDocument@CImageBrush@@QEAAJPEAUID2D1DeviceContext5@@AEAV?$ComPtr@UID2D1SvgDocument@@@WRL@Microsoft@@PEAI2@Z
    long GetID2D1SvgDocument(ID2D1DeviceContext5*, WindissectOpaque &, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalBounds@CImageBrush@@UEAAXPEAUXRECTF_WH@@@Z
    virtual void GetNaturalBounds(XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintBrush@CImageBrush@@UEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    virtual long GetPrintBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareSurface@CImageBrush@@UEAAPEAUIPALSurface@@XZ
    virtual IPALSurface * GetSoftwareSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareSurfaceForPrinting@CImageBrush@@QEAAJAEAV?$xref_ptr@UIPALSurface@@@@@Z
    long GetSoftwareSurfaceForPrinting(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurface@CImageBrush@@UEAAPEAUIPALSurface@@XZ
    virtual IPALSurface * GetSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiledSurfaceNoRef@CImageBrush@@UEAAPEAVCTiledSurface@@XZ
    virtual CTiledSurface * GetTiledSurfaceNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CImageBrush@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleImageSourceBounds@CImageBrush@@QEAAJPEBUXRECTF_RB@@PEAUXRECTF_WH@@@Z
    long GetVisibleImageSourceBounds(XRECTF_RB const *, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDimensions@CImageBrush@@QEAAIXZ
    unsigned int HasDimensions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CImageBrush@@UEAAHXZ
    virtual int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTiledSurface@CImageBrush@@UEAAIXZ
    virtual unsigned int IsTiledSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CImageBrush@@UEAAJPEAPEAXPEAHPEAI2@Z
    virtual long Lock(void * *, int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueRequestDecode@CImageBrush@@QEAAJII_N@Z
    long QueueRequestDecode(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadImage@CImageBrush@@QEAAJ_NPEAUIImageReportCallback@@@Z
    long ReloadImage(bool, IImageReportCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadSoftwareSurfaceIfReleased@CImageBrush@@UEAAJXZ
    virtual long ReloadSoftwareSurfaceIfReleased();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCallback@CImageBrush@@QEAAXXZ
    void RemoveCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CImageBrush@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CImageBrush@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseEvent@CImageBrush@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRequestDecode@CImageBrush@@QEAAIXZ
    unsigned int ShouldRequestDecode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnLock@CImageBrush@@UEAAIXZ
    virtual unsigned int UnLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcceleratedBrush@CImageBrush@@UEAAJAEBUD2DRenderParams@@@Z
    virtual long UpdateAcceleratedBrush(D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDecodeToRenderSizeStatusOnSourceChange@CImageBrush@@QEAAXPEAVCImageSource@@@Z
    void UpdateDecodeToRenderSizeStatusOnSourceChange(CImageSource *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageBrush@@IEAA@PEAVCCoreServices@@@Z
    CImageBrush(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CImageBrush@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CImageBrush@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageBrush@@MEAA@XZ
    virtual ~CImageBrush();
};
