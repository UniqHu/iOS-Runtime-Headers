/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoLoadingStateObserverFactory : NSObject <SXVideoLoadingStateObserverFactory> {
    <SXPlaybackCoordinatorProviding> * _playbackCoordinatorProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXPlaybackCoordinatorProviding> *playbackCoordinatorProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createLoadingStateObserverForVideo:(id)arg1;
- (id)initWithPlaybackCoordinatorProvider:(id)arg1;
- (id)playbackCoordinatorProvider;

@end