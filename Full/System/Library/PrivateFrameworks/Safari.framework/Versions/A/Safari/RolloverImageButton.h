/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/RolloverTrackingButton.h>

@class NSImage;

@interface RolloverImageButton : RolloverTrackingButton {

	NSImage* _rolloverImage;

}

@property (nonatomic,retain) NSImage * rolloverImage;              //@synthesize rolloverImage=_rolloverImage - In the implementation block
-(void)setRolloverImage:(NSImage *)arg1 ;
-(void)_setAttributes;
-(char)shouldUseRolloverAppearance;
-(NSImage *)rolloverImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)awakeFromNib;
@end

