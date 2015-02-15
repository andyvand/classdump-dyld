/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBasePermissionType.h>

@interface EWSCalendarPermissionType : EWSBasePermissionType {

	int _ReadItems;
	int _CalendarPermissionLevel;

}

@property (assign,nonatomic) int ReadItems;                            //@synthesize ReadItems=_ReadItems - In the implementation block
@property (assign,nonatomic) int CalendarPermissionLevel;              //@synthesize CalendarPermissionLevel=_CalendarPermissionLevel - In the implementation block
+(id)definition;
-(int)CalendarPermissionLevel;
-(id)description;
-(int)ReadItems;
-(void)setReadItems:(int)arg1 ;
-(void)setCalendarPermissionLevel:(int)arg1 ;
@end

