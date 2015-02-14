/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPKCharacterEntity;
#import <CharacterPicker/CharacterPicker-Structs.h>
@class CPKPopover, CPKPopoverController, NSButton, CPKWindowTitleView, NSWindow;

@interface CPKWindowPrivateStorage : NSObject {

	CPKPopover* _parentPopover;
	CPKPopoverController* _smallViewController;
	NSButton* _smallViewCloseButton;
	CPKWindowTitleView* _smallViewTitleField;
	CGRect _lastWindowFrame;
	NSWindow* _lastKeyWindow;
	char _bringBackLastKeyWindow;
	char _transformPrepared;
	char _transformFromPopover;
	char _nowTransforming;
	id<CPKCharacterEntity> _pendingCharacter;
	/*^block*/id _measureFramerateBlock;

}

@property (assign) CPKPopover * parentPopover;                              //@synthesize parentPopover=_parentPopover - In the implementation block
@property (retain) CPKPopoverController * smallViewController;              //@synthesize smallViewController=_smallViewController - In the implementation block
@property (retain) NSButton * smallViewCloseButton;                         //@synthesize smallViewCloseButton=_smallViewCloseButton - In the implementation block
@property (retain) CPKWindowTitleView * smallViewTitleField;                //@synthesize smallViewTitleField=_smallViewTitleField - In the implementation block
@property (retain) id<CPKCharacterEntity> pendingCharacter;                 //@synthesize pendingCharacter=_pendingCharacter - In the implementation block
@property (assign) CGRect lastWindowFrame;                                  //@synthesize lastWindowFrame=_lastWindowFrame - In the implementation block
@property (assign) NSWindow * lastKeyWindow;                                //@synthesize lastKeyWindow=_lastKeyWindow - In the implementation block
@property (assign) char bringBackLastKeyWindow;                             //@synthesize bringBackLastKeyWindow=_bringBackLastKeyWindow - In the implementation block
@property (assign) char transformPrepared;                                  //@synthesize transformPrepared=_transformPrepared - In the implementation block
@property (assign) char transformFromPopover;                               //@synthesize transformFromPopover=_transformFromPopover - In the implementation block
@property (assign) char nowTransforming;                                    //@synthesize nowTransforming=_nowTransforming - In the implementation block
@property (copy) id measureFramerateBlock;                                  //@synthesize measureFramerateBlock=_measureFramerateBlock - In the implementation block
-(void)setSmallViewController:(CPKPopoverController *)arg1 ;
-(void)setParentPopover:(CPKPopover *)arg1 ;
-(void)setSmallViewCloseButton:(NSButton *)arg1 ;
-(void)setSmallViewTitleField:(CPKWindowTitleView *)arg1 ;
-(CPKPopover *)parentPopover;
-(void)setTransformFromPopover:(char)arg1 ;
-(void)setTransformPrepared:(char)arg1 ;
-(char)nowTransforming;
-(char)transformPrepared;
-(CPKPopoverController *)smallViewController;
-(void)setNowTransforming:(char)arg1 ;
-(NSButton *)smallViewCloseButton;
-(CPKWindowTitleView *)smallViewTitleField;
-(id)measureFramerateBlock;
-(void)setLastKeyWindow:(NSWindow *)arg1 ;
-(void)setBringBackLastKeyWindow:(char)arg1 ;
-(NSWindow *)lastKeyWindow;
-(void)setPendingCharacter:(id<CPKCharacterEntity>)arg1 ;
-(id<CPKCharacterEntity>)pendingCharacter;
-(char)bringBackLastKeyWindow;
-(char)transformFromPopover;
-(void)setMeasureFramerateBlock:(id)arg1 ;
-(void)dealloc;
-(CGRect)lastWindowFrame;
-(void)setLastWindowFrame:(CGRect)arg1 ;
@end

