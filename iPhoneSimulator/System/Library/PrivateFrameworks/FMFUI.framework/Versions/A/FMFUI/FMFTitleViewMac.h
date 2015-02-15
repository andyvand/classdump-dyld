/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/Versions/A/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <AppKit/NSView.h>

@class NSTextField;

@interface FMFTitleViewMac : NSView {

	NSTextField* _titleLabel;
	NSTextField* _subtitleLabel;

}

@property (nonatomic,retain) NSTextField * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSTextField * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(void)updateLocation:(id)arg1 ;
-(NSTextField *)titleLabel;
-(void)setTitleLabel:(NSTextField *)arg1 ;
-(void)_updateLabels:(id)arg1 ;
-(NSTextField *)subtitleLabel;
-(void)setSubtitleLabel:(NSTextField *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

