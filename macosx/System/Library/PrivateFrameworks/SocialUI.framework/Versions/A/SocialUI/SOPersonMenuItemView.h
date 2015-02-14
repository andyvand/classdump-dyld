/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSView.h>

@class NSTextField, NSImageCell, NSString;

@interface SOPersonMenuItemView : NSView {

	NSTextField* _titleTextField;
	NSTextField* _labelTextField;
	NSImageCell* _iconCell;
	CGSize _iconOffset;
	CGSize _iconSizeOverride;

}

@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic) CGSize iconOffset;                    //@synthesize iconOffset=_iconOffset - In the implementation block
@property (assign,nonatomic) CGSize iconSizeOverride;              //@synthesize iconSizeOverride=_iconSizeOverride - In the implementation block
@property (retain) NSTextField * titleTextField;                   //@synthesize titleTextField=_titleTextField - In the implementation block
@property (retain) NSTextField * labelTextField;                   //@synthesize labelTextField=_labelTextField - In the implementation block
@property (retain) NSImageCell * iconCell;                         //@synthesize iconCell=_iconCell - In the implementation block
-(NSTextField *)labelTextField;
-(NSTextField *)titleTextField;
-(CGRect)naturalFrame;
-(CGSize)iconOffset;
-(void)setIconOffset:(CGSize)arg1 ;
-(CGSize)iconSizeOverride;
-(void)setIconSizeOverride:(CGSize)arg1 ;
-(void)setTitleTextField:(NSTextField *)arg1 ;
-(void)setLabelTextField:(NSTextField *)arg1 ;
-(NSImageCell *)iconCell;
-(void)setIconCell:(NSImageCell *)arg1 ;
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

