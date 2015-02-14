/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSCopying.h>
#import <UIFoundation/NSCoding.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding> {

	struct {
		unsigned alignment : 4;
		unsigned refCount : 24;
		unsigned unused : 4;
		unsigned  : 32;
	}  _flags;
	double _location;
	id _reserved;

}

@property (readonly) unsigned long long alignment; 
@property (copy,readonly) NSDictionary * options; 
@property (readonly) double location; 
@property (readonly) unsigned long long tabStopType; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)columnTerminatorsForLocale:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(unsigned long long)alignment;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)initWithType:(unsigned long long)arg1 location:(double)arg2 ;
-(double)location;
-(unsigned long long)tabStopType;
-(id)initWithTextAlignment:(unsigned long long)arg1 location:(double)arg2 options:(id)arg3 ;
@end

