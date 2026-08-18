#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class FrameworkApplicationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FrameworkApplicationFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIApplication@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::IApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableFailFastOnStowedException@FrameworkApplicationFactory@DirectUI@@UEAAJXZ
    virtual long EnableFailFastOnStowedException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadComponent@FrameworkApplicationFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long LoadComponent(IInspectable *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadComponentWithResourceLocation@FrameworkApplicationFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAUIUriRuntimeClass@Foundation@Windows@@W4ComponentResourceLocation@Primitives@Controls@Xaml@UI@6@@Z
    virtual long LoadComponentWithResourceLocation(IInspectable *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@FrameworkApplicationFactory@DirectUI@@UEAAJPEAUIApplicationInitializationCallback@Xaml@UI@Windows@@@Z
    virtual long Start(::Windows::UI::Xaml::IApplicationInitializationCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInCoreWindowHostingMode@FrameworkApplicationFactory@DirectUI@@UEAAJUWindowCreationParameters@Xaml@UI@Windows@@PEAUIApplicationInitializationCallback@456@@Z
    virtual long StartInCoreWindowHostingMode(::Windows::UI::Xaml::WindowCreationParameters, ::Windows::UI::Xaml::IApplicationInitializationCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@FrameworkApplicationFactory@DirectUI@@UEAAJPEAPEAUIApplication@Xaml@UI@Windows@@@Z
    virtual long get_Current(::Windows::UI::Xaml::IApplication * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@FrameworkApplicationFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FrameworkApplicationFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FrameworkApplicationFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FrameworkApplicationFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadComponentWithResourceLocationImpl@FrameworkApplicationFactory@DirectUI@@AEAAJPEAUIInspectable@@PEAUIUriRuntimeClass@Foundation@Windows@@W4ComponentResourceLocation@Primitives@Controls@Xaml@UI@6@@Z
    long LoadComponentWithResourceLocationImpl(IInspectable *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@FrameworkApplicationFactory@DirectUI@@AEAAJPEAUIApplicationInitializationCallback@Xaml@UI@Windows@@@Z
    long StartImpl(::Windows::UI::Xaml::IApplicationInitializationCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInCoreWindowHostingModeImpl@FrameworkApplicationFactory@DirectUI@@AEAAJUWindowCreationParameters@Xaml@UI@Windows@@PEAUIApplicationInitializationCallback@456@@Z
    long StartInCoreWindowHostingModeImpl(::Windows::UI::Xaml::WindowCreationParameters, ::Windows::UI::Xaml::IApplicationInitializationCallback *);
};
} // namespace DirectUI
