/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BookKit.framework/Versions/A/XPCServices/com.apple.BKAgentService.xpc/Contents/MacOS/com.apple.BKAgentService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKSecureUserDefaults <NSObject>
@required
-(void)ping:(/*^block*/id)arg1;
-(void)setExplicitContentRestricted:(char)arg1 authBlob:(id)arg2 uid:(id)arg3 completion:(/*^block*/id)arg4;
-(void)setStoreDisabled:(char)arg1 authBlob:(id)arg2 uid:(id)arg3 completion:(/*^block*/id)arg4;
-(void)getParentalControlValuesForUID:(id)arg1 completion:(/*^block*/id)arg2;

@end
