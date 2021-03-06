/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAccessoryDetailsController : PSListController <EAAccessoryDelegate> {
    EAAccessory * _accessory;
    bool  _finishedAppearing;
    bool  _shouldEscape;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessoryDidUpdate:(id)arg1;
- (void)accessoryDidDisconnect:(id)arg1;
- (id)bonjourName;
- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (void)findAppForAccessory;
- (id)firmwareRevision;
- (id)hardwareRevision;
- (id)init;
- (id)manufacturer;
- (id)modelNumber;
- (id)serialNumber;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
