/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, MCQuotaUsage;

@interface IMAPQuotaRoot : NSObject {

	NSString* _name;
	MCQuotaUsage* _usage;

}

@property (copy) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (retain) MCQuotaUsage * usage;              //@synthesize usage=_usage - In the implementation block
-(MCQuotaUsage *)usage;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setUsageFromResponse:(id)arg1 ;
-(void)setUsage:(MCQuotaUsage *)arg1 ;
@end

