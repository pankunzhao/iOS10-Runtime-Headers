/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUISortDataRequestDelegate>, NSURL;

@interface SKUISortDataRequest : SKUIResourceRequest <NSCopying> {
    <SKUISortDataRequestDelegate> *_delegate;
    NSURL *_sortURL;
}

@property(readonly) NSURL * sortURL;
@property <SKUISortDataRequestDelegate> * delegate;


- (id)sortURL;
- (id)initWithSortURL:(id)arg1;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;

@end