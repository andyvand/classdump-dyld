/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMPlatformCore/IMPlatformCore-Structs.h>
#import <AppKit/NSButton.h>
#import <IMPlatformCore/NSValidatedUserInterfaceItem.h>

@interface IMFourStateImageButton : NSButton <NSValidatedUserInterfaceItem> {

	char _wasFadedOut;
	char _lockOutFade;

}

@property (assign) char lockOutFade;              //@synthesize lockOutFade=_lockOutFade - In the implementation block
+(Class)cellClass;
-(void)prepareToFade:(char)arg1 ;
-(void)setHoverState;
-(void)_firstResponderDidChange:(id)arg1 ;
-(void)validateUserInterface;
-(char)lockOutFade;
-(void)setLockOutFade:(char)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(long long)arg1 ;
-(char)sendAction:(SEL)arg1 to:(id)arg2 ;
-(char)acceptsFirstResponder;
-(void)viewDidMoveToWindow;
-(void)viewWillMoveToWindow:(id)arg1 ;
@end

