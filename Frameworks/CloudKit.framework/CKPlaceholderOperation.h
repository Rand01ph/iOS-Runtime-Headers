/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPlaceholderOperation : NSOperation {
    id _context;
    id /* block */ _daemonInvokeBlock;
    NSObject<OS_dispatch_group> *_group;
    BOOL _isExecuting;
    BOOL _isFinished;
    NSString *_operationID;
    NSString *_sectionID;
    NSDate *_startDate;
}

@property (nonatomic, retain) id context;
@property (nonatomic, readonly) id /* block */ daemonInvokeBlock;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)cancel;
- (id)context;
- (id /* block */)daemonInvokeBlock;
- (id)description;
- (id)initWithOperation:(id)arg1 daemonInvocationBlock:(id /* block */)arg2;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (id)operationID;
- (id)sectionID;
- (void)setContext:(id)arg1;
- (void)setIsExecuting:(BOOL)arg1;
- (void)setIsFinished:(BOOL)arg1;
- (void)setSectionID:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)start;
- (id)startDate;

@end