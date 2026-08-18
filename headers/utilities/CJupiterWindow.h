#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 91 member(s).
class CJupiterWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CJupiterWindow@@QEAAJXZ
    long Activate();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CJupiterWindow@@QEAA@PEAUHWND__@@W4Enum@WindowType@@@Z
    CJupiterWindow(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCoreWindow@CJupiterWindow@@SAJPEAUICoreWindow@Core@UI@Windows@@PEAVCJupiterControl@@PEBUWindowCreationParameters@Xaml@45@PEAPEAV1@@Z
    static long ConfigureCoreWindow(::Windows::UI::Core::ICoreWindow *, CJupiterControl *, ::Windows::UI::Xaml::WindowCreationParameters const *, CJupiterWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@CJupiterWindow@@SAJPEAVCJupiterControl@@PEBUWindowCreationParameters@Xaml@UI@Windows@@PEAPEAV1@@Z
    static long CreateCoreWindow(CJupiterControl *, ::Windows::UI::Xaml::WindowCreationParameters const *, CJupiterWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetJupiterWindowPhysicalSize@CJupiterWindow@@QEBA?AUXSIZE@@XZ
    XSIZE GetJupiterWindowPhysicalSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFirstFrameDrawn@CJupiterWindow@@QEAAJXZ
    long NotifyFirstFrameDrawn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandDirectManipulationHitTest@CJupiterWindow@@QEAAJPEAVCContentRoot@@PEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnIslandDirectManipulationHitTest(CContentRoot *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandPointerMessage@CJupiterWindow@@QEAAJIPEAVCContentRoot@@PEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnIslandPointerMessage(unsigned int, CContentRoot *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CJupiterWindow@@UEAAJPEAUIKeyEventArgs@Core@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CJupiterWindow@@UEAAJPEAUIKeyEventArgs@Core@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@CJupiterWindow@@QEAAXXZ
    void OnThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunCoreWindowMessageLoop@CJupiterWindow@@QEAAJXZ
    long RunCoreWindowMessageLoop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorToCoreWindowCursor@CJupiterWindow@@QEAAJXZ
    long SetCursorToCoreWindowCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@CJupiterWindow@@QEAAJXZ
    long ShowWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFontScale@CJupiterWindow@@QEAAJXZ
    long UpdateFontScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapHwnd@CJupiterWindow@@SAJPEAUHWND__@@PEAVCJupiterControl@@PEAPEAV1@@Z
    static long WrapHwnd(HWND__*, CJupiterControl *, CJupiterWindow * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CJupiterWindow@@UEAA@XZ
    virtual ~CJupiterWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceleratorKeyActivated@CJupiterWindow@@AEAAJPEAVCContentRoot@@PEAUIAcceleratorKeyEventArgs@Core@UI@Windows@@@Z
    long AcceleratorKeyActivated(CContentRoot *, ::Windows::UI::Core::IAcceleratorKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseCoreDragDrop@CJupiterWindow@@AEBA_NXZ
    bool CanUseCoreDragDrop() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertAcceleratorKeyEventArgsToMsg@CJupiterWindow@@AEAAJW4CoreAcceleratorKeyEventType@Core@UI@Windows@@W4VirtualKey@System@5@UCorePhysicalKeyStatus@345@PEAUtagMSG@@PEAI@Z
    long ConvertAcceleratorKeyEventArgsToMsg(int, int, ::Windows::UI::Core::CorePhysicalKeyStatus, tagMSG *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreWindowSubclassProc@CJupiterWindow@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t CoreWindowSubclassProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CJupiterWindow@@CAJPEAUHWND__@@W4Enum@WindowType@@PEAVCJupiterControl@@PEAPEAV1@@Z
    static long Create(HWND__*, int, CJupiterControl *, CJupiterWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineDisplayRotation@CJupiterWindow@@AEAAJXZ
    long DetermineDisplayRotation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowContentRootNoRef@CJupiterWindow@@AEBAPEAVCContentRoot@@XZ
    CContentRoot * GetCoreWindowContentRootNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontScale@CJupiterWindow@@AEAAMXZ
    float GetFontScale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLocaleSettingChanged@CJupiterWindow@@AEAAIPEBG@Z
    unsigned int IsLocaleSettingChanged(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAcceleratorKeyActivated@CJupiterWindow@@AEAAJPEAUICoreDispatcher@Core@UI@Windows@@PEAUIAcceleratorKeyEventArgs@345@@Z
    long OnAcceleratorKeyActivated(::Windows::UI::Core::ICoreDispatcher *, ::Windows::UI::Core::IAcceleratorKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComponentInputConfiguredChanged@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnComponentInputConfiguredChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowActivated@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIWindowActivatedEventArgs@345@@Z
    long OnCoreWindowActivated(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IWindowActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowCharacterReceived@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUICharacterReceivedEventArgs@345@@Z
    long OnCoreWindowCharacterReceived(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::ICharacterReceivedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowComponentDisplayInformationChanged@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIComponentDisplayInformationChangedEventArgs@345@@Z
    long OnCoreWindowComponentDisplayInformationChanged(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IComponentDisplayInformationChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowContextMenuRequested@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIContextMenuRequestedEventArgs@345@@Z
    long OnCoreWindowContextMenuRequested(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IContextMenuRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowDestroying@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUICoreWindowEventArgs@345@@Z
    long OnCoreWindowDestroying(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::ICoreWindowEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowDisplayChanged@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIDisplayChangedEventArgs@345@@Z
    long OnCoreWindowDisplayChanged(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IDisplayChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowInputDelegated@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInputDelegatedEventArgs@345@@Z
    long OnCoreWindowInputDelegated(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IInputDelegatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowKeyDown@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIKeyEventArgs@345@@Z
    long OnCoreWindowKeyDown(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowKeyUp@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIKeyEventArgs@345@@Z
    long OnCoreWindowKeyUp(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPointerCaptureLost@CJupiterWindow@@AEAAJPEAUIInspectable@@PEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowPointerCaptureLost(IInspectable *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPointerEntered@CJupiterWindow@@AEAAJPEAUIInspectable@@PEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowPointerEntered(IInspectable *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPointerExited@CJupiterWindow@@AEAAJPEAUIInspectable@@PEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowPointerExited(IInspectable *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPointerMessage@CJupiterWindow@@AEAAJIPEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowPointerMessage(unsigned int, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPointerMoved@CJupiterWindow@@AEAAJPEAUIInspectable@@PEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowPointerMoved(IInspectable *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPointerPressed@CJupiterWindow@@AEAAJPEAUIInspectable@@PEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowPointerPressed(IInspectable *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPointerReleased@CJupiterWindow@@AEAAJPEAUIInspectable@@PEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowPointerReleased(IInspectable *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPointerWheelChanged@CJupiterWindow@@AEAAJPEAUIInspectable@@PEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowPointerWheelChanged(IInspectable *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPositionChanged@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnCoreWindowPositionChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowSettingChanged@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUISettingChangedEventArgs@345@@Z
    long OnCoreWindowSettingChanged(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::ISettingChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowSizeChanged@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIWindowSizeChangedEventArgs@345@@Z
    long OnCoreWindowSizeChanged(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IWindowSizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowSysKeyDown@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIKeyEventArgs@345@@Z
    long OnCoreWindowSysKeyDown(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowSysKeyUp@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIKeyEventArgs@345@@Z
    long OnCoreWindowSysKeyUp(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowThemeChanged@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUICoreWindowEventArgs@345@@Z
    long OnCoreWindowThemeChanged(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::ICoreWindowEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowViewStateChanged@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIViewStateChangedEventArgs@345@@Z
    long OnCoreWindowViewStateChanged(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IViewStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowVisibilityChanged@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIVisibilityChangedEventArgs@345@@Z
    long OnCoreWindowVisibilityChanged(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IVisibilityChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDirectManipulationHitTest@CJupiterWindow@@AEAAJPEAUIInternalDirectManipulationInterop@Core@UI@Windows@@PEAUIPointerEventArgs@345@@Z
    long OnDirectManipulationHitTest(::Windows::UI::Core::IInternalDirectManipulationInterop *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropTargetRequested@CJupiterWindow@@AEAAJPEAUICoreDragDropManager@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAUICoreDropOperationTargetRequestedEventArgs@34567@@Z
    long OnDropTargetRequested(::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager *, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@CJupiterWindow@@AEAAJXZ
    long OnSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUISettingsColorValuesChanged@CJupiterWindow@@AEAAJPEAUIUISettings@ViewManagement@UI@Windows@@PEAUIInspectable@@@Z
    long OnUISettingsColorValuesChanged(::Windows::UI::ViewManagement::IUISettings *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUISettingsFontScaleChanged@CJupiterWindow@@AEAAJPEAUIUISettings@ViewManagement@UI@Windows@@PEAUIInspectable@@@Z
    long OnUISettingsFontScaleChanged(::Windows::UI::ViewManagement::IUISettings *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackIntoWin32StyleCharArgs@CJupiterWindow@@AEAAJPEAUICharacterReceivedEventArgs@Core@UI@Windows@@IPEAI1@Z
    long PackIntoWin32StyleCharArgs(::Windows::UI::Core::ICharacterReceivedEventArgs *, unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCharEvents@CJupiterWindow@@AEAAJPEAUICharacterReceivedEventArgs@Core@UI@Windows@@PEAVCContentRoot@@@Z
    long ProcessCharEvents(::Windows::UI::Core::ICharacterReceivedEventArgs *, CContentRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessContextMenu@CJupiterWindow@@AEAAHI_K_J_NPEAVCContentRoot@@@Z
    int ProcessContextMenu(unsigned int, uint64_t, int64_t, bool, CContentRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCopyAndPaste@CJupiterWindow@@AEAAJW4VirtualKey@System@Windows@@@Z
    long ProcessCopyAndPaste(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFocusEvents@CJupiterWindow@@AEAAJPEAUICoreWindowEventArgs@Core@UI@Windows@@IPEAVCContentRoot@@@Z
    long ProcessFocusEvents(::Windows::UI::Core::ICoreWindowEventArgs *, unsigned int, CContentRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessKeyEvents@CJupiterWindow@@AEAAJPEAUIKeyEventArgs@Core@UI@Windows@@IPEAVCContentRoot@@_N@Z
    long ProcessKeyEvents(::Windows::UI::Core::IKeyEventArgs *, unsigned int, CContentRoot *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAcceleratorKeyActivated@CJupiterWindow@@AEAAJXZ
    long RegisterAcceleratorKeyActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCoreWindowEvents@CJupiterWindow@@AEAAJXZ
    long RegisterCoreWindowEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDropTargetRequested@CJupiterWindow@@AEAAJXZ
    long RegisterDropTargetRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForPowerNotification@CJupiterWindow@@AEAAJXZ
    long RegisterForPowerNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSynchronizedResize@CJupiterWindow@@AEAAJXZ
    long RegisterSynchronizedResize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUISettingsEvents@CJupiterWindow@@AEAAJXZ
    long RegisterUISettingsEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithDragDropManager@CJupiterWindow@@AEAAJXZ
    long RegisterWithDragDropManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppID@CJupiterWindow@@AEAAJXZ
    long SetAppID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWindow@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    long SetCoreWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialCursor@CJupiterWindow@@AEAAJXZ
    long SetInitialCursor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutCompletedNeeded@CJupiterWindow@@AEAAJW4LayoutCompletedNeededReason@@@Z
    long SetLayoutCompletedNeeded(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseCoreDragDrop@CJupiterWindow@@AEAAX_N@Z
    void SetUseCoreDragDrop(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterForPowerNotification@CJupiterWindow@@CAHW4Enum@WindowType@@@Z
    static int ShouldRegisterForPowerNotification(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticCoreWindowSubclassProc@CJupiterWindow@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t StaticCoreWindowSubclassProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticWindowProc@CJupiterWindow@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t StaticWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAccelerator@CJupiterWindow@@AEAAJPEAUtagMSG@@PEAI@Z
    long TranslateAccelerator(tagMSG *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAcceleratorKeyActivated@CJupiterWindow@@AEAAJXZ
    long UnregisterAcceleratorKeyActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCoreWindowEvents@CJupiterWindow@@AEAAJXZ
    long UnregisterCoreWindowEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDropTargetRequested@CJupiterWindow@@AEAAJXZ
    long UnregisterDropTargetRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForPowerNotification@CJupiterWindow@@AEAAJXZ
    long UnregisterForPowerNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterUISettingsEvents@CJupiterWindow@@AEAAJXZ
    long UnregisterUISettingsEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComponentDisplayInfo@CJupiterWindow@@AEAAJXZ
    long UpdateComponentDisplayInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowVisibility@CJupiterWindow@@AEAAJPEAUICoreWindow@Core@UI@Windows@@I@Z
    long UpdateWindowVisibility(::Windows::UI::Core::ICoreWindow *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseCoreWindowSubclassedEvents@CJupiterWindow@@AEBA_NXZ
    bool UseCoreWindowSubclassedEvents() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowProc@CJupiterWindow@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t WindowProc(HWND__*, unsigned int, uint64_t, int64_t);
};
