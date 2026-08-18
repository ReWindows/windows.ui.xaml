#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class XamlScanner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundXKeyDirective@XamlScanner@@QEAAIXZ
    unsigned int FoundXKeyDirective();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@XamlScanner@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@XamlScanner@@QEAAJXZ
    long Read();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlScanner@@QEAA@XZ
    ~XamlScanner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNamespaceFromCurrentAttributeIfExists@XamlScanner@@AEAAJXZ
    long AddNamespaceFromCurrentAttributeIfExists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueTextNode@XamlScanner@@AEAAJXZ
    long EnqueueTextNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadQueue@XamlScanner@@AEAAJXZ
    long LoadQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessAttributes@XamlScanner@@AEAAJXZ
    long PreProcessAttributes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrivateReadText@XamlScanner@@AEAAJPEAVxstring_ptr@@@Z
    long PrivateReadText(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAttributes@XamlScanner@@AEAAJAEBVXamlScannerNode@@@Z
    long ProcessAttributes(XamlScannerNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullXmlNode@XamlScanner@@AEAAJXZ
    long PullXmlNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAttribute@XamlScanner@@AEAAJAEBVXamlScannerNode@@@Z
    long ReadAttribute(XamlScannerNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadElement@XamlScanner@@AEAAJXZ
    long ReadElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadEndElement@XamlScanner@@AEAAJXZ
    long ReadEndElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadTextOrWhitespace@XamlScanner@@AEAAJ_N@Z
    long ReadTextOrWhitespace(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@XamlScanner@@AEAAJI@Z
    long ReportError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@XamlScanner@@AEAAJIAEBVxstring_ptr@@@Z
    long ReportError(unsigned int, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportUndeclaredNamespacePrefixError@XamlScanner@@AEAAJAEBVxstring_ptr@@@Z
    long ReportUndeclaredNamespacePrefixError(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportXmlLiteError@XamlScanner@@AEAAJJ@Z
    long ReportXmlLiteError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipIgnoredElement@XamlScanner@@AEAAJI@Z
    long SkipIgnoredElement(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyNoAttributesOnPropertyElement@XamlScanner@@AEAAJXZ
    long VerifyNoAttributesOnPropertyElement();
};
