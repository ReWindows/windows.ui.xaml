#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CTextBoxHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCaretAnimationStoryboard@CTextBoxHelpers@@SAJPEAPEAVCStoryboard@@PEAVCCoreServices@@PEAVCDependencyObject@@PEBVCDependencyProperty@@MM@Z
    static long CreateCaretAnimationStoryboard(CStoryboard * *, CCoreServices *, CDependencyObject *, CDependencyProperty const *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePixelSnappedRectanglePath@CTextBoxHelpers@@SAJPEBVCMILMatrix@@UXRECTF_WH@@MW4EditRectangleKind@@PEAPEAVCRasterizerPath@@@Z
    static long GeneratePixelSnappedRectanglePath(CMILMatrix const *, XRECTF_WH, float, int, CRasterizerPath * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentWordBoundaryPosition@CTextBoxHelpers@@SAJPEAUITextContainer@@VCTextPosition@@W4FindBoundaryType@@W4TagConversion@@P6AJ1PEAVISimpleTextBackend@@2PEAV3@@Z5PEAW4TextGravity@@@Z
    static long GetAdjacentWordBoundaryPosition(ITextContainer *, CTextPosition, int, int, long ( *)(CTextPosition, ISimpleTextBackend *, int, CTextPosition *), CTextPosition *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentWordNavigationBoundaryPosition@CTextBoxHelpers@@SAJPEAUITextContainer@@VCTextPosition@@W4FindBoundaryType@@W4TagConversion@@PEAV3@PEAW4TextGravity@@@Z
    static long GetAdjacentWordNavigationBoundaryPosition(ITextContainer *, CTextPosition, int, int, CTextPosition *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentWordSelectionBoundaryPosition@CTextBoxHelpers@@SAJPEAUITextContainer@@VCTextPosition@@W4FindBoundaryType@@W4TagConversion@@PEAV3@PEAW4TextGravity@@@Z
    static long GetAdjacentWordSelectionBoundaryPosition(ITextContainer *, CTextPosition, int, int, CTextPosition *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaretBlinkingPeriod@CTextBoxHelpers@@SAMXZ
    static float GetCaretBlinkingPeriod();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestNonWhitespaceWordBoundary@CTextBoxHelpers@@SAJPEAUITextContainer@@VCTextPosition@@W4TagConversion@@PEAV3@@Z
    static long GetClosestNonWhitespaceWordBoundary(ITextContainer *, CTextPosition, int, CTextPosition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxTextPosition@CTextBoxHelpers@@SAIPEAUITextContainer@@@Z
    static unsigned int GetMaxTextPosition(ITextContainer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelSnappedRectangle@CTextBoxHelpers@@SAJPEBVCMILMatrix@@W4EditRectangleKind@@MPEAUXRECTF_WH@@@Z
    static long GetPixelSnappedRectangle(CMILMatrix const *, int, float, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CTextBoxHelpers@@SAJPEAUITextContainer@@IIIPEAPEAVCString@@@Z
    static long GetText(ITextContainer *, unsigned int, unsigned int, unsigned int, CString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectWordFromTextPosition@CTextBoxHelpers@@SAJPEAUITextContainer@@VCTextPosition@@PEAUIJupiterTextSelection@@W4FindBoundaryType@@W4TagConversion@@@Z
    static long SelectWordFromTextPosition(ITextContainer *, CTextPosition, IJupiterTextSelection *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapRectToPixel@CTextBoxHelpers@@SAJPEBVCMILMatrix@@MW4EditRectangleKind@@PEAUXRECTF_WH@@@Z
    static long SnapRectToPixel(CMILMatrix const *, float, int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformAllowsSnapToPixels@CTextBoxHelpers@@SAIPEBVCMILMatrix@@@Z
    static unsigned int TransformAllowsSnapToPixels(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPositionPair@CTextBoxHelpers@@SAJPEAUITextContainer@@II@Z
    static long VerifyPositionPair(ITextContainer *, unsigned int, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDoubleDiscreteKeyFrame@CTextBoxHelpers@@CAJPEAVCCoreServices@@MMPEAVCDoubleKeyFrameCollection@@@Z
    static long AppendDoubleDiscreteKeyFrame(CCoreServices *, float, float, CDoubleKeyFrameCollection *);
};
