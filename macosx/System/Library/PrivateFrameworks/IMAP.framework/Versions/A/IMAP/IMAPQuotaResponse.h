/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPResponse.h>

@class NSString, NSArray;

@interface IMAPQuotaResponse : IMAPResponse {

	NSString* _quotaRootName;
	NSArray* _quotas;

}

@property (nonatomic,copy) NSString * quotaRootName;              //@synthesize quotaRootName=_quotaRootName - In the implementation block
@property (nonatomic,copy) NSArray * quotas;                      //@synthesize quotas=_quotas - In the implementation block
+(char)handlesResponseWithName:(const char*)arg1 ofLength:(unsigned long long)arg2 ;
-(id)description;
-(NSString *)quotaRootName;
-(void)setQuotaRootName:(NSString *)arg1 ;
-(void)setQuotas:(NSArray *)arg1 ;
-(NSArray *)quotas;
@end
