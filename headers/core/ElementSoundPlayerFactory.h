#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class ElementSoundPlayerFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSoundMode@ElementSoundPlayerFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAW4ElementSoundMode@456@@Z
    virtual long GetEffectiveSoundMode(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Play@ElementSoundPlayerFactory@DirectUI@@UEAAJW4ElementSoundKind@Xaml@UI@Windows@@@Z
    virtual long Play(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInteractionSoundForElement@ElementSoundPlayerFactory@DirectUI@@UEAAJW4ElementSoundKind@Xaml@UI@Windows@@PEAUIDependencyObject@456@@Z
    virtual long RequestInteractionSoundForElement(int, ::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpatialAudioMode@ElementSoundPlayerFactory@DirectUI@@UEAAJPEAW4ElementSpatialAudioMode@Xaml@UI@Windows@@@Z
    virtual long get_SpatialAudioMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@ElementSoundPlayerFactory@DirectUI@@UEAAJPEAW4ElementSoundPlayerState@Xaml@UI@Windows@@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Volume@ElementSoundPlayerFactory@DirectUI@@UEAAJPEAN@Z
    virtual long get_Volume(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SpatialAudioMode@ElementSoundPlayerFactory@DirectUI@@UEAAJW4ElementSpatialAudioMode@Xaml@UI@Windows@@@Z
    virtual long put_SpatialAudioMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_State@ElementSoundPlayerFactory@DirectUI@@UEAAJW4ElementSoundPlayerState@Xaml@UI@Windows@@@Z
    virtual long put_State(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Volume@ElementSoundPlayerFactory@DirectUI@@UEAAJN@Z
    virtual long put_Volume(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ElementSoundPlayerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ElementSoundPlayerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ElementSoundPlayerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VolumeImpl@ElementSoundPlayerFactory@DirectUI@@AEAAJPEAN@Z
    long get_VolumeImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StateImpl@ElementSoundPlayerFactory@DirectUI@@AEAAJW4ElementSoundPlayerState@Xaml@UI@Windows@@@Z
    long put_StateImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VolumeImpl@ElementSoundPlayerFactory@DirectUI@@AEAAJN@Z
    long put_VolumeImpl(double);
};
} // namespace DirectUI
