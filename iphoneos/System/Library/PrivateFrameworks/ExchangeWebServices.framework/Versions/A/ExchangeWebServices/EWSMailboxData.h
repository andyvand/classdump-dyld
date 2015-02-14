/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSEmailAddress;

@interface EWSMailboxData : NSObject {

	EWSEmailAddress* _Email;
	int _AttendeeType;
	char _ExcludeConflicts;

}

@property (nonatomic,retain) EWSEmailAddress * Email;              //@synthesize Email=_Email - In the implementation block
@property (assign,nonatomic) int AttendeeType;                     //@synthesize AttendeeType=_AttendeeType - In the implementation block
@property (assign,nonatomic) char ExcludeConflicts;                //@synthesize ExcludeConflicts=_ExcludeConflicts - In the implementation block
+(id)definition;
-(EWSEmailAddress *)Email;
-(int)AttendeeType;
-(char)ExcludeConflicts;
-(void)setExcludeConflicts:(char)arg1 ;
-(void)dealloc;
-(void)setEmail:(EWSEmailAddress *)arg1 ;
-(void)setAttendeeType:(int)arg1 ;
@end

