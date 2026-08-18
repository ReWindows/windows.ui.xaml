#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 30 member(s).
class CWebViewBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CWebViewBrush@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWebViewBrush@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushSpan@CWebViewBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAPEAUIBrushSpan@@@Z
    virtual long CreateBrushSpan(CMILMatrix const *, XRECTF_WH const *, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAndUpdateHardwareResources@CWebViewBrush@@UEAAJPEAVHWTextureManager@@PEAVCWindowRenderTarget@@PEAVSurfaceCache@@@Z
    virtual long EnsureAndUpdateHardwareResources(HWTextureManager *, CWindowRenderTarget *, SurfaceCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareSurface@CWebViewBrush@@UEAAPEAVHWTexture@@XZ
    virtual HWTexture * GetHardwareSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalBounds@CWebViewBrush@@UEAAXPEAUXRECTF_WH@@@Z
    virtual void GetNaturalBounds(XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintBrush@CWebViewBrush@@UEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    virtual long GetPrintBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareSurface@CWebViewBrush@@UEAAPEAUIPALSurface@@XZ
    virtual IPALSurface * GetSoftwareSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurface@CWebViewBrush@@UEAAPEAUIPALSurface@@XZ
    virtual IPALSurface * GetSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiledSurfaceNoRef@CWebViewBrush@@UEAAPEAVCTiledSurface@@XZ
    virtual CTiledSurface * GetTiledSurfaceNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CWebViewBrush@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@CWebViewBrush@@UEAAJPEBVCDependencyProperty@@PEAVCDependencyObject@@@Z
    virtual long InvokeImpl(CDependencyProperty const *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CWebViewBrush@@UEAAHXZ
    virtual int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTiledSurface@CWebViewBrush@@UEAAIXZ
    virtual unsigned int IsTiledSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CWebViewBrush@@UEAAJPEAPEAXPEAHPEAI2@Z
    virtual long Lock(void * *, int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForUpdate@CWebViewBrush@@QEAAJXZ
    long RegisterForUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadSoftwareSurfaceIfReleased@CWebViewBrush@@UEAAJXZ
    virtual long ReloadSoftwareSurfaceIfReleased();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@CWebViewBrush@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long SetSource(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@CWebViewBrush@@UEAAXPEAUIPALSurface@@@Z
    virtual void SetSurface(IPALSurface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWebViewTarget@CWebViewBrush@@QEAAJPEAVCWebView@@I@Z
    long SetWebViewTarget(CWebView *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnLock@CWebViewBrush@@UEAAIXZ
    virtual unsigned int UnLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForUpdate@CWebViewBrush@@UEAAJXZ
    virtual long UnregisterForUpdate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSurface@CWebViewBrush@@IEAAJXZ
    long EnsureSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CWebViewBrush@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CWebViewBrush@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetWebViewTarget@CWebViewBrush@@IEAAJXZ
    long ResetWebViewTarget();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CWebViewBrush@@EEAAJXZ
    virtual long InitInstance();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebViewBrush@@EEAA@XZ
    virtual ~CWebViewBrush();
};
