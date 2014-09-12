/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSURL, NSString;

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding> {
    bool_supportsDPANNotifications;
    bool_supportsFPANNotifications;
    NSURL *_transactionServiceURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSString *_appURLScheme;
}

@property(copy) NSURL * transactionServiceURL;
@property(copy) NSString * transactionPushTopic;
@property(copy) NSURL * messageServiceURL;
@property(copy) NSString * messagePushTopic;
@property(copy) NSString * appURLScheme;
@property bool supportsDPANNotifications;
@property bool supportsFPANNotifications;

+ (bool)supportsSecureCoding;

- (void)setSupportsFPANNotifications:(bool)arg1;
- (void)setSupportsDPANNotifications:(bool)arg1;
- (void)setAppURLScheme:(id)arg1;
- (void)setMessagePushTopic:(id)arg1;
- (void)setMessageServiceURL:(id)arg1;
- (void)setTransactionPushTopic:(id)arg1;
- (void)setTransactionServiceURL:(id)arg1;
- (bool)supportsFPANNotifications;
- (bool)supportsDPANNotifications;
- (id)appURLScheme;
- (id)messagePushTopic;
- (id)messageServiceURL;
- (id)transactionPushTopic;
- (id)transactionServiceURL;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end