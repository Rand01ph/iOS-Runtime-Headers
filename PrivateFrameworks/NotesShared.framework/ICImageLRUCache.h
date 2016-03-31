/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICImageLRUCache : NSObject {
    ICLRUCache *_bigImageCache;
    unsigned int _bigImageCacheCount;
    unsigned int _imagePixelThreshold;
    ICLRUCache *_smallImageCache;
    unsigned int _smallImageCacheCount;
    NSMapTable *_weakImageMap;
}

@property (readonly) ICLRUCache *bigImageCache;
@property (nonatomic, readonly) unsigned int bigImageCacheCount;
@property (nonatomic, readonly) unsigned int imagePixelThreshold;
@property (readonly) ICLRUCache *smallImageCache;
@property (nonatomic, readonly) unsigned int smallImageCacheCount;
@property (readonly) NSMapTable *weakImageMap;

- (void).cxx_destruct;
- (id)bigImageCache;
- (unsigned int)bigImageCacheCount;
- (void)dealloc;
- (unsigned int)imagePixelThreshold;
- (id)initWithBigImageCount:(unsigned int)arg1 smallImageCount:(unsigned int)arg2 pixelThreshold:(unsigned int)arg3;
- (struct UIImage { Class x1; }*)objectForKey:(id)arg1;
- (void)receivedMemoryWarning:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(struct UIImage { Class x1; }*)arg1 forKey:(id)arg2;
- (id)smallImageCache;
- (unsigned int)smallImageCacheCount;
- (id)weakImageMap;

@end
