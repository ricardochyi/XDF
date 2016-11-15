/*
 * Author: Dominik Seichter
 * Edited by: Zhuo Chen, Yingting Huang
*/
#ifndef XDFIMPORT_H__
#define XDFIMPORT_H__

#include <podofo.h>
#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;
using namespace PoDoFo;

#ifndef MAX_PATH
#define MAX_PATH 512
#endif // MAX_PATH

/** This class uses the PoDoFo lib to parse 
 *  a PDF file and to invoke the in XDF
 *  functions for creating text, graphics and
 *  image bjects
 */
class PdfImporter {
private:
    // output in human language the parsed content to this file
    ofstream of;
public:
    PdfImporter();
    virtual ~PdfImporter();

    void Init( const char* pszInput );

private:
    /** Extract all text from the given page
     *
     *  \param pDocument the owning document
     *  \param pPage extract the text of this page.
     */
    void ImportPage( PdfMemDocument* pDocument, PdfPage* pPage );

    /** Adds a text string to a list which can be sorted by 
     *  position on the page later, so that the whole structure 
     *  of the text including formatting can be reconstructed.
     *
     *  \param dCurPosX x position of the text
     *  \param dCurPosY y position of the text
     *  \param pCurFont font of the text
     *  \param rString the actual string
     */
    void AddTextElement( double dCurPosX, double dCurPosY, 
                         PdfFont* pCurFont, const PdfString & rString );
};

#endif // _TEXT_EXTRACTOR_H_
