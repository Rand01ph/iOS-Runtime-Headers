/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueryURLRequest : CKDURLRequest {
    NSData *_cursor;
    unsigned int _limit;
    CKQuery *_query;
    NSMutableArray *_queryResponses;
    id /* block */ _recordResponseBlock;
    NSArray *_requestedFields;
    NSData *_resultsCursor;
    BOOL _shouldFetchAssetContent;
    CKRecordZoneID *_zoneID;
}

@property (nonatomic, retain) NSData *cursor;
@property (nonatomic) unsigned int limit;
@property (nonatomic, retain) CKQuery *query;
@property (nonatomic, retain) NSMutableArray *queryResponses;
@property (nonatomic, copy) id /* block */ recordResponseBlock;
@property (nonatomic, retain) NSArray *requestedFields;
@property (nonatomic, retain) NSData *resultsCursor;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (BOOL)allowsAnonymousAccount;
- (id)cursor;
- (id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned int)arg3 requestedFields:(id)arg4 zoneID:(id)arg5;
- (unsigned int)limit;
- (int)operationType;
- (id)query;
- (id)queryResponses;
- (id /* block */)recordResponseBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)requestedFields;
- (id)resultsCursor;
- (void)setCursor:(id)arg1;
- (void)setLimit:(unsigned int)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryResponses:(id)arg1;
- (void)setRecordResponseBlock:(id /* block */)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setResultsCursor:(id)arg1;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (void)setZoneID:(id)arg1;
- (BOOL)shouldFetchAssetContent;
- (id)zoneID;
- (id)zoneIDsToLock;

@end
