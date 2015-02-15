/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Archive Utility.app/Contents/MacOS/Archive Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ProgressViewProtocol
@required
-(void)setAlertMessageString:(id)arg1;
-(void)setAlertCancelButtonTitle:(id)arg1;
-(void)setAlertCancelEnabled:(char)arg1;
-(void)setAlertOKButtonTitle:(id)arg1;
-(void)setAlertOKEnabled:(char)arg1;
-(void)showAlertView;
-(void)setProgressPrimaryText:(id)arg1;
-(void)setProgressSecondaryText:(id)arg1;
-(void)setProgressCancelButtonTitle:(id)arg1;
-(void)setProgressCancelEnabled:(char)arg1;
-(void)setProgressSkipButtonTitle:(id)arg1;
-(void)setProgressSkipEnabled:(char)arg1;
-(void)setProgressIsDeterminate:(char)arg1;
-(void)showProgressView;
-(void)setProgressCancelPending:(char)arg1;
-(void)setProgressSkipPending:(char)arg1;
-(void)setAlertCancelPending:(char)arg1;
-(void)setAlertOKPending:(char)arg1;
-(id)progressSecondaryText;
-(id)progressTertiaryText;
-(void)setProgressTertiaryText:(id)arg1;
-(char)progressIsDeterminate;
-(void)setProgressPercentDone:(double)arg1;
-(void)showAlertViewWithSound:(char)arg1 withDockBounce:(char)arg2 withMakeKeyAndOrderFront:(char)arg3;
-(char)alertCancelEnabled;
-(char)alertOKEnabled;
-(void)setAlertSystemIcon:(unsigned)arg1;
-(char)progressCancelEnabled;
-(id)progressCancelButtonTitle;
-(char)progressSkipEnabled;
-(id)progressSkipButtonTitle;
-(id)progressPrimaryText;
-(id)progressMessageString;
-(void)setProgressMessageString:(id)arg1;
-(id)progressInformationText;
-(void)setProgressInformationText:(id)arg1;
-(double)progressPercentDone;
-(char)progressCancelPending;
-(char)progressSkipPending;
-(void)setAlertImage:(id)arg1;
-(id)alertCancelButtonTitle;
-(id)alertOKButtonTitle;
-(id)alertMessageString;
-(void)setAlertTitleString:(id)arg1;
-(char)alertCancelPending;
-(char)alertOKPending;
-(id)alertTitleString;

@end

