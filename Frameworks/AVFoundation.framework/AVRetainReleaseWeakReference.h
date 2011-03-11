/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference  {
    id _referencedObject;
    NSString *_cachedReferencedObjectDescription;
    struct dispatch_queue_s { } *_readWriteDispatchQueue;
    int _referencedObjectRetainCount;
}


- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithReferencedObject:(id)arg1;
- (void)referencedObjectWillBeRetained;
- (id)referencedObject;
- (void)referencedObjectWillBeReleased;

@end