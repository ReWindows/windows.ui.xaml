#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class ElementSoundPlayerServiceWorkerData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementSoundPlayerServiceWorkerData@DirectUI@@QEAA@XZ
    ElementSoundPlayerServiceWorkerData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ElementSoundPlayerServiceWorkerData@DirectUI@@UEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPendingSound@ElementSoundPlayerServiceWorkerData@DirectUI@@QEAAJAEBUElementSoundData@ElementSoundPlayerService@2@@Z
    long SetPendingSound(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TearDownAudioGraph@ElementSoundPlayerServiceWorkerData@DirectUI@@QEAAJXZ
    long TearDownAudioGraph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkerJob@ElementSoundPlayerServiceWorkerData@DirectUI@@QEAAJXZ
    long WorkerJob();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ElementSoundPlayerServiceWorkerData@DirectUI@@UEAA@XZ
    virtual ~ElementSoundPlayerServiceWorkerData();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ElementSoundPlayerServiceWorkerData@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAudioNodeForSound@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAJW4ElementSoundKind@Xaml@UI@Windows@@PEAPEAUIAudioFrameInputNode@Audio@Media@6@@Z
    long CreateAudioNodeForSound(int, ::Windows::Media::Audio::IAudioFrameInputNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAudioNodeForSound@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAA?AV?$ComPtr@UIAudioFrameInputNode@Audio@Media@Windows@@@ctl@@W4ElementSoundKind@Xaml@UI@Windows@@@Z
    WindissectOpaque GetAudioNodeForSound(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadRawSound@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAJW4ElementSoundKind@Xaml@UI@Windows@@@Z
    long LoadRawSound(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAudioFrameCompleted@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAJPEAUIAudioFrameInputNode@Audio@Media@Windows@@@Z
    long OnAudioFrameCompleted(::Windows::Media::Audio::IAudioFrameInputNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAudioGraphCompleted@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAJPEAU?$IAsyncOperation@PEAVCreateAudioGraphResult@Audio@Media@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnCreateAudioGraphCompleted(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateDeviceOutputNodeCompleted@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAJPEAU?$IAsyncOperation@PEAVCreateAudioDeviceOutputNodeResult@Audio@Media@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnCreateDeviceOutputNodeCompleted(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayPendingSound@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAJXZ
    long PlayPendingSound();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaySoundNode@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAJPEAUIAudioFrameInputNode@Audio@Media@Windows@@@Z
    long PlaySoundNode(::Windows::Media::Audio::IAudioFrameInputNode *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpAudioGraph@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAJXZ
    long SetUpAudioGraph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAudioGraph@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAJXZ
    long StopAudioGraph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TearDownAudioGraphPrivate@ElementSoundPlayerServiceWorkerData@DirectUI@@AEAAXXZ
    void TearDownAudioGraphPrivate();
};
} // namespace DirectUI
