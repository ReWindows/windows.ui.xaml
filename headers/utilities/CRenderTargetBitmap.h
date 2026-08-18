#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 39 member(s).
class CRenderTargetBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortPixelWaitExecutors@CRenderTargetBitmap@@UEAAXJ@Z
    virtual void AbortPixelWaitExecutors(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPixelWaitExecutor@CRenderTargetBitmap@@UEAAJPEAVRenderTargetBitmapPixelWaitExecutor@@@Z
    virtual long AddPixelWaitExecutor(RenderTargetBitmapPixelWaitExecutor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CRenderTargetBitmap@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupHardwareResources@CRenderTargetBitmap@@UEAAX_N@Z
    virtual void CleanupHardwareResources(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRenderTargetBitmap@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CRenderTargetBitmap@@UEAAJPEAVCWindowRenderTarget@@@Z
    virtual long Draw(CWindowRenderTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAndUpdateHardwareResources@CRenderTargetBitmap@@UEAAJPEAVHWTextureManager@@PEAVCWindowRenderTarget@@PEAVSurfaceCache@@@Z
    virtual long EnsureAndUpdateHardwareResources(HWTextureManager *, CWindowRenderTarget *, SurfaceCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailRender@CRenderTargetBitmap@@UEAAJJ@Z
    virtual long FailRender(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentState@CRenderTargetBitmap@@UEBA?AW4RenderTargetElementState@@XZ
    virtual int GetCurrentState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@CRenderTargetBitmap@@UEBAIXZ
    virtual unsigned int GetHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutHeight@CRenderTargetBitmap@@UEAAIXZ
    virtual unsigned int GetLayoutHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutWidth@CRenderTargetBitmap@@UEAAIXZ
    virtual unsigned int GetLayoutWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelHeight@CRenderTargetBitmap@@UEBAHXZ
    virtual int GetPixelHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelWidth@CRenderTargetBitmap@@UEBAHXZ
    virtual int GetPixelWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetElementData@CRenderTargetBitmap@@UEBAPEAVCRenderTargetElementData@@XZ
    virtual CRenderTargetElementData * GetRenderTargetElementData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRenderTargetBitmap@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@CRenderTargetBitmap@@UEBAIXZ
    virtual unsigned int GetWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDimensions@CRenderTargetBitmap@@UEAAIXZ
    virtual unsigned int HasDimensions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHardwareResources@CRenderTargetBitmap@@UEAAIXZ
    virtual unsigned int HasHardwareResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLostHardwareResources@CRenderTargetBitmap@@UEAAIXZ
    virtual unsigned int HasLostHardwareResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAncestorTypeEligible@CRenderTargetBitmap@@SA_NPEAVCUIElement@@@Z
    static bool IsAncestorTypeEligible(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDrawRequired@CRenderTargetBitmap@@UEBA_NXZ
    virtual bool IsDrawRequired() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrawingCompleteForFrame@CRenderTargetBitmap@@UEAAJXZ
    virtual long OnDrawingCompleteForFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelHeight@CRenderTargetBitmap@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long PixelHeight(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelWidth@CRenderTargetBitmap@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long PixelWidth(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDraw@CRenderTargetBitmap@@UEAAJXZ
    virtual long PostDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreCommit@CRenderTargetBitmap@@UEAAJPEAVCWindowRenderTarget@@PEAUIPALEvent@@@Z
    virtual long PreCommit(CWindowRenderTarget *, IPALEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePixelWaitExecutor@CRenderTargetBitmap@@UEAAJPEAVRenderTargetBitmapPixelWaitExecutor@@@Z
    virtual long RemovePixelWaitExecutor(RenderTargetBitmapPixelWaitExecutor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPixels@CRenderTargetBitmap@@QEAAJPEAVIRenderTargetBitmapGetPixelsAsyncOperation@@@Z
    long RequestPixels(IRenderTargetBitmapGetPixelsAsyncOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRender@CRenderTargetBitmap@@QEAAJPEAVCUIElement@@HHPEAVICoreAsyncAction@@@Z
    long RequestRender(CUIElement *, int, int, ICoreAsyncAction *);
    // Category: Method | Source: PE Export
    // Symbol: ?RequiresSurfaceContentsLostNotification@CRenderTargetBitmap@@UEAAIXZ
    virtual unsigned int RequiresSurfaceContentsLostNotification();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentState@CRenderTargetBitmap@@UEAAJW4RenderTargetElementState@@@Z
    virtual long SetCurrentState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderTargetBitmap@@UEAA@XZ
    virtual ~CRenderTargetBitmap();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForCleanupOnLeave@CRenderTargetBitmap@@MEAAXXZ
    virtual void RegisterForCleanupOnLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForCleanupOnEnter@CRenderTargetBitmap@@MEAAXXZ
    virtual void UnregisterForCleanupOnEnter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidTexture@CRenderTargetBitmap@@AEAA_NXZ
    bool HasValidTexture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CRenderTargetBitmap@@EEAAJXZ
    virtual long InitInstance();
};
