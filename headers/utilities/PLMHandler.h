#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace XAML::PLM {
class PLMHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementAppSuspendActivityCount@PLMHandler@PLM@XAML@@QEAAJXZ
    long DecrementAppSuspendActivityCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtensionTelemetryProc@PLMHandler@PLM@XAML@@SAXQEAUHINSTANCE__@@PEBG@Z
    static void ExtensionTelemetryProc(HINSTANCE__* const, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAdditionalSuspendTime@PLMHandler@PLM@XAML@@QEAAJK@Z
    long RequestAdditionalSuspendTime(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PLMHandler@PLM@XAML@@QEAA@XZ
    ~PLMHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteXamlSuspendActivity@PLMHandler@PLM@XAML@@AEAAXXZ
    void CompleteXamlSuspendActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PLMHandler@PLM@XAML@@CAJIPEAVIPLMHandlerCallbacks@23@PEAPEAV123@@Z
    static long Create(unsigned int, ::XAML::PLM::IPLMHandlerCallbacks *, ::XAML::PLM::PLMHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAfterAppSuspendCallback@PLMHandler@PLM@XAML@@AEAAJXZ
    long InvokeAfterAppSuspendCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnteredBackground@PLMHandler@PLM@XAML@@AEAAJPEAUIInspectable@@PEAUIEnteredBackgroundEventArgs@ApplicationModel@Windows@@@Z
    long OnEnteredBackground(IInspectable *, ::Windows::ApplicationModel::IEnteredBackgroundEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLeavingBackground@PLMHandler@PLM@XAML@@AEAAJPEAUIInspectable@@PEAUILeavingBackgroundEventArgs@ApplicationModel@Windows@@@Z
    long OnLeavingBackground(IInspectable *, ::Windows::ApplicationModel::ILeavingBackgroundEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResuming@PLMHandler@PLM@XAML@@AEAAJPEAUIInspectable@@0@Z
    long OnResuming(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspending@PLMHandler@PLM@XAML@@AEAAJPEAUIInspectable@@PEAUISuspendingEventArgs@ApplicationModel@Windows@@@Z
    long OnSuspending(IInspectable *, ::Windows::ApplicationModel::ISuspendingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithPLM@PLMHandler@PLM@XAML@@AEAAJXZ
    long RegisterWithPLM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWithPLM@PLMHandler@PLM@XAML@@AEAAJXZ
    long UnregisterWithPLM();
};
} // namespace XAML::PLM
