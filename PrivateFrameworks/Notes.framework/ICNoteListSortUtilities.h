/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICNoteListSortUtilities : NSObject

+ (int)currentNoteListSortType;
+ (id)descriptionForNoteListSortType:(int)arg1;
+ (BOOL)isMenuItemCurrentSortTypeForTag:(int)arg1;
+ (void)setCurrentNoteListSortType:(int)arg1;
+ (void)setCurrentNoteListSortTypeByTag:(int)arg1;
+ (id)sortDescriptorsForCurrentType;
+ (id)sortDescriptorsForICSearchResultsForCurrentType;
+ (id)sortDescriptorsForICSearchResultsForType:(int)arg1;
+ (id)sortDescriptorsForType:(int)arg1;
+ (int)sortTypeForTag:(int)arg1;

@end
