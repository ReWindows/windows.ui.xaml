#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ExtensibleQualifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@ExtensibleQualifier@@UEAAXPEAVQualifierContext@@@Z
    virtual void Evaluate(QualifierContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flags@ExtensibleQualifier@@UEAA?AW4QualifierFlags@@XZ
    virtual int Flags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQualified@ExtensibleQualifier@@UEAA_NXZ
    virtual bool IsQualified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Score@ExtensibleQualifier@@UEAAHW4QualifierFlags@@@Z
    virtual int Score(int);
};
