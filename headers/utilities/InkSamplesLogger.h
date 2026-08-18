#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace InkingExperiences {
class InkSamplesLogger {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputGuide@InkSamplesLogger@InkingExperiences@@SAJV?$ComPtr@U?$IVectorView@PEAVInkAnalysisHint@Analysis@Internal@Inking@Input@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@AEAUInkAnalysisInputGuide@Analysis@Internal@Inking@Input@UI@Windows@@@Z
    static long GetInputGuide(WindissectOpaque, ::Windows::UI::Input::Inking::Internal::Analysis::InkAnalysisInputGuide &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanLogInkForInputScope@InkSamplesLogger@InkingExperiences@@CA_NW4CoreTextInputScope@Core@Text@UI@Windows@@@Z
    static bool CanLogInkForInputScope(int);
};
} // namespace InkingExperiences
