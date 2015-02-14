/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLDownloadDelegate <NSObject>
@optional
-(void)download:(id)arg1 willResumeWithResponse:(id)arg2 fromByte:(long long)arg3;
-(void)downloadDidBegin:(id)arg1;
-(id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(char)download:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
-(char)downloadShouldUseCredentialStorage:(id)arg1;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
-(char)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
-(void)download:(id)arg1 didCreateDestination:(id)arg2;
-(void)downloadDidFinish:(id)arg1;
-(void)download:(id)arg1 didFailWithError:(id)arg2;

@end

