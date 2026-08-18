#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 57 member(s).
class CXamlIslandRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientLogicalToScreenPhysical@CXamlIslandRoot@@QEAAXAEAUtagPOINT@@@Z
    void ClientLogicalToScreenPhysical(tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientPhysicalToClientLogical@CXamlIslandRoot@@QEAAXAEAUtagPOINT@@@Z
    void ClientPhysicalToClientLogical(tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@CXamlIslandRoot@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CXamlIslandRoot@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupRootNoRef@CXamlIslandRoot@@QEAAPEAVCPopupRoot@@XZ
    CPopupRoot * GetPopupRootNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicRootVisual@CXamlIslandRoot@@QEAAPEAVCUIElement@@XZ
    CUIElement * GetPublicRootVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenOffset@CXamlIslandRoot@@QEAA?AUtagPOINT@@XZ
    tagPOINT GetScreenOffset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CXamlIslandRoot@@QEAA?AUSize@Foundation@Windows@@XZ
    WindissectOpaque GetSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionRootNoRef@CXamlIslandRoot@@QEAAPEAVCTransitionRoot@@XZ
    CTransitionRoot * GetTransitionRootNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CXamlIslandRoot@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAWindowNoRef@CXamlIslandRoot@@QEAAPEAVCUIAWindow@@XZ
    CUIAWindow * GetUIAWindowNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceId@CXamlIslandRoot@@QEAAIXZ
    unsigned int GetViewInstanceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualIdentifier@CXamlIslandRoot@@QEAA_KXZ
    uint64_t GetVisualIdentifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTreeNoRef@CXamlIslandRoot@@QEAAPEAVVisualTree@@XZ
    VisualTree * GetVisualTreeNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocus@CXamlIslandRoot@@QEBA_NXZ
    bool HasFocus() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CXamlIslandRoot@@QEAAJPEAUIDesktopWindowContentBridgeInterop@Private@Core@UI@Windows@@@Z
    long Initialize(::Windows::UI::Core::Private::IDesktopWindowContentBridgeInterop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CXamlIslandRoot@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CXamlIslandRoot@@QEAAJPEAUIAppWindow@WindowManagement@UI@Windows@@@Z
    long Initialize(::Windows::UI::WindowManagement::IAppWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CXamlIslandRoot@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CXamlIslandRoot@@UEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CXamlIslandRoot@@UEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePointerCapture@CXamlIslandRoot@@QEAAJXZ
    long ReleasePointerCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenPhysicalToClientLogical@CXamlIslandRoot@@QEAAXAEAUtagPOINT@@@Z
    void ScreenPhysicalToClientLogical(tagPOINT &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CXamlIslandRoot@@QEAAJXZ
    long SetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputWindow@CXamlIslandRoot@@QEAAXPEAUHWND__@@@Z
    void SetInputWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerCapture@CXamlIslandRoot@@QEAAJXZ
    long SetPointerCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaterialProperties@CXamlIslandRoot@@QEAAJPEAPEAUIUnknown@@@Z
    long get_MaterialProperties(IUnknown * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXamlIslandRoot@@UEAA@XZ
    virtual ~CXamlIslandRoot();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CXamlIslandRoot@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildOuterBounds@CXamlIslandRoot@@MEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    virtual long GenerateChildOuterBounds(HitTestParams *, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectPointerMessage@CXamlIslandRoot@@IEAAJIPEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long InjectPointerMessage(unsigned int, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CXamlIslandRoot@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropTargetRequested@CXamlIslandRoot@@IEAAJPEAUICoreDragDropManager@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAUICoreDropOperationTargetRequestedEventArgs@34567@@Z
    long OnDropTargetRequested(::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager *, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandActualSizeChanged@CXamlIslandRoot@@IEAAXXZ
    void OnIslandActualSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandAutomationProviderRequested@CXamlIslandRoot@@IEAAJPEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandAutomationProviderRequestedEventArgs@345@@Z
    long OnIslandAutomationProviderRequested(::Windows::UI::Composition::ICompositionIsland *, ::Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandDirectManipulationHitTest@CXamlIslandRoot@@IEAAJPEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnIslandDirectManipulationHitTest(::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandGotFocus@CXamlIslandRoot@@IEAAJPEAUIInspectable@@PEAUICoreWindowEventArgs@Core@UI@Windows@@@Z
    long OnIslandGotFocus(IInspectable *, ::Windows::UI::Core::ICoreWindowEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandKeyDown@CXamlIslandRoot@@IEAAJPEAUIInspectable@@PEAUIKeyEventArgs@Core@UI@Windows@@@Z
    long OnIslandKeyDown(IInspectable *, ::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandKeyUp@CXamlIslandRoot@@IEAAJPEAUIInspectable@@PEAUIKeyEventArgs@Core@UI@Windows@@@Z
    long OnIslandKeyUp(IInspectable *, ::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandLostFocus@CXamlIslandRoot@@IEAAJPEAUIInspectable@@PEAUICoreWindowEventArgs@Core@UI@Windows@@@Z
    long OnIslandLostFocus(IInspectable *, ::Windows::UI::Core::ICoreWindowEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandSysKeyDown@CXamlIslandRoot@@IEAAJPEAUIInspectable@@PEAUIKeyEventArgs@Core@UI@Windows@@@Z
    long OnIslandSysKeyDown(IInspectable *, ::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandSysKeyUp@CXamlIslandRoot@@IEAAJPEAUIInspectable@@PEAUIKeyEventArgs@Core@UI@Windows@@@Z
    long OnIslandSysKeyUp(IInspectable *, ::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChanged@CXamlIslandRoot@@IEAAXXZ
    void OnStateChanged();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CXamlIslandRoot@@AEAA@PEAVCCoreServices@@@Z
    CXamlIslandRoot(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInputObjects@CXamlIslandRoot@@AEAAXQEAUIInputSite@Input@Internal@UI@Windows@@@Z
    void InitInputObjects(::Windows::UI::Internal::Input::IInputSite * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCommon@CXamlIslandRoot@@AEAAJXZ
    long InitializeCommon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInput@CXamlIslandRoot@@AEAA?AV?$ComPtr@UIInputSite@Input@Internal@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque InitializeInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOwnerHWNDForWindowedPopups@CXamlIslandRoot@@AEAAXPEAUIUnknown@@@Z
    void InitializeOwnerHWNDForWindowedPopups(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstrumentationNewAreaMax@CXamlIslandRoot@@AEAAXMM@Z
    void InstrumentationNewAreaMax(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIslandDropTarget@CXamlIslandRoot@@AEAAJPEAUIInspectable@@@Z
    long RegisterIslandDropTarget(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToFocusObserverEvents@CXamlIslandRoot@@AEAAXXZ
    void SubscribeToFocusObserverEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToKeyboardInputEvents@CXamlIslandRoot@@AEAAXXZ
    void SubscribeToKeyboardInputEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToPointerInputObserverEvents@CXamlIslandRoot@@AEAAXXZ
    void SubscribeToPointerInputObserverEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsusbcribeToInputEvents@CXamlIslandRoot@@AEAAXXZ
    void UnsusbcribeToInputEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRasterizationScale@CXamlIslandRoot@@AEAAXXZ
    void UpdateRasterizationScale();
};
