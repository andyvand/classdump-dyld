/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCRemoteStoreAccount <MCMailAccount>
@required
-(long long)cachePolicy;
-(void)presentOverQuotaAlert;
-(void)setCachePolicy:(long long)arg1 permanently:(char)arg2;
-(char)shouldCacheAttachmentsForMessageWithDateReceived:(id)arg1;

@end

