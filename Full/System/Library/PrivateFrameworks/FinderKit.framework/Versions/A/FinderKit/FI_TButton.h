/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSButton.h>

@interface FI_TButton : NSButton {

	CGSize _maxSize;
	CGSize _minSize;
	char _acceptsFirstMouse;
	TriStateBool _isEnabledCacheWhenNotKey;
	BOOL _isInsideWindowChangedKeyState;

}

@property (assign,nonatomic) CGSize maxSize;              //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) CGSize minSize;              //@synthesize minSize=_minSize - In the implementation block
@property (assign) char acceptsFirstMouse; 
+(Class)cellClass;
-(void)setAcceptsFirstMouse:(char)arg1 ;
-(char)acceptsFirstMouse;
-(void)initCommon;
-(void)awakeCommon;
-(id)copyButton;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)_windowChangedKeyState;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(CGSize)maxSize;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
-(CGSize)minSize;
-(void)awakeFromNib;
@end

