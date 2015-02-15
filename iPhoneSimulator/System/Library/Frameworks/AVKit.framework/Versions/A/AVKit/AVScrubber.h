/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSSlider.h>

@class NSArray;

@interface AVScrubber : NSSlider {

	NSArray* _loadedTimeRanges;

}

@property (nonatomic,retain) NSArray * loadedTimeRanges; 
+(void)initialize;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(NSArray *)loadedTimeRanges;
-(CGSize)intrinsicContentSize;
-(char)allowsVibrancy;
-(NSEdgeInsets)alignmentRectInsets;
-(double)baselineOffsetFromBottom;
@end

