/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDCloudSource : CFPDContainerSource {
    struct __CFString { } *_configurationPath;
    SYDRemotePreferencesSource *cloudSource;
}

- (void)_writeToDisk:(BOOL)arg1;
- (struct __CFString { }*)cloudConfigurationPath;
- (id)copyConfigurationFromPath:(struct __CFString { }*)arg1;
- (id)copyPropertyList;
- (id)copyPropertyListWithoutDrainingPendingChanges;
- (struct __CFString { }*)debugDump;
- (void)enqueueNewKey:(struct __CFString { }*)arg1 value:(void*)arg2 size:(unsigned long)arg3;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 storeName:(id)arg3 configurationPath:(struct __CFString { }*)arg4 containerPath:(struct __CFString { }*)arg5 shmemIndex:(short)arg6;
- (void)registerForChangeNotifications;
- (void)synchronizeWithCloud:(id)arg1 replyHandler:(id /* block */)arg2;
- (int)validateMessage:(id)arg1 withNewKey:(struct __CFString { }*)arg2 newValue:(void*)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;

@end
