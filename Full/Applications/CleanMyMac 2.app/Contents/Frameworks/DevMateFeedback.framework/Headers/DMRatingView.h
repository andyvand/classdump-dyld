/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateFeedback.framework/DevMateFeedback
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DevMateFeedback/DevMateFeedback-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface DMRatingView : NSView {

	long long _rating;
	NSImage* _normalImage;
	NSImage* _activeImage;

}

@property (assign,nonatomic) long long rating;                   //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) NSImage * normalImage;              //@synthesize normalImage=_normalImage - In the implementation block
@property (nonatomic,retain) NSImage * activeImage;              //@synthesize activeImage=_activeImage - In the implementation block
-(void)setNormalImage:(NSImage *)arg1 ;
-(void)setActiveImage:(NSImage *)arg1 ;
-(NSImage *)activeImage;
-(CGRect)rectForStarAtIndex:(long long)arg1 ;
-(void)calculateRatingFromPoint:(CGPoint)arg1 ;
-(long long)rating;
-(NSImage *)normalImage;
-(void)setRating:(long long)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)imageSize;
-(char)mouseDownCanMoveWindow;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
@end

