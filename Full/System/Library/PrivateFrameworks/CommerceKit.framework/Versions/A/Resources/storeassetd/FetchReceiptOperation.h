/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>
#import <storeassetd/ISURLOperationDelegate.h>
#import <storeassetd/ISOperationDelegate.h>

@class NSString;

@interface FetchReceiptOperation : ISOperation <ISURLOperationDelegate, ISOperationDelegate> {

	NSString* _appPath;
	char _launchAppOnCompletion;
	char _suppressDialogs;
	char _forceSandbox;
	NSString* _appleID;
	NSString* _password;

}

@property (copy) NSString * appleID;                                //@synthesize appleID=_appleID - In the implementation block
@property (copy) NSString * password;                               //@synthesize password=_password - In the implementation block
@property (assign) char forceSandbox;                               //@synthesize forceSandbox=_forceSandbox - In the implementation block
@property (assign) char launchAppOnCompletion;                      //@synthesize launchAppOnCompletion=_launchAppOnCompletion - In the implementation block
@property (assign) char suppressDialogs;                            //@synthesize suppressDialogs=_suppressDialogs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchReceiptOperationWithAppPath:(id)arg1 storeClient:(id)arg2 ;
-(void)setSuppressDialogs:(char)arg1 ;
-(void)setLaunchAppOnCompletion:(char)arg1 ;
-(id)_requestBodyDataForReceipt:(id)arg1 ;
-(id)initWithAppPath:(id)arg1 storeClient:(id)arg2 ;
-(char)forceSandbox;
-(void)_displayUserNotificationAlertWithTitle:(id)arg1 ;
-(id)_operationWithURLBagType:(unsigned long long)arg1 receipt:(id)arg2 forceAuthentication:(char)arg3 ;
-(char)launchAppOnCompletion;
-(char)suppressDialogs;
-(void)setForceSandbox:(char)arg1 ;
-(NSString *)password;
-(NSString *)appleID;
-(void)run;
-(void)setPassword:(NSString *)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(char)showDialogInSeperateProcessForOperation:(id)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
@end
