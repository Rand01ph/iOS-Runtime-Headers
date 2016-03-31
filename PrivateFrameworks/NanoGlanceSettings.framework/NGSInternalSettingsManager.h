/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
 */

@interface NGSInternalSettingsManager : NSObject {
    NSArray *_blacklistedWatchKitIDs;
    NSMutableArray *_glanceDefinitions;
    BOOL _hasSettings;
    NSMutableDictionary *_installStatesByGlanceID;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_selectedGlanceIdentifier;
    NSArray *_storedSettings;
    NPSManager *_syncManager;
}

@property (nonatomic, readonly) unsigned int glanceCount;
@property (nonatomic, readonly) BOOL hasSettings;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSString *selectedGlanceIdentifier;

- (void).cxx_destruct;
- (unsigned int)_glanceCount;
- (BOOL)_hasSettings;
- (void)_loadBlacklistedWatchKitIDs;
- (void)_mergeAdditionalGlanceDefinitionsIntoArray:(id)arg1;
- (unsigned int)_numberOfActiveGlances;
- (void)_saveSettings;
- (void)_saveSettings:(id)arg1;
- (BOOL)_shouldMergeGlanceDefinitions;
- (BOOL)_shouldSaveGlanceDefinitions;
- (BOOL)_shouldSortGlanceDefinitions;
- (void)_sortGlanceDefinitions;
- (void)_sortGlanceDefinitions:(id)arg1;
- (id)_storedSettingsRepresentationFromGlanceDefinitions:(id)arg1;
- (void)_willSaveGlanceDefinitions;
- (void)addGlanceDefinition:(id)arg1;
- (void)didLoadGlanceDefinitions;
- (void)enumerateAllGlanceDefinitionsUsingBlock:(id /* block */)arg1;
- (void)enumerateGlanceDefinitionsUsingBlock:(id /* block */)arg1;
- (unsigned int)glanceCount;
- (id)glanceDefinitionForAppBundleIdentifier:(id)arg1;
- (id)glanceDefinitionForGlanceIdentifier:(id)arg1;
- (id)glanceDefinitionForWatchKitIdentifier:(id)arg1;
- (id)glanceDefinitions;
- (id)glanceIdentifierForGlanceDefinitionAtIndex:(unsigned int)arg1;
- (BOOL)hasMaximumNumberOfActiveGlances;
- (BOOL)hasSettings;
- (id)init;
- (void)invalidateAndReloadSettings;
- (BOOL)isWatchKitBundleIDBlacklisted:(id)arg1;
- (void)loadSettings;
- (void)moveGlanceDefinitionFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)queue;
- (void)removeGlanceDefinitionsInArray:(id)arg1;
- (void)saveSettings;
- (id)selectedGlanceIdentifier;
- (void)setSelectedGlanceIdentifier:(id)arg1;
- (void)sortGlanceDefinitions;
- (void)willSaveGlanceDefinitions;

@end
