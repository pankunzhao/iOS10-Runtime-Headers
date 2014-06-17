/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptorInternal;

@interface AVAssetWriterInputMetadataAdaptor : NSObject  {
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}

@property(readonly) AVAssetWriterInput * assetWriterInput;

+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1;
+ (void)initialize;

- (bool)appendTimedMetadataGroup:(id)arg1;
- (id)assetWriterInput;
- (id)initWithAssetWriterInput:(id)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)description;

@end