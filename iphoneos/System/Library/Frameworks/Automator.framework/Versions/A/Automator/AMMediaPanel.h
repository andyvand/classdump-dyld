/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSWindowController.h>
#import <Automator/NSWindowDelegate.h>

@class NSSegmentedControl, ILMediaBrowserView, NSPointerArray, NSString;

@interface AMMediaPanel : NSWindowController <NSWindowDelegate> {

	NSSegmentedControl* _segmentedControl;
	ILMediaBrowserView* _mediaBrowserView;
	NSPointerArray* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldDisplayMediaGroup:(id)arg1 ;
+(id)sharedMediaPanel;
-(void)displayAudioBrowser:(id)arg1 ;
-(void)displayImageBrowser:(id)arg1 ;
-(void)displayMovieBrowser:(id)arg1 ;
-(void)selectMediaType:(id)arg1 ;
-(char)mediaBrowserView:(id)arg1 shouldDisplayMediaGroup:(id)arg2 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)showWindow:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowWillClose:(id)arg1 ;
-(id)windowNibName;
-(void)addObserver:(id)arg1 ;
-(id)selectedMediaObjects;
-(void)togglePanel:(id)arg1 ;
@end

