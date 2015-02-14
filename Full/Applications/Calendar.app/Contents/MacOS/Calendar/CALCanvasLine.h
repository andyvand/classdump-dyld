/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/CALCanvasItem.h>

@interface CALCanvasLine : CALCanvasItem {

	CGPoint _start;
	CGPoint _end;
	double _phase;
	double* _dashes;
	char _dashesEndOnFullDash;
	int _count;

}
+(id)lineStartingAt:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(void)drawInOpenGL;
-(void)updateBezierRepresentation;
-(id)initWithTagID:(id)arg1 position:(CGPoint)arg2 delegate:(id)arg3 shown:(char)arg4 selectable:(char)arg5 start:(CGPoint)arg6 end:(CGPoint)arg7 userData:(id)arg8 ;
-(void)setDashes:(double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(char)dashesEndOnFullDash;
-(void)setDashesEndOnFullDash:(char)arg1 ;
-(id)updateSize;
-(id)initWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(void)setStart:(CGPoint)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(CGPoint)start;
-(void)draw;
-(CGPoint)end;
-(void)setEnd:(CGPoint)arg1 ;
@end

