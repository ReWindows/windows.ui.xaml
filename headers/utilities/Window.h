#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 41 member(s).
namespace DirectUI {
class Window {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateImpl@Window@DirectUI@@QEAAJXZ
    long ActivateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Window@DirectUI@@SAJPEAVDXamlCore@2@PEAPEAV12@@Z
    static long Create(::DirectUI::DXamlCore *, Window * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableHostBackdropBrush@Window@DirectUI@@SAJPEAUHWND__@@@Z
    static long EnableHostBackdropBrush(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitializedForIslands@Window@DirectUI@@QEAAJXZ
    long EnsureInitializedForIslands();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEdgeGesture@Window@DirectUI@@QEAAJPEAPEAUIEdgeGesture@Input@UI@Windows@@@Z
    long GetEdgeGesture(::Windows::UI::Input::IEdgeGesture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalCoreWindow2@Window@DirectUI@@QEAAPEAUIInternalCoreWindow2@Core@UI@Windows@@XZ
    ::Windows::UI::Core::IInternalCoreWindow2* GetInternalCoreWindow2();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutBounds@Window@DirectUI@@QEAAJPEAURect@Foundation@Windows@@@Z
    long GetLayoutBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootScrollViewer@Window@DirectUI@@QEAAJPEAPEAUIScrollViewer@Controls@Xaml@UI@Windows@@@Z
    long GetRootScrollViewer(::Windows::UI::Xaml::Controls::IScrollViewer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootScrollViewer@Window@DirectUI@@SAJPEAPEAVCDependencyObject@@@Z
    static long GetRootScrollViewer(CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleBounds@Window@DirectUI@@QEAAJ_N0PEAURect@Foundation@Windows@@@Z
    long GetVisibleBounds(bool, bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowType@Window@DirectUI@@QEAA?AW4Enum@WindowType@@XZ
    int GetWindowType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBounds@Window@DirectUI@@QEAAIXZ
    unsigned int HasBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeChanged@Window@DirectUI@@QEAAJXZ
    long OnWindowSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDesktopWindowXamlSourceHwnd@Window@DirectUI@@QEAAJPEAUHWND__@@PEAVCXamlIslandRoot@@@Z
    long RegisterDesktopWindowXamlSourceHwnd(HWND__*, CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseGraphicsDeviceOnSuspendImpl@Window@DirectUI@@QEAAJE@Z
    long ReleaseGraphicsDeviceOnSuspendImpl(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWindow@Window@DirectUI@@QEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    long SetCoreWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitleBarImpl@Window@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long SetTitleBarImpl(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShrinkApplicationViewVisibleBounds@Window@DirectUI@@SAJPEAV12@PEAURect@Foundation@Windows@@@Z
    static long ShrinkApplicationViewVisibleBounds(Window *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDesktopWindowXamlSourceHwnd@Window@DirectUI@@QEAAXXZ
    void UnregisterDesktopWindowXamlSourceHwnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Activated@Window@DirectUI@@UEAAJPEAUIWindowActivatedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Activated(::Windows::UI::Xaml::IWindowActivatedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@Window@DirectUI@@UEAAJPEAUIWindowClosedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(::Windows::UI::Xaml::IWindowClosedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SizeChanged@Window@DirectUI@@UEAAJPEAUIWindowSizeChangedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SizeChanged(::Windows::UI::Xaml::IWindowSizeChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibilityChanged@Window@DirectUI@@UEAAJPEAUIWindowVisibilityChangedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibilityChanged(::Windows::UI::Xaml::IWindowVisibilityChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundsImpl@Window@DirectUI@@QEAAJPEAURect@Foundation@Windows@@@Z
    long get_BoundsImpl(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompositorImpl@Window@DirectUI@@QEAAJPEAPEAUICompositor@Composition@UI@Windows@@@Z
    long get_CompositorImpl(::Windows::UI::Composition::ICompositor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentImpl@Window@DirectUI@@QEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_ContentImpl(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreWindowImpl@Window@DirectUI@@QEAAJPEAPEAUICoreWindow@Core@UI@Windows@@@Z
    long get_CoreWindowImpl(::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemBackdrop@Window@DirectUI@@UEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long get_SystemBackdrop(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIContextImpl@Window@DirectUI@@QEAAJPEAPEAUIUIContext@UI@Windows@@@Z
    long get_UIContextImpl(::Windows::UI::IUIContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleImpl@Window@DirectUI@@QEAAJPEAE@Z
    long get_VisibleImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemBackdrop@Window@DirectUI@@UEAAJPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long put_SystemBackdrop(::Windows::UI::Composition::ICompositionBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Activated@Window@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Activated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@Window@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SizeChanged@Window@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SizeChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibilityChanged@Window@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibilityChanged(EventRegistrationToken);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Window@DirectUI@@IEAA@XZ
    Window();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Window@DirectUI@@MEAA@XZ
    virtual ~Window();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowClosed@Window@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnCoreWindowClosed(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowLayoutBoundsChanged@Window@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnCoreWindowLayoutBoundsChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowVisibleBoundsChanged@Window@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnCoreWindowVisibleBoundsChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateApplicationBarServiceBounds@Window@DirectUI@@AEAAJXZ
    long UpdateApplicationBarServiceBounds();
};
} // namespace DirectUI
