/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer {
    unsigned int _currentBytes;
    unsigned int _expectedSize;
    id /* block */ _progressBlock;
}

@property (readonly) unsigned int expectedSize;
@property (nonatomic, copy) id /* block */ progressBlock;

- (int)appendData:(id)arg1;
- (void)dealloc;
- (unsigned int)expectedSize;
- (id)initWithConsumer:(id)arg1 expectedSize:(unsigned int)arg2;
- (id)initWithConsumers:(id)arg1 expectedSize:(unsigned int)arg2;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;

@end