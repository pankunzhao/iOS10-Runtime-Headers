/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStyleMediaQuery : NSObject {
    NSDictionary *_featureValues;
    BOOL _isNegated;
    NSString *_mediaType;
}

@property (nonatomic, readonly, retain) NSDictionary *featureValues;
@property (nonatomic, readonly) BOOL isNegated;
@property (nonatomic, readonly, retain) NSString *mediaType;

+ (id)mediaQueryListWithQueryString:(id)arg1;

- (void).cxx_destruct;
- (id)featureValues;
- (id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(BOOL)arg3;
- (BOOL)isNegated;
- (id)mediaType;

@end