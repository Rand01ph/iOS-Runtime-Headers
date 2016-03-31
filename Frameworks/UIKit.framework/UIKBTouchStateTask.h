/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTouchStateTask : NSObject <NSCopying> {
    id /* block */ _task;
    UIKBTouchState *_touchState;
}

@property (nonatomic, readonly, copy) id /* block */ task;
@property (nonatomic, readonly, retain) UIKBTouchState *touchState;

+ (id)touchStateTaskForTouchState:(id)arg1 andTask:(id /* block */)arg2;

- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithTouchState:(id)arg1 andTask:(id /* block */)arg2;
- (id /* block */)task;
- (id)touchState;

@end
