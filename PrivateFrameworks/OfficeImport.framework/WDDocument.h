/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBackground, WDListDefinitionTable, OADDrawingGroup, WDStyleSheet, NSDate, WDFontTable, OADTheme, WDListTable, WDRevisionAuthorTable, WDText, NSString, NSMutableArray;

@interface WDDocument : OCDDocument  {
    WDStyleSheet *mStyleSheet;
    WDFontTable *mFontTable;
    WDListDefinitionTable *mListDefinitionTable;
    WDRevisionAuthorTable *mRevisionAuthorTable;
    WDListTable *mListTable;
    NSMutableArray *mSections;
    unsigned short mDefaultTabWidth;
    WDText *mImageBulletText;
    WDText *mFootnoteSeparator;
    WDText *mFootnoteContinuationSeparator;
    WDText *mFootnoteContinuationNotice;
    WDText *mEndnoteSeparator;
    WDText *mEndnoteContinuationSeparator;
    WDText *mEndnoteContinuationNotice;
    int mFootnoteNumberFormat;
    int mEndnoteNumberFormat;
    int mFootnotePosition;
    int mEndnotePosition;
    int mFootnoteRestart;
    int mEndnoteRestart;
    unsigned short mFootnoteNumberingStart;
    int mGutterPosition;
    NSString *mOleFilename;
    short mZoomPercentage;
    NSString *mVersion;
    unsigned int mMirrorMargins : 1;
    unsigned int mBorderSurroundHeader : 1;
    unsigned int mBorderSurroundFooter : 1;
    unsigned int mAutoHyphenate : 1;
    unsigned int mEvenAndOddHeaders : 1;
    unsigned int mGraphicsInHeaderFooter : 1;
    unsigned int mBookFold : 1;
    unsigned int mShowMarkup : 1;
    unsigned int mShowComments : 1;
    unsigned int mTrackChanges : 1;
    unsigned int mShowRevisionMarksOnScreen : 1;
    unsigned int mShowInsertionsAndDeletions : 1;
    unsigned int mShowFormatting : 1;
    unsigned int mShowOutline : 1;
    NSMutableArray *mDocumentImages;
    NSMutableArray *mChangeTrackingEditDates;
    NSMutableArray *mChangeTrackingEditAuthors;
    NSDate *mCreationDate;
    NSMutableArray *mImageBullets;
    OADDrawingGroup *mDrawingGroup;
    int mZIndexTotalForMainText;
    int mZIndexTotalForHeaderFooterText;
    OADBackground *mDocumentBackground;
    OADTheme *mTheme;
}

+ (int)thumbnailCutOff;

