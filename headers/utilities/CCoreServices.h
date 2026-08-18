#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 229 member(s).
class CCoreServices {
public:
    class FontDownloadListener;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDisplayListener@CCoreServices@@QEAAXPEAUDisplayListener@@@Z
    void AddDisplayListener(DisplayListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDownloadRequest@CCoreServices@@QEAAJPEAUIPALDownloadRequest@@PEAPEAUIPALAbortableOperation@@PEAUIPALUri@@@Z
    long AddDownloadRequest(IPALDownloadRequest *, IPALAbortableOperation * *, IPALUri *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFocusVisualKindIsRevealToSystemColorsResources@CCoreServices@@QEAAJXZ
    long AddFocusVisualKindIsRevealToSystemColorsResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMutableStyleValueChangedListener@CCoreServices@@QEAAXQEAVCStyle@@AEAV?$weakref_ptr@VCFrameworkElement@@@xref@@@Z
    void AddMutableStyleValueChangedListener(CStyle * const, WindissectOpaque &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCoreServices@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSurfaceImageSource@CCoreServices@@QEAAJPEAVCSurfaceImageSource@@@Z
    long AddSurfaceImageSource(CSurfaceImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTestLTE@CCoreServices@@QEAA?AV?$xref_ptr@VCLayoutTransitionElement@@@@PEAVCUIElement@@0_N11@Z
    WindissectOpaque AddTestLTE(CUIElement *, CUIElement *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddThemeChangedListener@CCoreServices@@QEAAXPEAVCFrameworkElement@@@Z
    void AddThemeChangedListener(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVirtualSurfaceImageSource@CCoreServices@@QEAAJPEAVCVirtualSurfaceImageSource@@@Z
    long AddVirtualSurfaceImageSource(CVirtualSurfaceImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddXamlIslandRoot@CCoreServices@@QEAAXPEAVCXamlIslandRoot@@@Z
    void AddXamlIslandRoot(CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationTrackingScenarioBegin@CCoreServices@@QEAAX_KPEAUAnimationTrackingScenarioInfo@@@Z
    void AnimationTrackingScenarioBegin(uint64_t, AnimationTrackingScenarioInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachMemoryManagerEvents@CCoreServices@@QEAAXXZ
    void AttachMemoryManagerEvents();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCoreServices@@QEAA@XZ
    CCoreServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CLR_CleanupNativePeers@CCoreServices@@QEAAXXZ
    void CLR_CleanupNativePeers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CLR_FireEvent@CCoreServices@@QEAAJPEAVCDependencyObject@@UEventHandle@@0PEAVCEventArgs@@I@Z
    long CLR_FireEvent(CDependencyObject *, EventHandle, CDependencyObject *, CEventArgs *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallPerFrameCallback@CCoreServices@@QEAAJM@Z
    long CallPerFrameCallback(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallbackEventListener@CCoreServices@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long CallbackEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMemoryUsage@CCoreServices@@QEAAJ_N@Z
    long CheckMemoryUsage(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUri@CCoreServices@@UEAAJAEBVxstring_ptr@@I@Z
    virtual long CheckUri(xstring_ptr const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContextObjects@CCoreServices@@QEAAXXZ
    void ClearContextObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMainRootImageCaches@CCoreServices@@QEAAJXZ
    long ClearMainRootImageCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearNamedObject@CCoreServices@@QEAAJAEBVxstring_ptr_view@@PEBVCDependencyObject@@PEAV3@@Z
    long ClearNamedObject(xstring_ptr_view const &, CDependencyObject const *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearValuesWithExpectedReference@CCoreServices@@QEAAXXZ
    void ClearValuesWithExpectedReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureNumberSubstitution@CCoreServices@@QEAAJXZ
    long ConfigureNumberSubstitution();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCoreServices@@SAJPEAPEAV1@@Z
    static long Create(CCoreServices * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositorScheduler@CCoreServices@@QEAAJPEAVWindowsGraphicsDeviceManager@@PEAPEAVCompositorScheduler@@@Z
    long CreateCompositorScheduler(WindowsGraphicsDeviceManager *, CompositorScheduler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMediaQueue@CCoreServices@@UEAAJPEAUIMediaQueueClient@@PEAPEAUIMediaQueue@@@Z
    virtual long CreateMediaQueue(IMediaQueueClient *, IMediaQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowRenderTarget@CCoreServices@@QEAAJPEAVWindowsGraphicsDeviceManager@@PEAVCompositorScheduler@@PEAVWindowsPresentTarget@@@Z
    long CreateWindowRenderTarget(WindowsGraphicsDeviceManager *, CompositorScheduler *, WindowsPresentTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementActiveBrushTransitionCount@CCoreServices@@QEAAXXZ
    void DecrementActiveBrushTransitionCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementActiveFacadeAnimationCount@CCoreServices@@QEAAXXZ
    void DecrementActiveFacadeAnimationCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementPendingAnimatedFacadePropertyChangeCount@CCoreServices@@QEAAXXZ
    void DecrementPendingAnimatedFacadePropertyChangeCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementPendingFontDownloadCount@CCoreServices@@QEAAXXZ
    void DecrementPendingFontDownloadCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachMemoryManagerEvents@CCoreServices@@QEAAXXZ
    void DetachMemoryManagerEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineDeviceLost@CCoreServices@@QEAAJPEAI@Z
    long DetermineDeviceLost(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectRoot@CCoreServices@@QEAAJ_N0@Z
    long DisconnectRoot(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableRender@CCoreServices@@QEAAJI@Z
    long EnableRender(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueImageDecodeRequest@CCoreServices@@QEAAJPEAVCImageSource@@II_N@Z
    long EnqueueImageDecodeRequest(CImageSource *, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueSurfaceContentsLostEvent@CCoreServices@@QEAAJXZ
    long EnqueueSurfaceContentsLostEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBackgroundTimer@CCoreServices@@QEAAJXZ
    long EnsureBackgroundTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrush@CCoreServices@@QEAAXAEAV?$xref_ptr@VCSolidColorBrush@@@@AEBVxstring_ptr_view@@@Z
    void EnsureBrush(WindissectOpaque &, xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentHostManager@CCoreServices@@QEAAJXZ
    long EnsureComponentHostManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionIslandCreated@CCoreServices@@QEBAXQEAUICoreWindow@Core@UI@Windows@@@Z
    void EnsureCompositionIslandCreated(::Windows::UI::Core::ICoreWindow * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureConnectedAnimationService@CCoreServices@@QEAAXXZ
    void EnsureConnectedAnimationService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDeviceLostListener@CCoreServices@@QEAAJXZ
    long EnsureDeviceLostListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOleIntialized@CCoreServices@@QEAAXXZ
    void EnsureOleIntialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteOnUIThread@CCoreServices@@QEAAJPEAUIPALExecuteOnUIThread@@_N@Z
    long ExecuteOnUIThread(IPALExecuteOnUIThread *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushDeferredAnimationOperationQueue@CCoreServices@@QEAAJ_N@Z
    long FlushDeferredAnimationOperationQueue(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushImageDecodeRequests@CCoreServices@@QEAAJXZ
    long FlushImageDecodeRequests();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedPopupRootForElement@CCoreServices@@QEAAJPEAVCDependencyObject@@PEAPEAVCPopupRoot@@@Z
    long GetAdjustedPopupRootForElement(CDependencyObject *, CPopupRoot * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationResourceDictionary@CCoreServices@@QEAAPEAVCResourceDictionary@@XZ
    CResourceDictionary * GetApplicationResourceDictionary();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseUriNoRef@CCoreServices@@QEAAPEAUIPALUri@@XZ
    IPALUri * GetBaseUriNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserHost@CCoreServices@@UEAAPEAUIXcpBrowserHost@@XZ
    virtual IXcpBrowserHost * GetBrowserHost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositor@CCoreServices@@QEBAPEAUICompositor@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositor * GetCompositor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectedAnimationRoot@CCoreServices@@QEBAPEAVCConnectedAnimationRoot@@XZ
    CConnectedAnimationRoot * GetConnectedAnimationRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowCompositionIslandId@CCoreServices@@QEAA_KXZ
    uint64_t GetCoreWindowCompositionIslandId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompDevice@CCoreServices@@QEBAXPEAPEAUIDCompositionDesktopDevicePartner@@@Z
    void GetDCompDevice(IDCompositionDesktopDevicePartner * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultContentPresenterTemplate@CCoreServices@@QEAAAEBV?$xref_ptr@VCDisplayMemberTemplate@@@@XZ
    WindissectOpaque const & GetDefaultContentPresenterTemplate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFocusVisualSolidColorBrush@CCoreServices@@QEAAJ_NIPEAPEAVCSolidColorBrush@@@Z
    long GetDefaultFocusVisualSolidColorBrush(bool, unsigned int, CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultInheritedPropertyValue@CCoreServices@@QEAAJW4KnownPropertyIndex@@PEAVCValue@@@Z
    long GetDefaultInheritedPropertyValue(int, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultTextBrush@CCoreServices@@QEAAJPEAPEAVCBrush@@@Z
    long GetDefaultTextBrush(CBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredElementIfExists@CCoreServices@@QEAAPEAVCDeferredElement@@AEBVxstring_ptr_view@@PEBVCDependencyObject@@W4NameScopeType@NameScoping@Jupiter@@@Z
    CDeferredElement * GetDeferredElementIfExists(xstring_ptr_view const &, CDependencyObject const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredMapping@CCoreServices@@QEAAPEAVCDeferredMapping@@XZ
    CDeferredMapping * GetDeferredMapping();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometryBuilder@CCoreServices@@QEAAJIPEAPEAVCGeometryBuilder@@I@Z
    long GetGeometryBuilder(unsigned int, CGeometryBuilder * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWWalk@CCoreServices@@QEAAPEAVHWWalk@@XZ
    HWWalk * GetHWWalk();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostSite@CCoreServices@@UEAAPEAUIXcpHostSite@@XZ
    virtual IXcpHostSite * GetHostSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageFactory@CCoreServices@@QEAAJPEAPEAUIAsyncImageFactory@@@Z
    long GetImageFactory(IAsyncImageFactory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageProvider@CCoreServices@@QEAAJPEAPEAVImageProvider@@@Z
    long GetImageProvider(ImageProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainFullWindowMediaRoot@CCoreServices@@QEAAPEAVCFullWindowMediaRoot@@XZ
    CFullWindowMediaRoot * GetMainFullWindowMediaRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainLayoutManager@CCoreServices@@QEAAPEAVCLayoutManager@@XZ
    CLayoutManager * GetMainLayoutManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPopupRoot@CCoreServices@@QEAAPEAVCPopupRoot@@XZ
    CPopupRoot * GetMainPopupRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainRenderTargetBitmapRoot@CCoreServices@@QEAAPEAVCRenderTargetBitmapRoot@@XZ
    CRenderTargetBitmapRoot * GetMainRenderTargetBitmapRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainRootVisual@CCoreServices@@QEAAPEAVCRootVisual@@XZ
    CRootVisual * GetMainRootVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxTextureSize@CCoreServices@@QEAAIXZ
    unsigned int GetMaxTextureSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedObject@CCoreServices@@QEAAPEAVCDependencyObject@@AEBVxstring_ptr_view@@PEBV2@W4NameScopeType@NameScoping@Jupiter@@@Z
    CDependencyObject * GetNamedObject(xstring_ptr_view const &, CDependencyObject const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParserErrorService@CCoreServices@@UEAAJPEAPEAUIErrorService@@@Z
    virtual long GetParserErrorService(IErrorService * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintRoot@CCoreServices@@QEBAPEAVCPrintRoot@@XZ
    CPrintRoot * GetPrintRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueStatics@CCoreServices@@QEAAPEAUIPropertyValueStatics@Foundation@Windows@@XZ
    WindissectOpaque * GetPropertyValueStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicOrFullScreenRootVisual@CCoreServices@@QEAAPEAVCDependencyObject@@XZ
    CDependencyObject * GetPublicOrFullScreenRootVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceManager@CCoreServices@@UEAAJPEAPEAUIPALResourceManager@@@Z
    virtual long GetResourceManager(IPALResourceManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootForElement@CCoreServices@@QEAAPEAVCDependencyObject@@PEAV2@@Z
    CDependencyObject * GetRootForElement(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceCache@CCoreServices@@QEAAPEAVSurfaceCache@@XZ
    SurfaceCache * GetSurfaceCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemColorDisabledTextBrushNoRef@CCoreServices@@QEAAPEAVCSolidColorBrush@@XZ
    CSolidColorBrush * GetSystemColorDisabledTextBrushNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemColorHotlightBrush@CCoreServices@@QEAAPEAVCSolidColorBrush@@XZ
    CSolidColorBrush * GetSystemColorHotlightBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemColorWindowBrushNoRef@CCoreServices@@QEAAPEAVCSolidColorBrush@@XZ
    CSolidColorBrush * GetSystemColorWindowBrushNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemColorWindowTextBrush@CCoreServices@@QEAAPEAVCSolidColorBrush@@XZ
    CSolidColorBrush * GetSystemColorWindowTextBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemColorWindowTextBrushNoRef@CCoreServices@@QEAAPEAVCSolidColorBrush@@XZ
    CSolidColorBrush * GetSystemColorWindowTextBrushNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemTextSelectionBackgroundBrush@CCoreServices@@QEAAJPEAPEAVCSolidColorBrush@@@Z
    long GetSystemTextSelectionBackgroundBrush(CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemTextSelectionForegroundBrush@CCoreServices@@QEAAJPEAPEAVCSolidColorBrush@@@Z
    long GetSystemTextSelectionForegroundBrush(CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextCore@CCoreServices@@QEAAJPEAPEAVCTextCore@@@Z
    long GetTextCore(CTextCore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextElementBoundingRect@CCoreServices@@QEAAJPEAVCDependencyObject@@PEAUXRECTF_WH@@_N@Z
    long GetTextElementBoundingRect(CDependencyObject *, XRECTF_WH *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextSelectionGripperBrush@CCoreServices@@QEAAJPEAPEAVCBrush@@@Z
    long GetTextSelectionGripperBrush(CBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeResources@CCoreServices@@QEAAPEAVCResourceDictionary@@XZ
    CResourceDictionary * GetThemeResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadID@CCoreServices@@UEAAKXZ
    virtual unsigned long GetThreadID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformInformationFactoryNoRef@CCoreServices@@QEAAPEAUITransformInformationFactory@Private@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::Private::ITransformInformationFactory * GetTransformInformationFactoryNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransparentBrush@CCoreServices@@QEAAJPEAPEAVCBrush@@@Z
    long GetTransparentBrush(CBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAWindowForElementRootNoRef@CCoreServices@@QEAAPEAVCUIAWindow@@PEAVCDependencyObject@@@Z
    CUIAWindow * GetUIAWindowForElementRootNoRef(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUriForPropertyBagHelper@CCoreServices@@QEAAJAEBVxstring_ptr_view@@AEBV?$xref_ptr@UIPALUri@@@@AEAVxstring_ptr@@@Z
    long GetUriForPropertyBagHelper(xstring_ptr_view const &, WindissectOpaque const &, xstring_ptr &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTreeHost@CCoreServices@@QEAAPEAUIVisualTreeHost@@PEAVCDependencyObject@@@Z
    IVisualTreeHost * GetVisualTreeHost(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowSize@CCoreServices@@QEAAXPEAVCDependencyObject@@PEAUXSIZE_PHYSICAL@@PEAUXSIZE_LOGICAL@@@Z
    void GetWindowSize(CDependencyObject *, XSIZE_PHYSICAL *, XSIZE_LOGICAL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDeviceLost@CCoreServices@@QEAAXPEAJ@Z
    void HandleDeviceLost(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBuildTreeWorkEvents@CCoreServices@@QEAAIXZ
    unsigned int HasBuildTreeWorkEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRegisteredNames@CCoreServices@@QEBA_NPEBVCDependencyObject@@@Z
    bool HasRegisteredNames(CDependencyObject const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisualTreeHosts@CCoreServices@@QEAAIXZ
    unsigned int HasVisualTreeHosts();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasXamlIslands@CCoreServices@@QEBA_NXZ
    bool HasXamlIslands() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CCoreServices@@QEAAJUXPOINTF@@PEAVCDependencyObject@@PEAPEAV3@_N@Z
    long HitTest(XPOINTF, CDependencyObject *, CDependencyObject * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CCoreServices@@QEAAJUXPOINTF_COORDS@@PEAVCDependencyObject@@PEAPEAV3@_N@Z
    long HitTest(XPOINTF_COORDS, CDependencyObject *, CDependencyObject * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLinkFromTextControl@CCoreServices@@QEAAJUXPOINTF@@PEAVCDependencyObject@@PEAPEAV3@@Z
    long HitTestLinkFromTextControl(XPOINTF, CDependencyObject *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWaitForIdleEvents@CCoreServices@@QEAAJXZ
    long InitWaitForIdleEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeContextObjects@CCoreServices@@QEAAXXZ
    void InitializeContextObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromIdle@CCoreServices@@QEAAJXZ
    long InitializeFromIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateImplicitStylesOnRoots@CCoreServices@@QEAAJPEAVCResourceDictionary@@@Z
    long InvalidateImplicitStylesOnRoots(CResourceDictionary *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeviceLost@CCoreServices@@QEAA_NXZ
    bool IsDeviceLost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsObjectAnActivePopupRoot@CCoreServices@@QEAAJPEAVCDependencyObject@@PEAI@Z
    long IsObjectAnActivePopupRoot(CDependencyObject *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRenderingFrames@CCoreServices@@QEAA_NXZ
    bool IsRenderingFrames();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTSF3Enabled@CCoreServices@@QEBA_NXZ
    bool IsTSF3Enabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXamlVisible@CCoreServices@@QEBA_NXZ
    bool IsXamlVisible() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadXaml@CCoreServices@@QEAAJIPEBEPEAPEAVCDependencyObject@@@Z
    long LoadXaml(unsigned int, unsigned char const *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadXamlResource@CCoreServices@@QEAAJPEAUIPALUri@@PEA_NPEAPEAUIPALMemory@@PEAUXamlBuffer@Parser@@PEAPEAU2@@Z
    long LoadXamlResource(IPALUri *, bool *, IPALMemory * *, WindissectOpaque *, IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupThemeResource@CCoreServices@@QEAAJW4Theme@Theming@@AEBVxstring_ptr_view@@PEAPEAVCDependencyObject@@@Z
    long LookupThemeResource(int, xstring_ptr_view const &, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupThemeResource@CCoreServices@@QEAAJAEBVxstring_ptr_view@@PEAPEAVCDependencyObject@@@Z
    long LookupThemeResource(xstring_ptr_view const &, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWDrawTree@CCoreServices@@QEAAJPEAVHWWalk@@PEAVCWindowRenderTarget@@PEAVVisualTree@@IPEAUXRECT_WH@@@Z
    long NWDrawTree(HWWalk *, CWindowRenderTarget *, VisualTree *, unsigned int, XRECT_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWGetWindowRenderTarget@CCoreServices@@UEAAPEAVCWindowRenderTarget@@XZ
    virtual CWindowRenderTarget * NWGetWindowRenderTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMutableStyleValueChangedListeners@CCoreServices@@QEAAXQEAVCStyle@@W4KnownPropertyIndex@@@Z
    void NotifyMutableStyleValueChangedListeners(CStyle * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChange@CCoreServices@@QEAAJXZ
    long NotifyThemeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundResourceTimeout@CCoreServices@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnBackgroundResourceTimeout(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowMemory@CCoreServices@@QEAAXXZ
    void OnLowMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@CCoreServices@@QEAAJXZ
    long OnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspend@CCoreServices@@QEAAJ_N0@Z
    long OnSuspend(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@CCoreServices@@QEAAJ_N0@Z
    long OnVisibilityChanged(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeChanged@CCoreServices@@QEAAXIIII@Z
    void OnWindowSizeChanged(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseXaml@CCoreServices@@QEAAJAEBUXamlBuffer@Parser@@_N11PEAPEAVCDependencyObject@@AEBVxstring_ptr_view@@13@Z
    long ParseXaml(WindissectOpaque const &, bool, bool, bool, CDependencyObject * *, xstring_ptr_view const &, bool, xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseXamlWithEventRoot@CCoreServices@@QEAAJAEBUXamlBuffer@Parser@@_N11PEAPEAVCDependencyObject@@PEAUIPALUri@@AEBVxstring_ptr_view@@1@Z
    long ParseXamlWithEventRoot(WindissectOpaque const &, bool, bool, bool, CDependencyObject * *, IPALUri *, xstring_ptr_view const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseXamlWithExistingFrameworkRoot@CCoreServices@@QEAAJAEBUXamlBuffer@Parser@@PEAVCDependencyObject@@AEBVxstring_ptr_view@@2_NPEAPEAV4@@Z
    long ParseXamlWithExistingFrameworkRoot(WindissectOpaque const &, CDependencyObject *, xstring_ptr_view const &, xstring_ptr_view const &, bool, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseDCompAnimationsOnSuspend@CCoreServices@@QEAAJXZ
    long PauseDCompAnimationsOnSuspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostParseRegisterNames@CCoreServices@@QEAAJPEAVCDependencyObject@@@Z
    long PostParseRegisterNames(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDownloadRequests@CCoreServices@@QEAAJH@Z
    long ProcessDownloadRequests(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMediaEvents@CCoreServices@@QEAAJI@Z
    long ProcessMediaEvents(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTouchInteractionCallback@CCoreServices@@QEAAJAEBV?$xref_ptr@VCUIElement@@@@PEAUTouchInteractionMsg@@@Z
    long ProcessTouchInteractionCallback(WindissectOpaque const &, TouchInteractionMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTrackedImages@CCoreServices@@QEAAJXZ
    long ProcessTrackedImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePendingLoadedRequests@CCoreServices@@QEAAJXZ
    long RaisePendingLoadedRequests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimResources@CCoreServices@@QEAAJXZ
    long ReclaimResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecoverFromDeviceLost@CCoreServices@@QEAAJXZ
    long RecoverFromDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalkOnCoreGCRoots@CCoreServices@@QEAAXW4EReferenceTrackerWalkType@DirectUI@@@Z
    void ReferenceTrackerWalkOnCoreGCRoots(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshXamlSchemaContext@CCoreServices@@QEAAJXZ
    long RefreshXamlSchemaContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGripper@CCoreServices@@QEAAJPEAUIGripper@@@Z
    long RegisterGripper(IGripper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterVisualTreeHost@CCoreServices@@QEAAJPEAUIVisualTreeHost@@@Z
    long RegisterVisualTreeHost(IVisualTreeHost *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCoreServices@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDeviceLostListener@CCoreServices@@QEAAXXZ
    void ReleaseDeviceLostListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDeviceResources@CCoreServices@@QEAAJ_N0@Z
    long ReleaseDeviceResources(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChildForUpdate@CCoreServices@@QEAAJPEAVCDependencyObject@@@Z
    long RemoveChildForUpdate(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDownloadRequest@CCoreServices@@QEAAJPEAUDREQUEST@@@Z
    long RemoveDownloadRequest(DREQUEST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveImageUpdateRequest@CCoreServices@@QEAAXPEAVImageSurfaceWrapper@@@Z
    void RemoveImageUpdateRequest(ImageSurfaceWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMatchingDeferredAnimationOperations@CCoreServices@@QEAAXPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    void RemoveMatchingDeferredAnimationOperations(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMutableStyleValueChangedListener@CCoreServices@@QEAAXQEAVCStyle@@AEAV?$weakref_ptr@VCFrameworkElement@@@xref@@@Z
    void RemoveMutableStyleValueChangedListener(CStyle * const, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNameScope@CCoreServices@@QEAAJPEBVCDependencyObject@@W4NameScopeType@NameScoping@Jupiter@@@Z
    long RemoveNameScope(CDependencyObject const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSurfaceImageSource@CCoreServices@@QEAAJPEAVCSurfaceImageSource@@@Z
    long RemoveSurfaceImageSource(CSurfaceImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveThemeChangedListener@CCoreServices@@QEAAXPEAVCFrameworkElement@@@Z
    void RemoveThemeChangedListener(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVirtualSurfaceImageSource@CCoreServices@@QEAAJPEAVCVirtualSurfaceImageSource@@@Z
    long RemoveVirtualSurfaceImageSource(CVirtualSurfaceImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveXamlIslandRoot@CCoreServices@@QEAAXPEAVCXamlIslandRoot@@@Z
    void RemoveXamlIslandRoot(CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportAsyncErrorToBrowserHost@CCoreServices@@QEAAXXZ
    void ReportAsyncErrorToBrowserHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportUnhandledError@CCoreServices@@QEAAJJ@Z
    long ReportUnhandledError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAdditionalFrame@CCoreServices@@QEAAXW4RequestFrameReason@@@Z
    void RequestAdditionalFrame(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMainDCompDeviceCommit@CCoreServices@@QEAAJW4RequestFrameReason@@@Z
    long RequestMainDCompDeviceCommit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestReplayPreviousPointerUpdate@CCoreServices@@QEAAX_N@Z
    void RequestReplayPreviousPointerUpdate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCoreWindowVisualTree@CCoreServices@@QEAAJXZ
    long ResetCoreWindowVisualTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetThemedBrushes@CCoreServices@@QEAAXXZ
    void ResetThemedBrushes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDCompAnimationsOnResume@CCoreServices@@QEAAJXZ
    long ResumeDCompAnimationsOnResume();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationsCompleteEvent@CCoreServices@@QEAAJXZ
    long SetAnimationsCompleteEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentApplication@CCoreServices@@QEAAJPEAVCApplication@@@Z
    long SetCurrentApplication(CApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomResourceLoader@CCoreServices@@QEAAXPEAUICustomResourceLoader@@@Z
    void SetCustomResourceLoader(ICustomResourceLoader *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFontDownloadsIdleEventSignaledStatus@CCoreServices@@QEAAJI@Z
    long SetFontDownloadsIdleEventSignaledStatus(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHasBuildTreeWorksEventSignaledStatus@CCoreServices@@QEAAJI@Z
    long SetHasBuildTreeWorksEventSignaledStatus(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationType@CCoreServices@@QEAAXW4InitializationType@@@Z
    void SetInitializationType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCoreServicesReady@CCoreServices@@SAXI@Z
    static void SetIsCoreServicesReady(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsRenderEnabled@CCoreServices@@QEAAX_N@Z
    void SetIsRenderEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTextPerformanceVisualizationEnabled@CCoreServices@@QEAAJ_N@Z
    long SetIsTextPerformanceVisualizationEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyboardInputEvent@CCoreServices@@QEAAJXZ
    long SetKeyboardInputEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutCompletedNeeded@CCoreServices@@QEAAJW4LayoutCompletedNeededReason@@@Z
    long SetLayoutCompletedNeeded(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNamedObject@CCoreServices@@QEAAJAEBVxstring_ptr_view@@PEBVCDependencyObject@@W4NameScopeType@NameScoping@Jupiter@@PEAV3@@Z
    long SetNamedObject(xstring_ptr_view const &, CDependencyObject const *, int, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParserNamescope@CCoreServices@@QEAA?AV?$xref_ptr@VINameScope@@@@V2@@Z
    WindissectOpaque SetParserNamescope(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupMenuCommandInvokedEvent@CCoreServices@@QEAAJXZ
    long SetPopupMenuCommandInvokedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemFontCollectionOverride@CCoreServices@@QEAAJPEAUIDWriteFontCollection@@@Z
    long SetSystemFontCollectionOverride(IDWriteFontCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeResources@CCoreServices@@QEAAXPEAVCResourceDictionary@@@Z
    void SetThemeResources(CResourceDictionary *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransparentBackground@CCoreServices@@QEAAX_N@Z
    void SetTransparentBackground(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWantsRendering@CCoreServices@@QEAAJI@Z
    long SetWantsRendering(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowSizeOverride@CCoreServices@@QEAAJPEBUXSIZE@@PEAXM@Z
    long SetWindowSizeOverride(XSIZE const *, void *, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowVisibility@CCoreServices@@QEAAJ_N00@Z
    long SetWindowVisibility(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseTypographicFontModel@CCoreServices@@QEAAJPEA_N@Z
    long ShouldUseTypographicFontModel(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownToIdle@CCoreServices@@QEAAJXZ
    long ShutdownToIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateDeviceLost@CCoreServices@@QEAAJ_N0@Z
    long SimulateDeviceLost(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartApplication@CCoreServices@@QEAAJPEAVCApplication@@@Z
    long StartApplication(CApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTrackingImageForRenderWalk@CCoreServices@@QEAAJPEAVCImageSource@@@Z
    long StartTrackingImageForRenderWalk(CImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTrackingImageForRenderWalk@CCoreServices@@QEAAJPEAVCImageSource@@@Z
    long StopTrackingImageForRenderWalk(CImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tick@CCoreServices@@QEAAJ_N0PEA_N1@Z
    long Tick(bool, bool, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackMemory@CCoreServices@@QEAAXXZ
    void TrackMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetElementByName@CCoreServices@@QEAA?AV?$xref_ptr@VCDependencyObject@@@@AEBVxstring_ptr_view@@PEAVCDependencyObject@@@Z
    WindissectOpaque TryGetElementByName(xstring_ptr_view const &, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadXamlResourceHelper@CCoreServices@@QEAAJPEAUIPALUri@@PEA_NPEAPEAUIPALMemory@@PEAUXamlBuffer@Parser@@PEAPEAU2@@Z
    long TryLoadXamlResourceHelper(IPALUri *, bool *, IPALMemory * *, WindissectOpaque *, IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAClientsAreListening@CCoreServices@@QEAAJW4APAutomationEvents@UIAXcp@@@Z
    long UIAClientsAreListening(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationEvent@CCoreServices@@QEAAJPEAVCAutomationPeer@@W4APAutomationEvents@UIAXcp@@@Z
    long UIARaiseAutomationEvent(CAutomationPeer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationPropertyChangedEvent@CCoreServices@@QEAAJPEAVCAutomationPeer@@W4APAutomationProperties@UIAXcp@@AEBVCValue@@2@Z
    long UIARaiseAutomationPropertyChangedEvent(CAutomationPeer *, int, CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseNotificationEvent@CCoreServices@@QEAAJPEAVCAutomationPeer@@W4AutomationNotificationKind@UIAXcp@@W4AutomationNotificationProcessing@4@Vxstring_ptr@@3@Z
    long UIARaiseNotificationEvent(CAutomationPeer *, int, int, xstring_ptr, xstring_ptr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterGripper@CCoreServices@@QEAAJPEAUIGripper@@@Z
    long UnregisterGripper(IGripper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterInputInterceptor@CCoreServices@@QEAAXPEAUIInputInterceptor@@@Z
    void UnregisterInputInterceptor(IInputInterceptor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPLMListener@CCoreServices@@QEAAJPEAUIPLMListener@@@Z
    long UnregisterPLMListener(IPLMListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterRedirectionElement@CCoreServices@@QEAAJPEAVCUIElement@@@Z
    long UnregisterRedirectionElement(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterVisualTreeHost@CCoreServices@@QEAAJPEAUIVisualTreeHost@@@Z
    long UnregisterVisualTreeHost(IVisualTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColorAndBrushResources@CCoreServices@@QEAAJPEA_N@Z
    long UpdateColorAndBrushResources(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFontScale@CCoreServices@@QEAAJM@Z
    long UpdateFontScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImplicitStylesOnRoots@CCoreServices@@QEAAJPEAVCStyle@@0_N@Z
    long UpdateImplicitStylesOnRoots(CStyle *, CStyle *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VirtualSurfaceImageSourcePerFrameWork@CCoreServices@@QEAAJPEBUXRECTF_RB@@@Z
    long VirtualSurfaceImageSourcePerFrameWork(XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getErrorService@CCoreServices@@QEAAJPEAPEAUIErrorService@@@Z
    long getErrorService(IErrorService * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getRootScrollViewer@CCoreServices@@QEAAPEAVCDependencyObject@@XZ
    CDependencyObject * getRootScrollViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?getVisualRoot@CCoreServices@@QEAAPEAVCDependencyObject@@XZ
    CDependencyObject * getVisualRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?putVisualRoot@CCoreServices@@QEAAJPEAVCDependencyObject@@@Z
    long putVisualRoot(CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCoreServices@@QEAA@XZ
    ~CCoreServices();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDeviceRelatedResources@CCoreServices@@AEAAJXZ
    long BuildDeviceRelatedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForLostSurfaceContent@CCoreServices@@AEAAJXZ
    long CheckForLostSurfaceContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResources@CCoreServices@@AEAAJ_N0@Z
    long CleanupDeviceRelatedResources(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSCBP@CCoreServices@@AEBAPEAVCSwapChainBackgroundPanel@@XZ
    CSwapChainBackgroundPanel * FindSCBP() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleVirtualSurfaceImageSourceLostResources@CCoreServices@@AEAAXXZ
    void HandleVirtualSurfaceImageSourceLostResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCoreWindowContentRoot@CCoreServices@@AEAAXXZ
    void InitCoreWindowContentRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCoreServices@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRedirectionElements@CCoreServices@@AEAAXXZ
    void InvalidateRedirectionElements();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentationModeHolographic@CCoreServices@@CA_NXZ
    static bool IsPresentationModeHolographic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCoreServicesEvent@CCoreServices@@AEAAXW4CoreServicesEvent@1@@Z
    void LogCoreServicesEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CCoreServices@@AEAAJXZ
    long ResetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitPrimitiveCompositionCommands@CCoreServices@@AEAAJPEAVCWindowRenderTarget@@PEAVCUIElement@@PEAUIPALClock@@MPEAUXRECT_WH@@_N4@Z
    long SubmitPrimitiveCompositionCommands(CWindowRenderTarget *, CUIElement *, IPALClock *, float, XRECT_WH *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGripperVisibility@CCoreServices@@AEAAJXZ
    long UpdateGripperVisibility();
};
