/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrintingPrivate/PrintingPrivate-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface PMInkBarView : NSView {

	NSColor* color;
	float level;
	float threshhold;

}
-(id)initWithFrame:(CGRect)arg1 color:(id)arg2 level:(float)arg3 low:(float)arg4 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
@end

