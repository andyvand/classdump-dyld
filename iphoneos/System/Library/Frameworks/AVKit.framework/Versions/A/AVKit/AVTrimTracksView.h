/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>

@class NSArray;

@interface AVTrimTracksView : NSView {

	NSArray* _trackViewControllers;

}

@property (nonatomic,copy) NSArray * trackViewControllers; 
-(void)setTrackViewControllers:(NSArray *)arg1 ;
-(NSArray *)trackViewControllers;
-(id)trackViews;
-(void)layoutTrackViews:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setBoundsOrigin:(CGPoint)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
@end

