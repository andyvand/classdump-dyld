/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, MFIMAPAccount;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject {

	NSArray* _urls;
	NSArray* _paths;
	MFIMAPAccount* _account;

}

@property (nonatomic,retain) NSArray * urls;                       //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) NSArray * paths;                      //@synthesize paths=_paths - In the implementation block
@property (nonatomic,retain) MFIMAPAccount * account;              //@synthesize account=_account - In the implementation block
-(void)setUrls:(NSArray *)arg1 ;
-(NSArray *)paths;
-(void)setPaths:(NSArray *)arg1 ;
-(NSArray *)urls;
-(MFIMAPAccount *)account;
-(void)setAccount:(MFIMAPAccount *)arg1 ;
@end