- (id)version;
- (id)init;
- (void)dealloc;
- (void)setOleFilename:(id)arg1;
- (id)revisionAuthorTable;
- (id)footnoteContinuationNotice;
- (id)endnoteContinuationSeparator;
- (id)endnoteContinuationNotice;
- (id)sections;
- (void)setShowMarkup:(BOOL)arg1;
- (void)setFootnotePosition:(int)arg1;
- (void)setEndnotePosition:(int)arg1;
- (void)setEndnoteRestart:(int)arg1;
- (void)setGutterPosition:(int)arg1;
- (void)setZoomPercentage:(short)arg1;
- (void)setShowOutline:(BOOL)arg1;
- (id)addSection;
- (void)setMirrorMargins:(BOOL)arg1;
- (BOOL)borderSurroundHeader;
- (BOOL)borderSurroundFooter;
- (void)setBorderSurroundFooter:(BOOL)arg1;
- (BOOL)graphicsInHeaderFooter;
- (void)setGraphicsInHeaderFooter:(BOOL)arg1;
- (unsigned short)defaultTabWidth;
- (void)setDefaultTabWidth:(unsigned short)arg1;
- (BOOL)autoHyphenate;
- (void)setAutoHyphenate:(BOOL)arg1;
- (void)setEvenAndOddHeaders:(BOOL)arg1;
- (id)footnoteContinuationSeparator;
- (id)endnoteSeparator;
- (int)footnoteNumberFormat;
- (int)endnoteNumberFormat;
- (int)footnotePosition;
- (int)endnotePosition;
- (int)footnoteRestart;
- (int)endnoteRestart;
- (unsigned short)footnoteNumberingStart;
- (void)setFootnoteNumberingStart:(unsigned short)arg1;
- (id)listDefinitionTable;
- (int)listDefinitionCount;
- (id)listDefinitionAt:(int)arg1;
- (id)listDefinitionWithId:(int)arg1;
- (id)addListDefinition;
- (id)listTable;
- (id)listAt:(int)arg1;
- (int)gutterPosition;
- (BOOL)bookFold;
- (short)zoomPercentage;
- (id)applicationName;
- (id)imageBulletWithCharacterOffset:(int)arg1;
- (id)addImageBulletText;
- (id)imageBulletParagraph;
- (void)addImageBullets;
- (int)revisionAuthorCount;
- (id)revisionAuthorAt:(int)arg1;
- (void)addRevisionAuthor:(id)arg1;
- (BOOL)showMarkup;
- (BOOL)showComments;
- (BOOL)trackChanges;
- (BOOL)showRevisionMarksOnScreen;
- (void)setShowRevisionMarksOnScreen:(BOOL)arg1;
- (BOOL)showInsertionsAndDeletions;
- (BOOL)showFormatting;
- (BOOL)showOutline;
- (void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(int)arg2;
- (id)changeTrackingEditDates;
- (id)changeTrackingEditAuthors;
- (id)creationDate;
- (void)setCreationDate:(id)arg1;
- (id)imageBulletText;
- (void)setDocumentBackground:(id)arg1;
- (id)documentBackground;
- (void)removeEmptySections;
- (int)zIndexTotalForMainText;
- (int)zIndexTotalForHeaderFooterText;
- (id)sectionIterator;
- (id)newSectionIterator;
- (id)mainBlocksIterator;
- (id)newMainBlocksIterator;
- (id)mainRunsIterator;
- (id)newMainRunsIterator;
- (id)footnoteIterator;
- (id)newFootnoteIterator;
- (id)endnoteIterator;
- (id)newEndnoteIterator;
- (id)annotationIterator;
- (id)newAnnotationIterator;
- (id)footnoteBlockIterator;
- (id)newFootnoteBlockIterator;
- (id)endnoteBlockIterator;
- (id)newEndnoteBlockIterator;
- (id)annotationBlockIterator;
- (id)newAnnotationBlockIterator;
- (BOOL)isFromBinary;
- (id)lastSection;
- (id)drawingGroup;
- (int)revisionAuthorAddLookup:(id)arg1;
- (id)addList:(id)arg1;
- (id)imageBullets;
- (void)setZIndexTotalForMainText:(int)arg1;
- (void)setZIndexTotalForHeaderFooterText:(int)arg1;
- (void)setBorderSurroundHeader:(BOOL)arg1;
- (void)setBookFold:(BOOL)arg1;
- (void)setShowComments:(BOOL)arg1;
- (void)setShowInsertionsAndDeletions:(BOOL)arg1;
- (void)setShowFormatting:(BOOL)arg1;
- (void)setTrackChanges:(BOOL)arg1;
- (void)setFootnoteNumberFormat:(int)arg1;
- (void)setFootnoteRestart:(int)arg1;
- (id)footnoteSeparator;
- (void)setEndnoteNumberFormat:(int)arg1;
- (BOOL)mirrorMargins;
- (BOOL)evenAndOddHeaders;
- (int)sectionCount;
- (id)fontTable;
- (id)styleSheet;
- (id)theme;
- (void)setVersion:(id)arg1;
- (int)listCount;
- (id)sectionAt:(int)arg1;
- (id)oleFilename;

@end