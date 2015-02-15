/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDMescalSession;

@interface CKDMescalSessionOperation : CKDDatabaseOperation {

	int _serverVersion;
	CKDMescalSession* _mescalSession;

}

@property (assign,nonatomic) int serverVersion;                             //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,retain) CKDMescalSession * mescalSession;              //@synthesize mescalSession=_mescalSession - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setMescalSession:(CKDMescalSession *)arg1 ;
-(char)shouldCheckAppVersion;
-(id)flowControlKey;
-(void)_handleCertRequestFinished:(id)arg1 ;
-(void)_handleSessionRequestFinished:(id)arg1 ;
-(void)_handleDataExchanged:(id)arg1 withError:(id)arg2 ;
-(void)_exchangeDataAndSendRequest:(id)arg1 ;
-(char)requiresTokenRegistration;
-(char)allowsAnonymousAccount;
-(CKDMescalSession *)mescalSession;
-(void)setServerVersion:(int)arg1 ;
-(void)main;
-(int)serverVersion;
@end
