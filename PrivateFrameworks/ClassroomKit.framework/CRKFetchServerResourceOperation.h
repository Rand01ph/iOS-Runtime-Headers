/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchServerResourceOperation : CATOperation <NSURLSessionDataDelegate> {
    NSURLCredential *_credential;
    NSURLSessionDataTask *_dataTask;
    NSURL *_resourceURL;
    NSURLSession *_session;
    double _timeoutInterval;
}

@property (nonatomic, retain) NSURLCredential *credential;
@property (nonatomic, retain) NSURLSessionDataTask *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSURL *resourceURL;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;
@property (nonatomic) double timeoutInterval;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancel;
- (id)credential;
- (id)dataTask;
- (id)initWithURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 certificates:(id)arg3 timeoutInterval:(double)arg4;
- (BOOL)isAsynchronous;
- (void)main;
- (id)resourceURL;
- (id)session;
- (void)setCredential:(id)arg1;
- (void)setDataTask:(id)arg1;
- (void)setResourceURL:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)startTask;
- (double)timeoutInterval;

@end
