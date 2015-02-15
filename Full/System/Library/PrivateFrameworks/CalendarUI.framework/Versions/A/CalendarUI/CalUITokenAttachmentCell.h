/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSTokenAttachmentCell.h>

@class CalUITokenFieldController, NSImage;

@interface CalUITokenAttachmentCell : NSTokenAttachmentCell {

	char _attendeeHasAddress;
	CGSize _cachedCellSize;
	CGRect _boundsForCellSize;
	float _attributedStringWidth;
	CGRect _cachedCellFrame;
	char _statusImageIsHighlighted;
	char _statusImageIsSelected;
	CalUITokenFieldController* _tokenFieldController;
	NSImage* _statusImage;
	CGRect _previousCellSizeForBoundsBounds;

}

@property (retain) CalUITokenFieldController * tokenFieldController;              //@synthesize tokenFieldController=_tokenFieldController - In the implementation block
@property (assign) CGSize cachedCellSize;                                         //@synthesize cachedCellSize=_cachedCellSize - In the implementation block
@property (assign) CGRect previousCellSizeForBoundsBounds;                        //@synthesize previousCellSizeForBoundsBounds=_previousCellSizeForBoundsBounds - In the implementation block
@property (retain) NSImage * statusImage;                                         //@synthesize statusImage=_statusImage - In the implementation block
@property (assign) char statusImageIsHighlighted;                                 //@synthesize statusImageIsHighlighted=_statusImageIsHighlighted - In the implementation block
@property (assign) char statusImageIsSelected;                                    //@synthesize statusImageIsSelected=_statusImageIsSelected - In the implementation block
+(id)cellTitleFont;
-(char)shouldDrawBackground;
-(void)setTokenFieldController:(CalUITokenFieldController *)arg1 ;
-(CalUITokenFieldController *)tokenFieldController;
-(double)backgroundRectVerticalOffset;
-(double)cellSizeWidthOffset;
-(id)statusIcon;
-(double)cellSizeHeightOffset;
-(double)imagelessCellSizeHeightOffset;
-(char)shouldHideMenu;
-(double)titleRectHorizontalOffset;
-(double)titleBaselineOffset;
-(double)imagelessTitleBaselineOffset;
-(double)statusIconVerticalOffset;
-(char)statusImageIsHighlighted;
-(char)statusImageIsSelected;
-(void)setStatusImageIsHighlighted:(char)arg1 ;
-(void)setStatusImageIsSelected:(char)arg1 ;
-(CGSize)cachedCellSize;
-(void)setCachedCellSize:(CGSize)arg1 ;
-(CGRect)previousCellSizeForBoundsBounds;
-(void)setPreviousCellSizeForBoundsBounds:(CGRect)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(id)attributedStringValue;
-(double)lineSpacing;
-(CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)tokenBackgroundColor;
-(id)tokenForegroundColor;
-(CGRect)pullDownRectForBounds:(CGRect)arg1 ;
-(void)drawTokenWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)setStatusImage:(NSImage *)arg1 ;
-(NSImage *)statusImage;
@end
