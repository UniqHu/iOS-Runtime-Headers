/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIView;

@interface ABContentController : NSObject <ABContentControllerProtocol> {
    void *_addressBook;
    id _contentControllerDelegate;
    UIView *_contentLayer;
}


- (void)displayScrollerIndicators;
- (id)contentView;
- (BOOL)table:(id)arg1 showDisclosureForRow:(int)arg2;
- (void)reload;
- (id)init;
- (void)dealloc;
- (id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2;
- (void)back:(BOOL)arg1 save:(BOOL)arg2;
- (id)contentControllerDelegate;
- (void)setContentControllerDelegate:(id)arg1;
- (void)cleanUpContentLayer;
- (BOOL)contentViewIsVisible;
- (void)preloadController;
- (void*)addressBook;

@end