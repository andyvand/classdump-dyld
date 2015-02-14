/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPSingleClientOperation.h>

@class NSString;

@interface IMAPClientGetQuotaOperation : IMAPSingleClientOperation {

	NSString* _quotaRoot;

}

@property (nonatomic,copy,readonly) NSString * quotaRoot;              //@synthesize quotaRoot=_quotaRoot - In the implementation block
-(id)activityString;
-(id)init;
-(id)commandTypeString;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(char)shouldSendAgainOnError;
-(id)initWithQuotaRoot:(id)arg1 ;
-(NSString *)quotaRoot;
@end

