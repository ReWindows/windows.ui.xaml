#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class FrameworkView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FrameworkView@DirectUI@@UEAAJPEAUICoreApplicationView@Core@ApplicationModel@Windows@@@Z
    virtual long Initialize(::Windows::ApplicationModel::Core::ICoreApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@FrameworkView@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long Load(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@FrameworkView@DirectUI@@UEAAJXZ
    virtual long Run();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@FrameworkView@DirectUI@@UEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long SetWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@FrameworkView@DirectUI@@UEAAJXZ
    virtual long Uninitialize();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FrameworkView@DirectUI@@MEAA@XZ
    virtual ~FrameworkView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookCoreActivationEvents@FrameworkView@DirectUI@@AEAAJI@Z
    long HookCoreActivationEvents(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@FrameworkView@DirectUI@@AEAAJPEAUICoreApplicationView@Core@ApplicationModel@Windows@@PEAUIActivatedEventArgs@Activation@56@@Z
    long OnActivated(::Windows::ApplicationModel::Core::ICoreApplicationView *, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *);
};
} // namespace DirectUI
