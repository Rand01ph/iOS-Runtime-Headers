/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaSocialAdminPermissionsCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_lastKnownAuthors;
    NSDate *_lastRequestDate;
    NSMutableArray *_resultBlocks;
}

@property (readonly, copy) NSNumber *lastKnownAdminStatus;
@property (readonly, copy) NSArray *lastKnownAuthors;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (void)_authenticateOnCompletion:(id /* block */)arg1;
- (void)_fireResultsBlocksWithAuthors:(id)arg1 error:(id)arg2;
- (void)_getAuthors;
- (void)_handleOperationResponseWithAuthors:(id)arg1 error:(id)arg2;
- (void)_queueResultBlock:(id /* block */)arg1;
- (void)getAdminStatusWithOptions:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)getAuthorsAndWaitWithOptions:(id)arg1 authorsBlock:(id /* block */)arg2;
- (void)getAuthorsWithOptions:(id)arg1 authorsBlock:(id /* block */)arg2;
- (id)init;
- (id)lastKnownAdminStatus;
- (id)lastKnownAuthors;
- (void)reset;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)constructLastKnownCuratorsByID;

@end
