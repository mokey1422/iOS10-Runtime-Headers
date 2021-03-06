/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIResetPrefController : PSListController {
    int  _codesEntered;
    int  _codesNeeded;
    PSSpecifier * _currentSpecifier;
    PSSpecifier * _locationSpecifier;
    long long  _locationSpecifierIndex;
    NSString * _passcode;
    bool  _requirePasscode;
    bool  _requireRestrictionsCode;
    bool  _returningFromPINSheetWithSuccess;
    bool  _shouldEraseDataPlans;
    bool  _shouldEraseWithFMiP;
    bool  _shouldTryEraseAgainWithFMiP;
}

- (void).cxx_destruct;
- (void)_disablePhoneLocatorAndErase;
- (void)_eraseSettingsAndContent;
- (void)_resetWithMode:(int)arg1;
- (void)confirmEraseCellularSettings;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)dealloc;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didAppear;
- (void)eraseCellularSettings;
- (void)eraseSettings:(id)arg1;
- (void)eraseSettingsAndContent:(id)arg1;
- (id)init;
- (void)locatorStateDidChange:(id)arg1;
- (void)popupViewDidDisappear;
- (void)profileNotification:(id)arg1;
- (void)reprovisionAccount;
- (void)resetAKey;
- (void)resetIconPositions:(id)arg1;
- (void)resetKeyboardDictionary:(id)arg1;
- (void)resetNetworkSettings:(id)arg1;
- (void)resetPrivacyWarnings:(id)arg1;
- (id)specifiers;
- (void)subscriberOptions:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateLocationResetSpecifier;
- (void)viewDidAppear:(bool)arg1;

@end
