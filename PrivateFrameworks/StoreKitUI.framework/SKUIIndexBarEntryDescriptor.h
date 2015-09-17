/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIndexBarEntryDescriptor : NSObject {
    SKUIArtwork *_artwork;
    NSAttributedString *_attributedString;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentEdgeInsets;
    int _entryDescriptorType;
    UIImage *_image;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    int _visibilityPriority;
}

@property (nonatomic, retain) SKUIArtwork *artwork;
@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentEdgeInsets;
@property (nonatomic) int entryDescriptorType;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic) int visibilityPriority;

+ (id)entryDescriptorWithArtwork:(id)arg1;
+ (id)entryDescriptorWithAttributedString:(id)arg1;
+ (id)entryDescriptorWithImage:(id)arg1;
+ (id)placeholderEntryDescriptorWithSize:(struct CGSize { float x1; float x2; })arg1;

- (void).cxx_destruct;
- (id)artwork;
- (id)attributedString;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentEdgeInsets;
- (int)entryDescriptorType;
- (unsigned int)hash;
- (id)image;
- (BOOL)isEqual:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEntryDescriptorType:(int)arg1;
- (void)setImage:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setVisibilityPriority:(int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (int)visibilityPriority;

@end