/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMotionAttachmentsNode : BWNode {
    NSDictionary *_optionsDict;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
}

+ (void)initialize;

- (long)_setupSampleBufferProcessor;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorIDDict:(id)arg1 moduleInfo:(id)arg2 requiredFormat:(id)arg3 motionAttachmentsMode:(int)arg4 motionAttachmentsSource:(int)arg5 motionCallbackThreadPriority:(unsigned int)arg6;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
