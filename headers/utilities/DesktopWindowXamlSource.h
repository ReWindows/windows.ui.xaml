#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class DesktopWindowXamlSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToWindow@DesktopWindowXamlSource@DirectUI@@UEAAJPEAUHWND__@@@Z
    virtual long AttachToWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@DesktopWindowXamlSource@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DesktopWindowXamlSource@DirectUI@@QEAA@XZ
    DesktopWindowXamlSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTranslateMessage@DesktopWindowXamlSource@DirectUI@@UEAAJPEBUtagMSG@@PEAH@Z
    virtual long PreTranslateMessage(tagMSG const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemBackdrop@DesktopWindowXamlSource@DirectUI@@UEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long get_SystemBackdrop(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowHandle@DesktopWindowXamlSource@DirectUI@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_WindowHandle(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemBackdrop@DesktopWindowXamlSource@DirectUI@@UEAAJPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long put_SystemBackdrop(::Windows::UI::Composition::ICompositionBrush *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopWindowXamlSource@DirectUI@@UEAA@XZ
    virtual ~DesktopWindowXamlSource();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DesktopWindowXamlSource@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DesktopWindowXamlSource@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DesktopWindowXamlSource@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DesktopWindowXamlSource@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToHwndIslandSite@DesktopWindowXamlSource@DirectUI@@AEAAJPEAUHWND__@@@Z
    long ConnectToHwndIslandSite(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireFrameworkTelemetry@DesktopWindowXamlSource@DirectUI@@CAXXZ
    static void FireFrameworkTelemetry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGotFocusEventSourceNoRef@DesktopWindowXamlSource@DirectUI@@EEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@@PEAVDesktopWindowXamlSourceGotFocusEventArgs@2345@@Foundation@Windows@@UIDesktopWindowXamlSource@Hosting@Xaml@UI@3@UIDesktopWindowXamlSourceGotFocusEventArgs@5673@@2@@Z
    virtual long GetGotFocusEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrSetSystemBackdrop@DesktopWindowXamlSource@DirectUI@@AEAAJ_NPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    long GetOrSetSystemBackdrop(bool, ::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTakeFocusRequestedEventSourceNoRef@DesktopWindowXamlSource@DirectUI@@EEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@@PEAVDesktopWindowXamlSourceTakeFocusRequestedEventArgs@2345@@Foundation@Windows@@UIDesktopWindowXamlSource@Hosting@Xaml@UI@3@UIDesktopWindowXamlSourceTakeFocusRequestedEventArgs@5673@@2@@Z
    virtual long GetTakeFocusRequestedEventSourceNoRef(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstrumentUsage@DesktopWindowXamlSource@DirectUI@@CAX_N@Z
    static void InstrumentUsage(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusControllerGotFocus@DesktopWindowXamlSource@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnFocusControllerGotFocus(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusControllerLosingFocus@DesktopWindowXamlSource@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnFocusControllerLosingFocus(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentImpl@DesktopWindowXamlSource@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long put_ContentImpl(::Windows::UI::Xaml::IUIElement *);
};
} // namespace DirectUI
