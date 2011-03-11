/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UITextField, NSString;

@interface MPPasswordAlertView : UIAlertView  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    int _style;
    UITextField *_accountTextField;
    UITextField *_passwordTextField;
}

@property(copy) NSString * accountTextFieldPlaceholder;
@property(readonly) int style;


- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)style;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithStyle:(int)arg1 title:(id)arg2 message:(id)arg3 completionHandler:(id)arg4;
- (id)accountTextFieldPlaceholder;
- (void)setAccountTextFieldPlaceholder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;

@end