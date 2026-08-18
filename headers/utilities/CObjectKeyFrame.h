#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CObjectKeyFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompSegments@CObjectKeyFrame@@UEAAXPEAVDCompAnimationConversionContextDC@@PEAVCKeyFrame@@PEAUIDCompositionAnimation@@H@Z
    virtual void AddDCompSegments(DCompAnimationConversionContextDC *, CKeyFrame *, IDCompositionAnimation *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CObjectKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CObjectKeyFrame@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObjectKeyFrame@@IEAA@PEAVCCoreServices@@@Z
    CObjectKeyFrame(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObjectKeyFrame@@MEAA@XZ
    virtual ~CObjectKeyFrame();
};
