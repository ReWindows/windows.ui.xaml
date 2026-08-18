#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class MinWidthQualifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@MinWidthQualifier@@UEAAXPEAVQualifierContext@@@Z
    virtual void Evaluate(QualifierContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flags@MinWidthQualifier@@UEAA?AW4QualifierFlags@@XZ
    virtual int Flags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQualified@MinWidthQualifier@@UEAA_NXZ
    virtual bool IsQualified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Score@MinWidthQualifier@@UEAAHW4QualifierFlags@@@Z
    virtual int Score(int);
};
