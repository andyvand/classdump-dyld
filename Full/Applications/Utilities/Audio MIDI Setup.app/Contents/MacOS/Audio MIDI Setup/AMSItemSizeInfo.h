/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:43:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Audio MIDI Setup.app/Contents/MacOS/Audio MIDI Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Audio MIDI Setup/Audio MIDI Setup-Structs.h>
#import <Audio MIDI Setup/NSCopying.h>

@interface AMSItemSizeInfo : NSObject <NSCopying> {

	double maxSize;
	double minSize;
	double contentSize;
	double value;

}

@property (readonly) double maxSize; 
@property (readonly) double minSize; 
@property (readonly) double contentSize; 
@property (assign) double value; 
@property (readonly) char canShrink; 
@property (readonly) char canGrow; 
-(id)initWithMax:(double)arg1 min:(double)arg2 content:(double)arg3 ;
-(char)canShrink;
-(double)minDifference;
-(double)maxDifference;
-(double)currDifference;
-(char)canGrow;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)contentSize;
-(double)maxSize;
-(void)setValue:(double)arg1 ;
-(double)minSize;
-(double)value;
@end
