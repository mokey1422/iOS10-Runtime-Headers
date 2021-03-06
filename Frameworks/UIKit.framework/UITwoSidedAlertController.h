/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITwoSidedAlertController : NSObject <CAAnimationDelegate, UIAlertViewDelegate> {
    UIAlertView * _back;
    UIAlertView * _currentAlert;
    id  _delegate;
    UIAlertView * _front;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)backAlert;
- (void)backAlertClickedButtonAtIndex:(long long)arg1;
- (id)createBackAlert;
- (id)createFrontAlert;
- (void)dealloc;
- (void)didPresentAlertView:(id)arg1;
- (void)dismiss;
- (void)flip;
- (id)frontAlert;
- (void)frontAlertClickedButtonAtIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)show;

@end
