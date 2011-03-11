/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexPath;

@interface UIUpdateItem : NSObject  {
    int _action;
    NSIndexPath *_indexPath;
    int _animation;
    float _offset;
}

@property float offset;
@property(readonly) int animation;
@property(readonly) NSIndexPath * indexPath;
@property(readonly) int action;


- (int)animation;
- (id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(int)arg3;
- (id)_actionDescription;
- (BOOL)isSectionOperation;
- (id)indexPath;
- (void)setOffset:(float)arg1;
- (float)offset;
- (int)action;
- (int)inverseCompareIndexPaths:(id)arg1;
- (int)compareIndexPaths:(id)arg1;
- (void)dealloc;

@end