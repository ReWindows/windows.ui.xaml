#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class ElementSoundPlayerService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSpatialAudioSetting@ElementSoundPlayerService@DirectUI@@QEAA_NXZ
    bool CalculateSpatialAudioSetting();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementSoundPlayerService@DirectUI@@QEAA@XZ
    ElementSoundPlayerService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSoundMode@ElementSoundPlayerService@DirectUI@@SA?AW4ElementSoundMode@Xaml@UI@Windows@@PEAVDependencyObject@2@@Z
    static int GetEffectiveSoundMode(::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ElementSoundPlayerService@DirectUI@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Play@ElementSoundPlayerService@DirectUI@@QEAAJW4ElementSoundKind@Xaml@UI@Windows@@@Z
    long Play(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayInteractionSoundStatic@ElementSoundPlayerService@DirectUI@@SAJXZ
    static long PlayInteractionSoundStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInteractionSoundForElement@ElementSoundPlayerService@DirectUI@@QEAAJW4ElementSoundKind@Xaml@UI@Windows@@PEAVDependencyObject@2@@Z
    long RequestInteractionSoundForElement(int, ::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInteractionSoundForElementStatic@ElementSoundPlayerService@DirectUI@@SAJW4ElementSoundKind@Xaml@UI@Windows@@PEAVDependencyObject@2@@Z
    static long RequestInteractionSoundForElementStatic(int, ::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInteractionSoundForElementStatic@ElementSoundPlayerService@DirectUI@@SAJW4ElementSoundKind@2@PEAVCDependencyObject@@@Z
    static long RequestInteractionSoundForElementStatic(int, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVolume@ElementSoundPlayerService@DirectUI@@QEAAJN@Z
    long SetVolume(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TearDownAudioGraph@ElementSoundPlayerService@DirectUI@@QEAAJXZ
    long TearDownAudioGraph();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ElementSoundPlayerService@DirectUI@@UEAA@XZ
    virtual ~ElementSoundPlayerService();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateElementCenterPoint@ElementSoundPlayerService@DirectUI@@CAXPEAVDependencyObject@2@AEAM1@Z
    static void CalculateElementCenterPoint(::DirectUI::DependencyObject *, float &, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidSound@ElementSoundPlayerService@DirectUI@@CAJW4ElementSoundKind@Xaml@UI@Windows@@@Z
    static long EnsureValidSound(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWorkerThread@ElementSoundPlayerService@DirectUI@@AEAAJXZ
    long EnsureWorkerThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@ElementSoundPlayerService@DirectUI@@CAPEAV12@XZ
    static ElementSoundPlayerService * GetCurrent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoundPriority@ElementSoundPlayerService@DirectUI@@CAHW4ElementSoundKind@Xaml@UI@Windows@@@Z
    static int GetSoundPriority(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSilentElement@ElementSoundPlayerService@DirectUI@@CA_NPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    static bool IsSilentElement(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayInteractionSound@ElementSoundPlayerService@DirectUI@@AEAAJXZ
    long PlayInteractionSound();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayPendingSystemSound@ElementSoundPlayerService@DirectUI@@AEAAJAEBUElementSoundData@12@@Z
    long PlayPendingSystemSound(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldElementPlaySound@ElementSoundPlayerService@DirectUI@@CA_NW4ElementSoundKind@Xaml@UI@Windows@@PEAVDependencyObject@2@@Z
    static bool ShouldElementPlaySound(int, ::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPlaySound@ElementSoundPlayerService@DirectUI@@AEBA_NXZ
    bool ShouldPlaySound() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkerJobStatic@ElementSoundPlayerService@DirectUI@@CAKPEAX@Z
    static unsigned long WorkerJobStatic(void *);
};
} // namespace DirectUI
