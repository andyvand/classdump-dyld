/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSPopover.h>

@protocol CPKPopoverDelegate, CPKTargetProvider;
@interface CPKPopover : NSPopover {

	id<CPKPopoverDelegate> _CPKDelegate;
	id<CPKTargetProvider> _CPKTargetProvider;
	void* _CPKUserInfo;
	id _CPKPrivate;

}

@property (assign) id<CPKPopoverDelegate> CPKDelegate;                   //@synthesize CPKDelegate=_CPKDelegate - In the implementation block
@property (assign) id<CPKTargetProvider> CPKTargetProvider;              //@synthesize CPKTargetProvider=_CPKTargetProvider - In the implementation block
@property (assign) void* CPKUserInfo;                                    //@synthesize CPKUserInfo=_CPKUserInfo - In the implementation block
+(id)characterPickerToolbarItem:(id)arg1 ;
-(id)_privateStorage;
-(void)characterDidSelected:(id)arg1 ;
-(void)windowWillClosed:(id)arg1 ;
-(void)_characterViewerWillOpen:(id)arg1 ;
-(void)_characterViewerDidOpen:(id)arg1 ;
-(id<CPKPopoverDelegate>)CPKDelegate;
-(void)setDataSource:(id)arg1 usingBlockOnMainThread:(/*^block*/id)arg2 ;
-(char)_isValidTarget:(id)arg1 ;
-(void)_insertSelectedCharacter:(id)arg1 toTarget:(id)arg2 ;
-(void)_showPopoverFromToolbarItem:(id)arg1 ;
-(void)_showPopoverFromToolbarMenu:(id)arg1 ;
-(void)_popoverDidOpen:(id)arg1 ;
-(void)_popoverDidClose:(id)arg1 ;
-(void)_externalCharacterViewerWindowOpened:(id)arg1 ;
-(void)_externalCharacterViewerWindowRevertedToPicker:(id)arg1 ;
-(char)_showPerformanceLog;
-(void)_popoverWillOpen;
-(void)_showPopoverByCallingSuperclass;
-(id)_actionTarget;
-(void)setDisplayAsWindow:(char)arg1 preferredLoc:(CGPoint)arg2 ;
-(void)_postCharacterPickerOpenedNotification;
-(id)detachedWindowCreate:(char)arg1 ;
-(void)setShowOpeningAnimation:(char)arg1 ;
-(id<CPKTargetProvider>)CPKTargetProvider;
-(void)setCPKTargetProvider:(id<CPKTargetProvider>)arg1 ;
-(void*)CPKUserInfo;
-(void)setCPKUserInfo:(void*)arg1 ;
-(void)setCPKDelegate:(id<CPKPopoverDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDataSource:(id)arg1 ;
-(void)showRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(void)cancelOperation:(id)arg1 ;
-(id)searchString;
-(CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(CGRect)arg3 ;
-(id)initWithDataSource:(id)arg1 ;
-(char)popoverShouldDetach:(id)arg1 ;
-(id)detachableWindowForPopover:(id)arg1 ;
@end

