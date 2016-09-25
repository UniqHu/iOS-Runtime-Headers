/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFCollectionView_ios : PDFCollectionView {
    UITouch * _currentTouch;
    BOOL  _inDelayedUpdate;
    BOOL  _isInScrubbingGesture;
    BOOL  _isUpdatingScrollPosition;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _lastFrame;
    PDFPage * _lastScrubbedToPage;
    PDFThumbnailItem_ios * _scrubbingItemView;
}

@property (retain) UITouch *currentTouch;
@property BOOL inDelayedUpdate;
@property BOOL isInScrubbingGesture;
@property BOOL isUpdatingScrollPosition;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } lastFrame;
@property PDFPage *lastScrubbedToPage;
@property (retain) PDFThumbnailItem_ios *scrubbingItemView;

+ (struct CGSize { float x1; float x2; })defaultThumbnailSize;
+ (id)layoutForPlatform;

- (void).cxx_destruct;
- (void)_hideScrubber;
- (void)_reloadDataForFrameChangeAfterDelay:(id)arg1;
- (void)_showScrubberForLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_showScrubberForPage:(id)arg1 withCenter:(struct CGPoint { float x1; float x2; })arg2;
- (void)_updateScrubberToShowCurrentPage;
- (id)currentTouch;
- (void)dealloc;
- (BOOL)inDelayedUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (BOOL)isInScrubbingGesture;
- (BOOL)isUpdatingScrollPosition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lastFrame;
- (id)lastScrubbedToPage;
- (void)layoutSubviews;
- (unsigned int)maxFittingItems;
- (void)pageDidChangeNotification:(id)arg1;
- (id)scrubbingItemView;
- (void)setCurrentTouch:(id)arg1;
- (void)setInDelayedUpdate:(BOOL)arg1;
- (void)setIsInScrubbingGesture:(BOOL)arg1;
- (void)setIsUpdatingScrollPosition:(BOOL)arg1;
- (void)setLastFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLastScrubbedToPage:(id)arg1;
- (void)setScrubbingItemView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end