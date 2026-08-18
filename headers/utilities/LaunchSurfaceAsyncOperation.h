#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace Designer::AsyncHelpers {
class LaunchSurfaceAsyncOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@LaunchSurfaceAsyncOperation@AsyncHelpers@Designer@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@LaunchSurfaceAsyncOperation@AsyncHelpers@Designer@@UEAAJPEAPEAUIDesignerAppView@Hosting@Xaml@UI@Windows@@@Z
    virtual long GetResults(::Windows::UI::Xaml::Hosting::IDesignerAppView * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchSurfaceAsyncOperation@AsyncHelpers@Designer@@QEAA@XZ
    LaunchSurfaceAsyncOperation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchSurfaceAsyncOperation@AsyncHelpers@Designer@@UEAA@XZ
    virtual ~LaunchSurfaceAsyncOperation();
};
} // namespace Designer::AsyncHelpers
