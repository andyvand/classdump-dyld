/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABApplicationServices.h>

@class NSString;

@interface ABInAppApplicationServices : NSObject <ABApplicationServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showMCCConfigForAccountID:(id)arg1 ;
-(void)showContactWithUniqueId:(id)arg1 shouldUnify:(char)arg2 ;
-(id)appDelegate;
-(void)showPasswordPanelModalForWindow:(id)arg1 withSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)displayGoogleWebLoginAlertWithWebLoginURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

