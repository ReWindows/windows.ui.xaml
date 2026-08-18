#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CTextWithLinguisticAlternatives {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextWithLinguisticAlternatives@@QEAA@XZ
    CTextWithLinguisticAlternatives();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternative@CTextWithLinguisticAlternatives@@UEAAJIPEAPEAG@Z
    virtual long GetAlternative(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternativeCount@CTextWithLinguisticAlternatives@@UEAAIXZ
    virtual unsigned int GetAlternativeCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CTextWithLinguisticAlternatives@@UEAAJPEAPEAG@Z
    virtual long GetText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextImeCompositionLength@CTextWithLinguisticAlternatives@@UEAAIXZ
    virtual unsigned int GetTextImeCompositionLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextImeCompositionStart@CTextWithLinguisticAlternatives@@UEAAIXZ
    virtual unsigned int GetTextImeCompositionStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTextWithLinguisticAlternatives@@QEAAJPEBGIIPEAUITfCandidateList@@_N@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned int, unsigned int, ITfCandidateList *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextAndComposition@CTextWithLinguisticAlternatives@@QEAAJPEBGII@Z
    long SetTextAndComposition(unsigned short const *, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextWithLinguisticAlternatives@@UEAA@XZ
    virtual ~CTextWithLinguisticAlternatives();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSafeAlternativeString@CTextWithLinguisticAlternatives@@AEAA_NPEBG@Z
    bool _IsSafeAlternativeString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubstituteAlternative@CTextWithLinguisticAlternatives@@AEAAJPEBG_K10PEAPEAG@Z
    long _SubstituteAlternative(unsigned short const *, uint64_t, uint64_t, unsigned short const *, unsigned short * *);
};
