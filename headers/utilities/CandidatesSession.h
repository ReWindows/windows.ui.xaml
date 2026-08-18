#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace TextBoxInkingHost {
class CandidatesSession {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertOrReplaceRange@CandidatesSession@TextBoxInkingHost@@QEBA?AV?$ComPtr@UITextRange2@@@WRL@Microsoft@@XZ
    WindissectOpaque GetInsertOrReplaceRange() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CandidatesSession@TextBoxInkingHost@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsertOrReplaceRange@CandidatesSession@TextBoxInkingHost@@QEAAXPEAUITextRange2@@@Z
    void SetInsertOrReplaceRange(ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldReplaceText@CandidatesSession@TextBoxInkingHost@@QEBA_NXZ
    bool ShouldReplaceText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewSession@CandidatesSession@TextBoxInkingHost@@QEAAXIW4CandidatesSessionType@InkingExperiences@@@Z
    void StartNewSession(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSessionType@CandidatesSession@TextBoxInkingHost@@QEAAXW4CandidatesSessionType@InkingExperiences@@@Z
    void UpdateSessionType(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CandidatesSession@TextBoxInkingHost@@QEAA@XZ
    ~CandidatesSession();
};
} // namespace TextBoxInkingHost
