#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class CaptureElementGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CaptureElementGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@CaptureElementGenerated@DirectUI@@UEAAJPEAPEAUIMediaCapture@Capture@Media@Windows@@@Z
    virtual long get_Source(::Windows::Media::Capture::IMediaCapture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@CaptureElementGenerated@DirectUI@@UEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@CaptureElementGenerated@DirectUI@@UEAAJPEAUIMediaCapture@Capture@Media@Windows@@@Z
    virtual long put_Source(::Windows::Media::Capture::IMediaCapture *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@CaptureElementGenerated@DirectUI@@UEAAJW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stretch(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CaptureElementGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CaptureElementGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CaptureElementGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CaptureElementGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
