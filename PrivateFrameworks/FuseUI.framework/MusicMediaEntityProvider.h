/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaEntityProvider : NSObject <MusicEntityProviding, NSCoding> {
    NSArray *_localizedSectionIndexTitles;
    int _maximumItemCount;
    MusicMediaQueryDataSource *_mediaQueryDataSource;
    NSSet *_requiredVisibilityPrioritySectionIndexTitles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int maximumItemCount;
@property (nonatomic, retain) MPMediaQuery *mediaQuery;
@property (nonatomic, readonly) MusicMediaQueryDataSource *mediaQueryDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int totalEntityCount;

- (void).cxx_destruct;
- (void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned int)arg2;
- (void)_dataSourceWasInvalidated:(id)arg1;
- (void)_handleMediaQueryDataSourceDidInvalidate;
- (void)_loadSectionIndexTitleDataIfNeeded;
- (id)_localizedSectionIndexTitles;
- (id)_requiredVisibilityPrioritySectionIndexTitles;
- (id)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(id)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned int)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)handleDeleteChangeRecord:(id)arg1;
- (BOOL)hasEntities;
- (BOOL)hasEntitiesNotInLibrary;
- (BOOL)hasExplicitContent;
- (BOOL)hasMultipleEntitiesIncludingStoreContent;
- (id)indexBarEntryAtIndex:(unsigned int)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaQuery:(id)arg1;
- (id)initWithMediaQueryDataSource:(id)arg1;
- (int)maximumItemCount;
- (id)mediaQuery;
- (id)mediaQueryDataSource;
- (id)newDownloadInformationController;
- (unsigned int)numberOfEntitiesInSection:(unsigned int)arg1;
- (unsigned int)numberOfIndexBarEntries;
- (unsigned int)numberOfSections;
- (unsigned int)sectionForSectionIndexBarEntryAtIndex:(unsigned int)arg1;
- (BOOL)setEditing:(BOOL)arg1;
- (void)setMaximumItemCount:(int)arg1;
- (void)setMediaQuery:(id)arg1;
- (unsigned int)totalEntityCount;

@end
