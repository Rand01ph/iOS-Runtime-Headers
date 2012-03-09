/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface TimingInstance : NSObject  {
    float startTiming;
    float stopTiming;
}

@property float stopTiming;
@property float startTiming;

+ (id)createTimingInstanceWithStartTime:(float)arg1;

- (id)description;
- (void)setStartTiming:(float)arg1;
- (void)setStopTiming:(float)arg1;
- (float)stopTiming;
- (float)startTiming;

@end