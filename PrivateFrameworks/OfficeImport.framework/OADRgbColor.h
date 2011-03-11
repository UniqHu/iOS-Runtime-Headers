/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRgbColor : OADColor  {
    float mRed;
    float mGreen;
    float mBlue;
}

+ (id)white;
+ (id)black;
+ (id)rgbColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)rgbColorWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
+ (id)rgbColorWithNSColor:(id)arg1;

- (float)blue;
- (float)red;
- (float)green;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
- (id)rgbColorWithFraction:(float)arg1 ofRgbColor:(id)arg2;
- (unsigned char)redByte;
- (unsigned char)greenByte;
- (unsigned char)blueByte;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;

@end