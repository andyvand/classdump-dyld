/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSPanel.h>

@class NSView, NSViewController, NSImage, NSButton;

@interface CPKWindow : NSPanel {

	NSView* _myContentView;
	char _showingAlternateView;
	char _prohibitingZoom;
	NSViewController* _alternateViewController;
	NSImage* _alternateBitmapImage;
	unsigned long long _alternateWindowStyle;
	CGRect _alternateWindowFrame;
	NSButton* _transformButton;
	id _privateData;

}

@property (readonly) NSView * myContentView;                                          //@synthesize myContentView=_myContentView - In the implementation block
@property (assign) char showingAlternateView;                                         //@synthesize showingAlternateView=_showingAlternateView - In the implementation block
@property (assign) char prohibitingZoom;                                              //@synthesize prohibitingZoom=_prohibitingZoom - In the implementation block
@property (nonatomic,retain) NSViewController * alternateViewController;              //@synthesize alternateViewController=_alternateViewController - In the implementation block
@property (retain) NSImage * alternateBitmapImage;                                    //@synthesize alternateBitmapImage=_alternateBitmapImage - In the implementation block
@property (assign) unsigned long long alternateWindowStyle;                           //@synthesize alternateWindowStyle=_alternateWindowStyle - In the implementation block
@property (assign) CGRect alternateWindowFrame;                                       //@synthesize alternateWindowFrame=_alternateWindowFrame - In the implementation block
@property (readonly) NSButton * transformButton;                                      //@synthesize transformButton=_transformButton - In the implementation block
-(id)_privateStorage;
-(void)_characterViewerButtonClicked:(id)arg1 ;
-(void)_didCancelOperation:(id)arg1 ;
-(void)characterDidSelected:(id)arg1 ;
-(void)windowWillClosed:(id)arg1 ;
-(void)_characterViewerWillOpen:(id)arg1 ;
-(void)_characterViewerDidOpen:(id)arg1 ;
-(void)prepareTransformFromPopover:(char)arg1 ;
-(void)setAlternateBitmapImage:(NSImage *)arg1 ;
-(void)_switchWindowStyleToResizable:(char)arg1 ;
-(void)_callWillCloseDelegate;
-(void)_detachedWindowClosed:(id)arg1 ;
-(void)transformWindow;
-(char)prohibitingZoom;
-(id)initWithParentPopover:(id)arg1 ;
-(void)setLastKeyWindow:(id)arg1 bringBack:(char)arg2 ;
-(void)_titlebarClicked:(id)arg1 ;
-(NSView *)myContentView;
-(NSViewController *)alternateViewController;
-(void)setAlternateViewController:(NSViewController *)arg1 ;
-(char)showingAlternateView;
-(void)setShowingAlternateView:(char)arg1 ;
-(void)setProhibitingZoom:(char)arg1 ;
-(unsigned long long)alternateWindowStyle;
-(void)setAlternateWindowStyle:(unsigned long long)arg1 ;
-(CGRect)alternateWindowFrame;
-(void)setAlternateWindowFrame:(CGRect)arg1 ;
-(NSButton *)transformButton;
-(NSImage *)alternateBitmapImage;
-(void)dealloc;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)animationDidEnd:(id)arg1 ;
-(char)canBecomeMainWindow;
-(char)hasKeyAppearance;
-(char)canBecomeKeyWindow;
-(void)cancelOperation:(id)arg1 ;
-(void)performZoom:(id)arg1 ;
@end

