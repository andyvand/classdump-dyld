/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <AppKit/NSView.h>

@protocol NSCopying;
@interface CalUIDayLayerGridlineView : NSView {

	int _backgroundColor;
	unsigned long long _workStartHour;
	unsigned long long _workEndHour;
	id<NSCopying> _oldKey;
	long long _height;

}

@property (assign,nonatomic) int backgroundColor;                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long workStartHour;              //@synthesize workStartHour=_workStartHour - In the implementation block
@property (assign,nonatomic) unsigned long long workEndHour;                //@synthesize workEndHour=_workEndHour - In the implementation block
@property (retain) id<NSCopying> oldKey;                                    //@synthesize oldKey=_oldKey - In the implementation block
@property (assign) long long height;                                        //@synthesize height=_height - In the implementation block
+(CGColorRef)gridlineColor;
+(void)initialize;
-(id<NSCopying>)oldKey;
-(void)setOldKey:(id<NSCopying>)arg1 ;
-(void)_doneWithOldColor;
-(unsigned long long)workStartHour;
-(unsigned long long)workEndHour;
-(void)setWorkStartHour:(unsigned long long)arg1 ;
-(void)setWorkEndHour:(unsigned long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(id)colorKey;
-(void)setBackgroundColor:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateLayer;
-(char)wantsUpdateLayer;
-(char)isOpaque;
-(int)backgroundColor;
-(CGColorRef)_backgroundColor;
-(char)acceptsFirstResponder;
-(char)acceptsFirstMouse:(id)arg1 ;
-(long long)height;
@end
