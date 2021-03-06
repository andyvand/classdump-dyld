/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <AppKit/NSSearchFieldCell.h>

@class NSImage;

@interface BKSearchFieldCell : NSSearchFieldCell {

	NSImage* _focusRingNormalImage;
	NSImage* _focusRingFocusedImage;
	CGSize _drawnSize;

}

@property (assign,nonatomic) CGSize drawnSize;                             //@synthesize drawnSize=_drawnSize - In the implementation block
@property (nonatomic,retain) NSImage * focusRingNormalImage;               //@synthesize focusRingNormalImage=_focusRingNormalImage - In the implementation block
@property (nonatomic,retain) NSImage * focusRingFocusedImage;              //@synthesize focusRingFocusedImage=_focusRingFocusedImage - In the implementation block
-(NSImage *)focusRingFocusedImage;
-(CGSize)drawnSize;
-(void)setDrawnSize:(CGSize)arg1 ;
-(id)p_stretchedImageWithImageName:(id)arg1 frame:(CGRect)arg2 ;
-(void)setFocusRingNormalImage:(NSImage *)arg1 ;
-(void)setFocusRingFocusedImage:(NSImage *)arg1 ;
-(NSImage *)focusRingNormalImage;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)canSmoothFontsInFrame:(CGRect)arg1 forLayerBackedView:(id)arg2 ;
-(CGRect)searchTextRectForBounds:(CGRect)arg1 ;
-(CGRect)searchButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)cancelButtonRectForBounds:(CGRect)arg1 ;
@end

