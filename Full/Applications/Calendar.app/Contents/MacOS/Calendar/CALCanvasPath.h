/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/CALCanvasItem.h>

@interface CALCanvasPath : CALCanvasItem
+(id)pathWithBezier:(id)arg1 ;
-(void)drawInOpenGL;
-(void)updateBezierRepresentation;
-(id)initWithBezier:(id)arg1 ;
-(id)initWithTagID:(id)arg1 position:(CGPoint)arg2 delegate:(id)arg3 shown:(char)arg4 selectable:(char)arg5 path:(id)arg6 userData:(id)arg7 ;
-(void)drawShadow;
-(CGRect)bounds;
-(id)path;
-(void)draw;
-(void)setPath:(id)arg1 ;
@end

