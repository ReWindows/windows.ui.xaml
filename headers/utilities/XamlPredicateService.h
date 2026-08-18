#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace Parser {
class XamlPredicateService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CrackConditionalXmlns@XamlPredicateService@Parser@@SAXAEBVxstring_ptr@@AEAV3@1@Z
    static void CrackConditionalXmlns(xstring_ptr const &, xstring_ptr &, xstring_ptr &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitOnceCallback@XamlPredicateService@Parser@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitOnceCallback(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlPredicateService@Parser@@AEAA@XZ
    XamlPredicateService();
};
} // namespace Parser
