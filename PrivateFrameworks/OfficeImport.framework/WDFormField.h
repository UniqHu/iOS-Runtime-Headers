/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface WDFormField : WDRun  {
    unsigned int mPosition;
    BOOL mLinkAbsolute;
    BOOL mLinkSpecifyingNamedLocation;
    NSString *mNamedLocation;
    NSString *mURI;
    NSString *mMacName;
    NSString *mDosName;
}


- (void)setPosition:(unsigned long)arg1;
- (unsigned long)position;
- (void)dealloc;
- (BOOL)linkAbsolute;
- (void)setLinkAbsolute:(BOOL)arg1;
- (BOOL)linkSpecifyingNamedLocation;
- (void)setLinkSpecifyingNamedLocation:(BOOL)arg1;
- (id)namedLocation;
- (void)setNamedLocation:(id)arg1;
- (id)URI;
- (void)setURI:(id)arg1;
- (id)macName;
- (void)setMacName:(id)arg1;
- (id)dosName;
- (void)setDosName:(id)arg1;
- (id)initWithParagraph:(id)arg1;
- (int)runType;

@end