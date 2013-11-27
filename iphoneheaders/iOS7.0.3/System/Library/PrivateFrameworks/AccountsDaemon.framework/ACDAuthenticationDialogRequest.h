/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, ACAccount;

@interface ACDAuthenticationDialogRequest : NSObject {

	BOOL _confirmationRequired;
	NSURL* _url;
	ACAccount* _account;
	/*^block*/ id _completion;

}

@property (nonatomic,copy) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL confirmationRequired;              //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,retain) ACAccount * account;                    //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) id completion;                            //@synthesize completion=_completion - In the implementation block
-(/*^block*/ id)completion;
-(void)setCompletion:(/*^block*/ id)arg1 ;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(BOOL)confirmationRequired;
-(void)setConfirmationRequired:(BOOL)arg1 ;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void).cxx_destruct;
@end
