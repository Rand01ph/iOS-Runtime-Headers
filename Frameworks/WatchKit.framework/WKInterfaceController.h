/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceController : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contentFrame;
    NSArray *_properties;
    NSArray *_topLevelObjects;
    NSString *_viewControllerID;
}

@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentFrame;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic, retain) NSArray *topLevelObjects;
@property (nonatomic, retain) NSString *viewControllerID;

+ (void)_insertPageControllersAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3;
+ (void)_movePageControllerAtIndex:(int)arg1 toIndex:(int)arg2;
+ (void)_removePageControllersAtIndexes:(id)arg1;
+ (BOOL)openParentApplication:(id)arg1 reply:(id /* block */)arg2;
+ (void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })screenBounds;
+ (float)screenScale;

- (void).cxx_destruct;
- (void)addMenuItemWithImage:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)addMenuItemWithImageNamed:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)addMenuItemWithItemIcon:(int)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)animateWithDuration:(double)arg1 animations:(id /* block */)arg2;
- (void)awakeWithContext:(id)arg1;
- (void)becomeCurrentPage;
- (void)beginGlanceUpdates;
- (void)clearAllMenuItems;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrame;
- (id)contextForSegueWithIdentifier:(id)arg1;
- (id)contextForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(int)arg3;
- (id)contextsForSegueWithIdentifier:(id)arg1;
- (id)contextsForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(int)arg3;
- (void)didAppear;
- (void)didDeactivate;
- (void)dismissAddPassesController;
- (void)dismissAudioRecorderController;
- (void)dismissController;
- (void)dismissMediaPlayerController;
- (void)dismissTextInputController;
- (void)endGlanceUpdates;
- (void)handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2;
- (void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2;
- (void)handleUserActivity:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)invalidateUserActivity;
- (void)pickerDidFocus:(id)arg1;
- (void)pickerDidResignFocus:(id)arg1;
- (void)pickerDidSettle:(id)arg1;
- (void)popController;
- (void)popToRootController;
- (void)presentAddPassesControllerWithPasses:(id)arg1 completion:(id /* block */)arg2;
- (void)presentAudioRecorderControllerWithOutputURL:(id)arg1 preset:(int)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)presentControllerWithName:(id)arg1 context:(id)arg2;
- (void)presentControllerWithNames:(id)arg1 contexts:(id)arg2;
- (void)presentMediaPlayerControllerWithURL:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)presentTextInputControllerWithSuggestions:(id)arg1 allowedInputMode:(int)arg2 completion:(id /* block */)arg3;
- (void)presentTextInputControllerWithSuggestionsForLanguage:(id /* block */)arg1 allowedInputMode:(int)arg2 completion:(id /* block */)arg3;
- (id)properties;
- (void)pushControllerWithName:(id)arg1 context:(id)arg2;
- (void)setContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setProperties:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopLevelObjects:(id)arg1;
- (void)setViewControllerID:(id)arg1;
- (void)table:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (id)topLevelObjects;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3;
- (id)viewControllerID;
- (void)willActivate;
- (void)willDisappear;

@end
