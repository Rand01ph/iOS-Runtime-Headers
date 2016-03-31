/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSPersistentDictionary : NSObject {
    HDSQLiteHealthDatabase *_database;
    NSURL *_databaseURL;
    Class _objectClass;
}

- (void).cxx_destruct;
- (BOOL)_createSchemaWithError:(id*)arg1;
- (id)_dataFromObject:(id)arg1;
- (void)_handleError:(id)arg1 format:(id)arg2;
- (id)_objectFromData:(id)arg1;
- (BOOL)_openDB;
- (BOOL)_reallyOpenDB;
- (void)_recordMappingOfRequest:(id)arg1 toResponse:(id)arg2;
- (void)_recordMessage:(id)arg1 deviceID:(id)arg2 type:(int)arg3 outgoing:(BOOL)arg4 request:(BOOL)arg5 length:(long long)arg6;
- (void)didCancel:(id)arg1;
- (void)didFinishSending:(id)arg1;
- (void)didReceiveError:(id)arg1 forMessageID:(id)arg2;
- (void)didReceiveRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4;
- (void)didReceiveResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5;
- (void)didSendRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4;
- (void)didSendResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5;
- (void)enumerateObjectsSortedByExpirationDate:(id /* block */)arg1;
- (id)initWithURL:(id)arg1 objectClass:(Class)arg2;
- (id)messageIDsForPendingOutgoingMessagesWithType:(int)arg1 deviceID:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(double)arg3;

@end
