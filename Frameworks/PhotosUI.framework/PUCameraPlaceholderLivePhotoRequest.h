/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraPlaceholderLivePhotoRequest : NSObject {
    <PUDisplayAsset> *_asset;
    NSError *_error;
    UIImage *_image;
    BOOL _imageRequestFinished;
    id /* block */ _resultHandler;
    NSValue *_stillDisplayTime;
    BOOL _videoRequestFinished;
    NSURL *_videoURL;
}

@property (nonatomic, readonly) <PUDisplayAsset> *asset;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) BOOL imageRequestFinished;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, retain) NSValue *stillDisplayTime;
@property (nonatomic) BOOL videoRequestFinished;
@property (nonatomic, retain) NSURL *videoURL;

- (void).cxx_destruct;
- (id)asset;
- (id)error;
- (id)image;
- (BOOL)imageRequestFinished;
- (id)initWithAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (id /* block */)resultHandler;
- (void)setError:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageRequestFinished:(BOOL)arg1;
- (void)setStillDisplayTime:(id)arg1;
- (void)setVideoRequestFinished:(BOOL)arg1;
- (void)setVideoURL:(id)arg1;
- (id)stillDisplayTime;
- (BOOL)videoRequestFinished;
- (id)videoURL;

@end
