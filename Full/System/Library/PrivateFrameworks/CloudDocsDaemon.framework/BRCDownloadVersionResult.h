/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKRecord, NSNumber, BRCVersion;

@interface BRCDownloadVersionResult : NSObject {

	CKRecord* record;
	NSNumber* stageID;
	BRCVersion* version;

}

@property (nonatomic,retain) CKRecord * record; 
@property (nonatomic,retain) NSNumber * stageID; 
@property (nonatomic,retain) BRCVersion * version; 
-(NSNumber *)stageID;
-(void)setStageID:(NSNumber *)arg1 ;
-(void)setRecord:(CKRecord *)arg1 ;
-(void)setVersion:(BRCVersion *)arg1 ;
-(BRCVersion *)version;
-(CKRecord *)record;
@end

