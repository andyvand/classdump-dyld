/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TIconAndTextWithActionCell.h>

@class NSView, NSImage;

@interface FI_TColumnCell : FI_TIconAndTextWithActionCell {

	TFENode* _node;
	TNSRef<NSImage *> _thumbnail;
	TNSRef<NSImage *> _badgeImage;
	TNSRef<NSImage *> _badgeImageSelected;
	NSView* _view;
	BOOL _isEditing;
	BOOL _drawTextIfProgressIsPresent;
	BOOL _drawCancelButton;
	BOOL _hasSpaceForTagImage;
	BOOL _hasSpaceForBadgeImage;
	unsigned _progressState;
	int _progressAmount;

}

@property (nonatomic,retain) NSImage * thumbnail; 
@property (nonatomic,retain) NSImage * badgeImage; 
@property (nonatomic,retain) NSImage * badgeImageSelected; 
@property (assign,nonatomic) NSView * view;                             //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                            //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) BOOL hasSpaceForTagImage;                  //@synthesize hasSpaceForTagImage=_hasSpaceForTagImage - In the implementation block
@property (assign,nonatomic) BOOL hasSpaceForBadgeImage;                //@synthesize hasSpaceForBadgeImage=_hasSpaceForBadgeImage - In the implementation block
-(void)initCommon;
-(void)awakeCommon;
-(void)drawIconWithFrame:(CGRect)arg1 ;
-(BOOL)hasSpaceForTagImage;
-(void)setHasSpaceForTagImage:(BOOL)arg1 ;
-(double)progressWidth:(CGRect)arg1 ;
-(BOOL)hasSpaceForBadgeImage;
-(void)setProgressState:(unsigned)arg1 progressAmount:(int)arg2 drawTextAndProgress:(BOOL)arg3 cancellable:(BOOL)arg4 ;
-(NSImage *)badgeImageSelected;
-(void)setBadgeImageSelected:(NSImage *)arg1 ;
-(void)setHasSpaceForBadgeImage:(BOOL)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(NSView *)view;
-(id)controller;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(BOOL)isEditing;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)setView:(NSView *)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(const TFENode*)node;
-(void)setShowEjectButton:(BOOL)arg1 ;
-(void)setIconSize:(CGSize)arg1 ;
-(void)setBadgeImage:(NSImage *)arg1 ;
-(NSImage *)badgeImage;
-(void)setNode:(const TFENode*)arg1 ;
-(void)setThumbnail:(NSImage *)arg1 ;
-(NSImage *)thumbnail;
@end

