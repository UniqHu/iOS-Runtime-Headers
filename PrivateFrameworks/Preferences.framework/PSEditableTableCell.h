/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSEditableTableCell : PreferencesTextTableCell  {
    PSSpecifier *_userInfo;
    SEL _targetSetter;
    id _realTarget;
    int _type;
    BOOL _valueChanged;
}

@property int type;


- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3;
- (BOOL)canReload;
- (int)type;
- (void)setType:(int)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)dealloc;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)controlChanged:(id)arg1;
- (void)_setValueChanged;
- (void)_saveForExit;

@end