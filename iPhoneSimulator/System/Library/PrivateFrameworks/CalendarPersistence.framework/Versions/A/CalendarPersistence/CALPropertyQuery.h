/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/NSCopying.h>

@class NSString;

@interface CALPropertyQuery : NSObject <NSCopying> {

	NSString* _propertyName;
	int _op;
	id _value;

}
+(id)propertyQueryWithPropertyName:(id)arg1 operator:(int)arg2 value:(id)arg3 ;
-(id)propertyName;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(char)matchesEntity:(id)arg1 ;
-(id)initWithPropertyName:(id)arg1 operator:(int)arg2 value:(id)arg3 ;
-(char)stringMatches:(id)arg1 ;
-(char)dateMatches:(id)arg1 ;
-(int)operator;
-(char)matchesOccurrence:(id)arg1 ;
@end

