#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class MePullParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@MePullParser@@QEAAJXZ
    long Parse();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MePullParser@@QEAA@XZ
    ~MePullParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckToken@MePullParser@@AEAAJAEBW4eMeTokenKind@MeScanner@@@Z
    long CheckToken(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueWorkingNode@MePullParser@@AEAAJXZ
    long EnqueueWorkingNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpectPropertyName@MePullParser@@AEAAJXZ
    long ExpectPropertyName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpectToken@MePullParser@@AEAAJAEBW4eMeTokenKind@MeScanner@@@Z
    long ExpectToken(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpectTypeName@MePullParser@@AEAAJXZ
    long ExpectTypeName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpectValue@MePullParser@@AEAAJXZ
    long ExpectValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_EndMember@MePullParser@@AEAAJXZ
    long Logic_EndMember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_EndObject@MePullParser@@AEAAJXZ
    long Logic_EndObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_StartMember@MePullParser@@AEAAJXZ
    long Logic_StartMember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_StartObject@MePullParser@@AEAAJXZ
    long Logic_StartObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_Text@MePullParser@@AEAAJXZ
    long Logic_Text();
    // Category: Method | Source: PDB Internal
    // Symbol: ?P_Arguments@MePullParser@@AEAAJXZ
    long P_Arguments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?P_MarkupExtension@MePullParser@@AEAAJXZ
    long P_MarkupExtension();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@MePullParser@@AEAAJI@Z
    long ReportError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@MePullParser@@AEAAJIAEBVxstring_ptr@@@Z
    long ReportError(unsigned int, xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLineInfoOnWorkingNode@MePullParser@@AEAAXXZ
    void SetLineInfoOnWorkingNode();
};
