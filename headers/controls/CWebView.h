#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 50 member(s).
class CWebView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CWebView@@UEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CWebView@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWebView@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponent@CWebView@@UEAAJXZ
    virtual long CreateComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyComponent@CWebView@@UEAAJI@Z
    virtual long DestroyComponent(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CWebView@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildOuterBounds@CWebView@@UEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    virtual long GenerateChildOuterBounds(HitTestParams *, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CWebView@@UEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenInRenderOrder@CWebView@@UEAAXPEAPEAPEAVCUIElement@@PEAI@Z
    virtual void GetChildrenInRenderOrder(CUIElement * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExecutionMode@CWebView@@QEAA?AW4WebViewExecutionMode@DirectUI@@XZ
    int GetExecutionMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurface@CWebView@@QEAAJPEAPEAUIPALSurface@@@Z
    long GetSurface(IPALSurface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBitmapUpdateCompleted@CWebView@@UEAAJPEAE@Z
    virtual long HasBitmapUpdateCompleted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CWebView@@UEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CWebView@@UEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CWebView@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockBitmap@CWebView@@UEAAJPEAI00PEAPEAX@Z
    virtual long LockBitmap(unsigned int *, unsigned int *, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CWebView@@UEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@CWebView@@UEAAJW4FocusNavigationDirection@DirectUI@@PEAUXRECTF_WH@@@Z
    virtual long NavigateFocus(int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCapturePreviewToBitmapAvailable@CWebView@@QEAAJIIPEAEI@Z
    long OnCapturePreviewToBitmapAvailable(unsigned int, unsigned int, unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowMemory@CWebView@@UEAAXXZ
    virtual void OnLowMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@CWebView@@UEAAJXZ
    virtual long OnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspend@CWebView@@UEAAJI@Z
    virtual long OnSuspend(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CWebView@@UEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBrushForUpdate@CWebView@@QEAAJQEAUIWebViewBrushSource@@@Z
    long RemoveBrushForUpdate(IWebViewBrushSource * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreInputUIABoundingRect@CWebView@@QEAAJXZ
    long SetCoreInputUIABoundingRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CWebView@@UEAAJ_N00@Z
    virtual long SetFocus(bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformToRoot@CWebView@@QEAAJPEBVCTransformToRoot@@@Z
    long SetTransformToRoot(CTransformToRoot const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CWebView@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tick@CWebView@@UEAAJXZ
    virtual long Tick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAccelerator@CWebView@@UEAAJPEAXPEAI@Z
    virtual long TranslateAccelerator(void *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockBitmap@CWebView@@UEAAJXZ
    virtual long UnlockBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmap@CWebView@@UEAAJXZ
    virtual long UpdateBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmapAsync@CWebView@@UEAAJXZ
    virtual long UpdateBitmapAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUIAPropertiesIfNecessary@CWebView@@QEAAXXZ
    void UpdateUIAPropertiesIfNecessary();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CWebView@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightToLeft@CWebView@@MEAA_NXZ
    virtual bool IsRightToLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertySetImpl@CWebView@@MEAAJPEBVCDependencyProperty@@AEBVCValue@@1_N@Z
    virtual long OnPropertySetImpl(CDependencyProperty const *, CValue const &, CValue const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebView@@MEAA@XZ
    virtual ~CWebView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringToTop@CWebView@@AEAAJXZ
    long BringToTop();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebView@@AEAA@PEAVCCoreServices@@@Z
    CWebView(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@CWebView@@AEAAJIIPEAEI@Z
    long CreateSurface(unsigned int, unsigned int, unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionContent@CWebView@@AEAAJXZ
    long PositionContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Redraw@CWebView@@AEAAJXZ
    long Redraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CWebView@@AEAAJMM@Z
    long SetPosition(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CWebView@@AEAAJMM@Z
    long SetSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@CWebView@@AEAAJI@Z
    long SetVisibility(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZoom@CWebView@@AEAAJJ@Z
    long SetZoom(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWebViewBrushes@CWebView@@AEAAJPEAUIPALSurface@@@Z
    long UpdateWebViewBrushes(IPALSurface *);
};
