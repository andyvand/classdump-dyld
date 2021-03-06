/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSPopUpButton.h>

@interface FI_TPopUpButton : NSPopUpButton {

	char _acceptsFirstMouse;
	TriStateBool _isEnabledCacheWhenNotKey;
	BOOL _isInsideWindowChangedKeyState;

}

@property (assign) char acceptsFirstMouse;              //@synthesize acceptsFirstMouse=_acceptsFirstMouse - In the implementation block
-(void)setAcceptsFirstMouse:(char)arg1 ;
-(char)acceptsFirstMouse;
-(void)initCommon;
-(void)awakeCommon;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)_windowChangedKeyState;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)awakeFromNib;
@end

