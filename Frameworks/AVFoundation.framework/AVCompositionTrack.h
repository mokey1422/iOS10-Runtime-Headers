/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack  {
    AVCompositionTrackInternal *_priv;
}

@property(readonly) NSArray * segments;


- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)segments;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (void)finalize;
- (void)dealloc;
- (id)description;

@end