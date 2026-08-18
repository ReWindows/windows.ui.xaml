#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class DCompAnimationConversionContextWUC {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorLinearAnimation@DCompAnimationConversionContextWUC@@QEAA?AV?$ComPtr@UIColorKeyFrameAnimation@Composition@UI@Windows@@@WRL@Microsoft@@UColor@UI@Windows@@0_NMPEAVCEasingFunctionBase@@@Z
    WindissectOpaque CreateColorLinearAnimation(::Windows::UI::Color, ::Windows::UI::Color, bool, float, CEasingFunctionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDiscreteEasingFunction@DCompAnimationConversionContextWUC@@QEAA?AV?$ComPtr@UICompositionEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque CreateDiscreteEasingFunction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEmptyColorAnimation@DCompAnimationConversionContextWUC@@QEAA?AV?$ComPtr@UIColorKeyFrameAnimation@Composition@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque CreateEmptyColorAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearEasingFunction@DCompAnimationConversionContextWUC@@QEAA?AV?$ComPtr@UICompositionEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque CreateLinearEasingFunction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOtherEasingFunction@DCompAnimationConversionContextWUC@@QEAA?AV?$ComPtr@UICompositionEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@PEAVCDependencyObject@@@Z
    WindissectOpaque CreateOtherEasingFunction(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScalarLinearAnimation@DCompAnimationConversionContextWUC@@QEAA?AV?$ComPtr@UIScalarKeyFrameAnimation@Composition@UI@Windows@@@WRL@Microsoft@@MM_NM0MPEAVCEasingFunctionBase@@@Z
    WindissectOpaque CreateScalarLinearAnimation(float, float, bool, float, bool, float, CEasingFunctionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplineEasingFunction@DCompAnimationConversionContextWUC@@QEAA?AV?$ComPtr@UICompositionEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@PEAVCKeySpline@@@Z
    WindissectOpaque CreateSplineEasingFunction(CKeySpline *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompAnimationConversionContextWUC@@QEAA@PEAV0@@Z
    DCompAnimationConversionContextWUC(DCompAnimationConversionContextWUC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertColorKeyFrame@DCompAnimationConversionContextWUC@@SAXMAEAV?$ComPtr@UIColorKeyFrameAnimation@Composition@UI@Windows@@@WRL@Microsoft@@UColor@UI@Windows@@AEAV?$ComPtr@UICompositionEasingFunction@Composition@UI@Windows@@@34@@Z
    static void InsertColorKeyFrame(float, WindissectOpaque &, ::Windows::UI::Color, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExpressionKeyFrame@DCompAnimationConversionContextWUC@@SAXMAEAV?$ComPtr@UIScalarKeyFrameAnimation@Composition@UI@Windows@@@WRL@Microsoft@@MAEAV?$ComPtr@UICompositionEasingFunction@Composition@UI@Windows@@@34@@Z
    static void InsertExpressionKeyFrame(float, WindissectOpaque &, float, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoReverse@DCompAnimationConversionContextWUC@@SAXPEAUIKeyFrameAnimation@Composition@UI@Windows@@@Z
    static void SetAutoReverse(::Windows::UI::Composition::IKeyFrameAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBeginTime@DCompAnimationConversionContextWUC@@SAXPEAUIKeyFrameAnimation@Composition@UI@Windows@@N@Z
    static void SetBeginTime(::Windows::UI::Composition::IKeyFrameAnimation *, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRepeat@DCompAnimationConversionContextWUC@@SAXPEAUIKeyFrameAnimation@Composition@UI@Windows@@W4AnimationIterationBehavior@345@M@Z
    static void SetRepeat(::Windows::UI::Composition::IKeyFrameAnimation *, int, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompAnimationConversionContextWUC@@QEAA@XZ
    ~DCompAnimationConversionContextWUC();
};
