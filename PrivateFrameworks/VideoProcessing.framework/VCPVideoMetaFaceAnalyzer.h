/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableDictionary *_activeFaces;
    NSMutableArray *_faceResults;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _transform;
}

- (void).cxx_destruct;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })flipTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)initWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (long)processMetadataGroup:(id)arg1 flags:(unsigned int*)arg2;
- (id)results;

@end
