/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BBBulletin;

@interface AFBulletin : NSObject {

	char _read;
	BBBulletin* _bulletin;

}

@property (assign,getter=isRead,nonatomic) char read;              //@synthesize read=_read - In the implementation block
@property (nonatomic,retain) BBBulletin * bulletin;                //@synthesize bulletin=_bulletin - In the implementation block
-(void)setRead:(char)arg1 ;
-(char)isRead;
-(BBBulletin *)bulletin;
-(void)setBulletin:(BBBulletin *)arg1 ;
-(id)dictionaryRepresentation;
@end

