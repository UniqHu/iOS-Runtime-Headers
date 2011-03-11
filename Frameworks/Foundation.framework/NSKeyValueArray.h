/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSString, NSKeyValueNonmutatingArrayMethodSet;

@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingArrayMethodSet *_methods;
}

+ (struct { unsigned int x1; id x2[4]; }*)_proxyNonGCPoolPointer;
+ (id)_proxyShare;

- (id)objectAtIndex:(unsigned int)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)dealloc;
- (unsigned int)count;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (struct { id x1; id x2; })_proxyLocator;
- (id)objectsAtIndexes:(id)arg1;

@end