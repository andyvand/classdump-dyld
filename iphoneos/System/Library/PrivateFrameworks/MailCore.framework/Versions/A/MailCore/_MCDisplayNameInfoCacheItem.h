/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MCDisplayNameInfo, NSString;

@interface _MCDisplayNameInfoCacheItem : NSObject {

	MCDisplayNameInfo* _info;
	NSString* _rawAddress;

}

@property (nonatomic,readonly) MCDisplayNameInfo * info;                //@synthesize info=_info - In the implementation block
@property (nonatomic,copy,readonly) NSString * rawAddress;              //@synthesize rawAddress=_rawAddress - In the implementation block
-(MCDisplayNameInfo *)info;
-(id)initWithInfo:(id)arg1 address:(id)arg2 ;
-(NSString *)rawAddress;
-(id)init;
@end

