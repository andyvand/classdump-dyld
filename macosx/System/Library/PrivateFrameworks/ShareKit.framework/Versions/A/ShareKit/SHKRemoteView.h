/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <ViewBridge/NSLayerCentricRemoteView.h>
#import <ShareKit/NSRemoteViewDelegate.h>
#import <ShareKit/SHKClientDelegate.h>

@class SHKRemoteWindowController, NSString, NSWindow;

@interface SHKRemoteView : NSLayerCentricRemoteView <NSRemoteViewDelegate, SHKClientDelegate> {

	char _shouldDimSourceWindow;
	char _isInNotificationCenter;
	SHKRemoteWindowController* _remoteWindowController;
	NSString* _uuidString;
	NSWindow* _parentWindow;
	CGSize _preferredContentSize;
	CGRect _sourceWindowFrame;
	CGRect _sourceWindowScreenVisibleFrame;
	CGRect _sourceWindowContentRect;

}

@property (__weak) SHKRemoteWindowController * remoteWindowController;              //@synthesize remoteWindowController=_remoteWindowController - In the implementation block
@property (retain) NSString * uuidString;                                           //@synthesize uuidString=_uuidString - In the implementation block
@property (__weak) NSWindow * parentWindow;                                         //@synthesize parentWindow=_parentWindow - In the implementation block
@property (assign) CGRect sourceWindowFrame;                                        //@synthesize sourceWindowFrame=_sourceWindowFrame - In the implementation block
@property (assign) CGRect sourceWindowScreenVisibleFrame;                           //@synthesize sourceWindowScreenVisibleFrame=_sourceWindowScreenVisibleFrame - In the implementation block
@property (assign) CGRect sourceWindowContentRect;                                  //@synthesize sourceWindowContentRect=_sourceWindowContentRect - In the implementation block
@property (assign) CGSize preferredContentSize;                                     //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign) char shouldDimSourceWindow;                                      //@synthesize shouldDimSourceWindow=_shouldDimSourceWindow - In the implementation block
@property (assign) char isInNotificationCenter;                                     //@synthesize isInNotificationCenter=_isInNotificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRemoteWindowController:(SHKRemoteWindowController *)arg1 ;
-(SHKRemoteWindowController *)remoteWindowController;
-(void)synchronizeAnimationsInActions:(/*^block*/id)arg1 ;
-(NSString *)uuidString;
-(void)cancelServiceUI;
-(CGRect)sourceWindowFrame;
-(char)isInNotificationCenter;
-(CGRect)sourceWindowScreenVisibleFrame;
-(CGRect)sourceWindowContentRect;
-(char)shouldDimSourceWindow;
-(void)setShouldDimSourceWindow:(char)arg1 ;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(void)setSourceWindowFrame:(CGRect)arg1 ;
-(void)setSourceWindowScreenVisibleFrame:(CGRect)arg1 ;
-(void)setSourceWindowContentRect:(CGRect)arg1 ;
-(void)setUuidString:(NSString *)arg1 ;
-(void)setIsInNotificationCenter:(char)arg1 ;
-(void)invalidate;
-(NSWindow *)parentWindow;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(void)viewDidAdvanceToRunPhase:(id)arg1 ;
-(id)serviceViewControllerInterface;
-(id)exportedInterface;
-(id)exportedObject;
-(char)view:(id)arg1 shouldResize:(CGSize)arg2 ;
-(char)viewShouldDragOldestAncestorWindow:(id)arg1 ;
@end

