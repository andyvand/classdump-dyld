/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCMailbox <NSCopying,NSObject>
@required
-(id)URLString;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
-(id)userInfoObjectForKey:(id)arg1;
-(char)unseenCountIsKnown;
-(unsigned long long)unseenCount;
-(void)setUserInfoBool:(char)arg1 forKey:(id)arg2;
-(char)userInfoBoolForKey:(id)arg1;
-(id)extendedDisplayName;
-(id)displayName;

@end

