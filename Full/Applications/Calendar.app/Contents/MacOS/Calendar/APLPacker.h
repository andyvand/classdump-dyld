/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Calendar/Calendar-Structs.h>
@class NSString, NSMutableArray;

@interface APLPacker : NSObject {

	NSString* name;
	NSMutableArray* constraints;

}
-(char)resolveFromElement:(id)arg1 ;
-(id)prepackElements:(id)arg1 withQuality:(long long)arg2 ;
-(CGRect)decreasedFrameFromFrame:(CGRect)arg1 withElements:(id)arg2 ;
-(id)packElements:(id)arg1 inFrame:(CGRect)arg2 withQuality:(long long)arg3 ;
-(CGRect)increasedFrameFromFrame:(CGRect)arg1 withElements:(id)arg2 ;
-(void)removeAllConstraints;
-(id)description;
-(id)name;
-(void)addConstraint:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

