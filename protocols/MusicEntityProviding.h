/* Generated by RuntimeBrowser.
 */

@protocol MusicEntityProviding <SKUIEntityProviding>

@required

- (void)configureEntityValueContextOutput:(MusicEntityValueContext *)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(MusicEntityValueContext *)arg1;
- (void)configureSectionEntityValueContextOutput:(MusicSectionEntityValueContext *)arg1 forIndex:(unsigned int)arg2;
- (<IKEntityValueProviding> *)entityValueProviderAtIndexPath:(NSIndexPath *)arg1;
- (BOOL)hasEntities;
- (SKUIIndexBarEntry *)indexBarEntryAtIndex:(unsigned int)arg1;
- (NSIndexPath *)indexPathForEntityValueContext:(MusicEntityValueContext *)arg1;
- (unsigned int)numberOfEntitiesInSection:(unsigned int)arg1;
- (unsigned int)numberOfIndexBarEntries;
- (unsigned int)numberOfSections;
- (unsigned int)sectionForSectionIndexBarEntryAtIndex:(unsigned int)arg1;

@optional

- (NSSet *)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(MusicEntityValueContext *)arg1;
- (BOOL)hasEntitiesNotInLibrary;
- (BOOL)hasExplicitContent;
- (BOOL)hasMultipleEntitiesIncludingStoreContent;
- (MusicEntityProviderDownloadInformationController *)newDownloadInformationController;
- (BOOL)setEditing:(BOOL)arg1;

@end
