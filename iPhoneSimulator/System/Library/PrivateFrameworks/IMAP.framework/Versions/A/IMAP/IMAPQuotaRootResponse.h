/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPResponse.h>

@class NSString, NSArray;

@interface IMAPQuotaRootResponse : IMAPResponse {

	NSString* _mailboxName;
	NSArray* _quotaRootNames;

}

@property (nonatomic,copy) NSString * mailboxName;                //@synthesize mailboxName=_mailboxName - In the implementation block
@property (nonatomic,copy) NSArray * quotaRootNames;              //@synthesize quotaRootNames=_quotaRootNames - In the implementation block
+(char)handlesResponseWithName:(const char*)arg1 ofLength:(unsigned long long)arg2 ;
-(NSString *)mailboxName;
-(void)setMailboxName:(NSString *)arg1 ;
-(id)description;
-(NSArray *)quotaRootNames;
-(void)setQuotaRootNames:(NSArray *)arg1 ;
@end

