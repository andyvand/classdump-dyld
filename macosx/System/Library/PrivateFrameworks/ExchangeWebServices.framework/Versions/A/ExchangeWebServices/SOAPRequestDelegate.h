/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SOAPRequestDelegate <NSObject>
@optional
-(void)request:(id)arg1 didReceiveCertificateError:(id)arg2;
-(char)requestShouldUseCredentialStorage:(id)arg1;
-(void)request:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(char)request:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)request:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)request:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
-(void)request:(id)arg1 didFinishWithResponse:(id)arg2;
-(void)request:(id)arg1 didFailWithError:(id)arg2;

@end

