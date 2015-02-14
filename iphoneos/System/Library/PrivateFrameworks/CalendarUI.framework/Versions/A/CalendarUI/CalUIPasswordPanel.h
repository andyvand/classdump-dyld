/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalUIPasswordPanelDelegate.h>

@class CalManagedAccount, IAPasswordUIController, NSString;

@interface CalUIPasswordPanel : NSObject <CalUIPasswordPanelDelegate> {

	CalManagedAccount* _account;
	IAPasswordUIController* _controller;
	char _cancelled;

}

@property (nonatomic,readonly) IAPasswordUIController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finish;
-(void)authenticationFinishedForPassword:(id)arg1 error:(id)arg2 ;
-(void)didEnterPassword:(id)arg1 withResult:(long long)arg2 ;
-(void)performAuthenticationWithPassword:(id)arg1 ;
-(id)initWithAccount:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(IAPasswordUIController *)controller;
@end

