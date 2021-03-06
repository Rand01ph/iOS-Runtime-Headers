/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUCreditCardCaptureViewController : UINavigationController <CRCameraReaderDelegate> {
    CRCameraReader *_reader;
    WBSCreditCardData *_receivedCardData;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBUCreditCardCaptureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)canCapture;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (id)init;
- (void)viewDidAppear:(BOOL)arg1;

@end
