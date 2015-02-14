/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseNotificationEventType.h>

@class NSDateComponents, EWSFolderIdType;

@interface EWSBaseObjectChangedEventType : EWSBaseNotificationEventType {

	NSDateComponents* _TimeStamp;
	id _ItemOrFolderId;
	EWSFolderIdType* _ParentFolderId;

}

@property (nonatomic,retain) NSDateComponents * TimeStamp;                  //@synthesize TimeStamp=_TimeStamp - In the implementation block
@property (nonatomic,retain) id ItemOrFolderId;                             //@synthesize ItemOrFolderId=_ItemOrFolderId - In the implementation block
@property (nonatomic,retain) EWSFolderIdType * ParentFolderId;              //@synthesize ParentFolderId=_ParentFolderId - In the implementation block
+(id)definition;
-(NSDateComponents *)TimeStamp;
-(id)ItemOrFolderId;
-(void)setItemOrFolderId:(id)arg1 ;
-(void)dealloc;
-(EWSFolderIdType *)ParentFolderId;
-(void)setParentFolderId:(EWSFolderIdType *)arg1 ;
-(void)setTimeStamp:(NSDateComponents *)arg1 ;
@end

