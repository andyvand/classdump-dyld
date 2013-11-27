/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface AAUIAlertView : UIAlertView {

	NSObject<OS_dispatch_semaphore>* _buttonChosenSemaphore;
	int _chosenButtonIndex;
	/*^block*/ id _action;
	/*^block*/ id _actionWithText;

}
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 action:(/*^block*/ id)arg4 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 action:(/*^block*/ id)arg5 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 action:(/*^block*/ id)arg6 ;
-(int)chosenButtonIndex;
-(void).cxx_destruct;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
@end
